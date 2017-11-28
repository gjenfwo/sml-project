#!/usr/bin/env python3

# This file is part of the Soletta (TM) Project
#
# Copyright (C) 2015 Intel Corporation. All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

pkgdatadir = '/usr/share//soletta/'

import json
import jsonschema
import os
import re
import sys

# NOTE: this function is replicated in other files, update all copies!
def json_load_and_check(data_file, schema_file, context_lines=3, schema_max_depth=2, check_schema=True):
    """Full check of JSON, with meaningful error messages.

    This function will open data_file and schema_file, doing full
    validation and returning the object on success, or raising an
    exception on failure.

    On failures, a meaningful message is printed taking previous
    context_lines in log messages, making people able to figure out
    what was wrong.

    Messages are printed in the standard format:

        file:line:column: message

    making it possible for other tools (ie: editors) to locate it for
    users.
    """

    # json is bad and does not provide location as exception fields,
    # but at least it uses 2 fixed formats in its error messages
    # see json/decoder.py errmsg()
    re_single_loc = re.compile(r"^(?P<msg>.*): line (?P<line>\d+) column (?P<column>\d+) [(]char .*[)]$")
    re_range_loc = re.compile(r"^(?P<msg>.*): line (?P<line_start>\d+) column (?P<column_start>\d+) - line (?P<line_end>\d+) column (?P<column_end>\d+) [(]char .*[)]$")

    def show_file_context(lines, filename, lineno, colno, linefmt_size=0):
        if linefmt_size < 1:
            linefmt_size = len("%d" % (lineno,))
        for i in range(max(lineno - context_lines, 0), lineno):
            sys.stderr.write("%s:%0*d: %s\n" %
                             (filename, linefmt_size, i + 1, lines[i]))
        sys.stderr.write("%s:%0*d: %s^\n" %
                         (filename, linefmt_size, lineno, '-' * (colno - 1)))

    def show_json_load_exception(exc, contents, filename):
        excstr = str(exc)
        re_match = re_range_loc.match(excstr)
        lines = contents.split('\n')
        if re_match:
            lineno_start = int(re_match.group("line_start"))
            colno_start = int(re_match.group("column_start"))
            lineno_end = int(re_match.group("line_end"))
            colno_end = int(re_match.group("column_end"))
            colfmt_size = len("%d" % (max(colno_start, colno_end),))
            linefmt_size = len("%d" % (lineno_end,))
            msg = re_match.group("msg")

            show_file_context(lines, filename, lineno_start, colno_start,
                              linefmt_size=linefmt_size)
            sys.stderr.write("%s:%0*d:%0*d: error: start of %s\n" % (
                filename,
                linefmt_size, lineno_start,
                colfmt_size, colno_start, msg))
            show_file_context(lines, filename, lineno_end, colno_end,
                              linefmt_size=linefmt_size)
            sys.stderr.write("%s:%0*d:%0*d: error: end of %s\n" % (
                filename,
                linefmt_size, lineno_end,
                colfmt_size, colno_end, msg))
            return

        re_match = re_single_loc.match(excstr)
        if re_match:
            lineno = int(re_match.group("line"))
            colno = int(re_match.group("column"))
            location = "%s:%d:%d" % (filename, lineno, colno)
            msg = re_match.group("msg")

            char = lines[lineno - 1][colno - 1]
            show_file_context(lines, filename, lineno, colno)
            sys.stderr.write("%s: error: %s\n" % (location, msg))

            if (msg == "Expecting property name enclosed in double quotes" and char == '}') \
               or (msg == "Expecting value" and char == ']'):
                sys.stderr.write("%s: error: maybe trailing ',' is dangling prior to closing braces?\n" % (location))
            return
        else:
            sys.stderr.write("%s: error: %s\n" % (filename,  excstr))
            return

    def load_json(file):
        contents = file.read()
        try:
            return json.loads(contents)
        except ValueError as e:
            show_json_load_exception(e, contents, file.name)
            raise

    def show_schema_exception(exc, filename):
        if not exc.context:
            sys.stderr.write("%s: %s\n" % (filename, exc.message))
            return

        def path_to_str(path, varname="json"):
            s = "%s" % (varname,)
            for p in path:
                s += '[%r]' % p
            return s

        def show_obj(msg, obj, abspath):
            abspathstr = path_to_str(abspath)
            if isinstance(obj, dict):
                sys.stderr.write("%s: %s at %s = {\n" %
                                 (filename, msg, abspathstr))
                for k in sorted(obj.keys()):
                    klen = len(k)
                    val = json.dumps(obj[k], sort_keys=True)
                    if len(val) + klen > 50:
                        maxlen = max(50 - klen, 10)
                        val = "%s...%s" % (val[:maxlen], val[-1])
                    sys.stderr.write("%s:    %r: %s\n" % (filename, k, val))
                sys.stderr.write("%s: }\n" % (filename,))
            elif isinstance(obj, list):
                sys.stderr.write("%s: %s at %s = [\n" %
                                 (filename, msg, abspathstr))
                fmtlen = len("%d" % len(obj))
                for i, val in enumerate(obj):
                    val = json.dumps(val, sort_keys=True)
                    if len(val) > 50:
                        val = "%s...%s" % (val[:50], val[-1])
                    sys.stderr.write("%s:   %0*d: %s\n" %
                                     (filename, fmtlen, i, val))
                sys.stderr.write("%s: ]\n" % (filename,))
            else:
                parent_path = list(abspath)[:-1]
                parent_obj = exc.instance
                for p in parent_path:
                    parent_obj = parent_obj[p]
                show_obj("parent of " + msg, parent_obj, parent_path)

        def show_schema(schemaobj, abspath):
            abspathstr = path_to_str(abspath)
            sys.stderr.write("%s: schema at %s:\n" % (filename, abspathstr))

            def show_list(lst, indent=1):
                if schema_max_depth > 0 and indent > schema_max_depth:
                    return
                indentstr = "  " * indent
                for i, v in enumerate(lst):
                    if isinstance(v, dict):
                        show_dict(v, indent + 1)
                    elif isinstance(v, list):
                        show_list(v, indent + 1)
                    else:
                        sys.stderr.write("%s: %s%r\n" % (filename, indentstr, v))

            def show_dict(obj, indent=1):
                if schema_max_depth > 0 and indent > schema_max_depth:
                    return
                indentstr = "  " * indent
                for k in sorted(obj.keys()):
                    sys.stderr.write("%s: %s%s: " % (filename, indentstr, k))
                    v = obj[k]
                    if isinstance(v, str) and k == "$ref":
                        with validator.resolver.resolving(v) as resolved:
                            sys.stderr.write("%s (expanded below)\n" % (v,))
                            show_dict(resolved, indent + 1)

                    elif isinstance(v, dict):
                        sys.stderr.write("\n")
                        show_dict(v, indent + 1)
                    elif isinstance(v, list):
                        sys.stderr.write("\n")
                        show_list(v, indent + 1)
                    else:
                        sys.stderr.write("%r\n" % (v,))

            for k in sorted(schemaobj.keys()):
                v = schemaobj[k]
                sys.stderr.write("%s:   %s: " % (filename, k))
                if isinstance(v, list):
                    sys.stderr.write("\n")
                    show_list(v)
                elif isinstance(v, dict):
                    sys.stderr.write("\n")
                    show_dict(v)
                else:
                    sys.stderr.write("%s\n" % (v,))

        ctx = exc.context[-1]
        abspathstr = path_to_str(ctx.absolute_path)
        obj = ctx.instance
        show_obj("faulty object", obj, ctx.absolute_path)
        if schema_max_depth != 0:
            show_schema(ctx.schema, ctx.absolute_schema_path)
        sys.stderr.write("%s: error: %s: %s\n" % (filename, abspathstr, ctx.message))

    data = load_json(data_file)
    schema = load_json(schema_file)

    validator_cls = jsonschema.validators.validator_for(schema)
    try:
        if check_schema:
            validator_cls.check_schema(schema)
    except jsonschema.SchemaError as e:
        show_schema_exception(e, schema_file.name)
        raise

    validator = validator_cls(schema)
    e = None
    for e in sorted(validator.descend(data, schema), key=lambda e: e.schema_path):
        show_schema_exception(e, data_file.name)
    if e:
        raise e
    return data


def c_clean(string):
    return re.sub('[^A-Za-z0-9_]', '_', string)

data_type_to_c_map = {
    "boolean": "bool",
    "byte": "unsigned char",
    "drange-spec": "struct sol_drange_spec",
    "float": "double",
    "int": "int32_t",
    "irange-spec": "struct sol_irange_spec",
    "rgb": "struct sol_rgb",
    "direction-vector": "struct sol_direction_vector",
    "string": "const char *",
    "location": "struct sol_location",
    "timestamp": "struct timespec"
    }
def data_type_to_c(typename):
    return data_type_to_c_map[typename]

data_type_to_default_member_map = {
    "boolean": "b",
    "byte": "byte",
    "drange-spec": "drange_spec",
    "float": "f",
    "int": "i",
    "irange-spec": "irange_spec",
    "string": "s",
    "rgb": "rgb",
    "direction-vector": "direction_vector"
    }
composed_types_signatures = {}

def data_type_to_default_member(typename):
    return data_type_to_default_member_map.get(typename, "ptr")

data_type_to_packet_type_map = {
    "empty": "SOL_FLOW_PACKET_TYPE_EMPTY",
    "boolean": "SOL_FLOW_PACKET_TYPE_BOOL",
    "int": "SOL_FLOW_PACKET_TYPE_IRANGE",
    "byte": "SOL_FLOW_PACKET_TYPE_BYTE",
    "string": "SOL_FLOW_PACKET_TYPE_STRING",
    "blob": "SOL_FLOW_PACKET_TYPE_BLOB",
    "json-object": "SOL_FLOW_PACKET_TYPE_JSON_OBJECT",
    "json-array": "SOL_FLOW_PACKET_TYPE_JSON_ARRAY",
    "float": "SOL_FLOW_PACKET_TYPE_DRANGE",
    "rgb": "SOL_FLOW_PACKET_TYPE_RGB",
    "direction-vector": "SOL_FLOW_PACKET_TYPE_DIRECTION_VECTOR",
    "location": "SOL_FLOW_PACKET_TYPE_LOCATION",
    "timestamp": "SOL_FLOW_PACKET_TYPE_TIMESTAMP",
    "any": "SOL_FLOW_PACKET_TYPE_ANY",
    "error": "SOL_FLOW_PACKET_TYPE_ERROR",
    "http-response": "SOL_FLOW_PACKET_TYPE_HTTP_RESPONSE"
    }
def packet_type_from_data_type(typename):
    if typename.startswith("custom:"):
        return typename.split(':', 1)[1]
    return data_type_to_packet_type_map.get(typename, typename)

def is_composed(typename):
    return typename.startswith("composed:")

def get_composed_types_with_underscore(types):
    return types[len("composed:"):].replace(",", "_").replace("-", "_")

def port_name_and_size(orig_name):
    m = re.match(r"([A-Z0-9_]+)(?:\[([0-9]+)\])?", orig_name)
    portname, size = m.groups('0')
    return (portname, int(size))

def str_to_c(string):
    return '"' + string.replace('"', '\\"') + '"'

def str_to_c_or_null(string):
    if string is None:
        return "NULL";
    else:
        return str_to_c(string)

def bool_to_c(value):
    if value:
        return "true"
    else:
        return "false"


def expand_value(value, data_type):
    if data_type == "direction-vector":
        value.setdefault("x", 0)
        value.setdefault("y", 0)
        value.setdefault("z", 0)
        value.setdefault("max", "DBL_MAX")
        value.setdefault("min", "-DBL_MAX")
    elif data_type == "rgb":
        value.setdefault("red", 0)
        value.setdefault("green", 0)
        value.setdefault("blue", 0)
        value.setdefault("red_max", 255)
        value.setdefault("green_max", 255)
        value.setdefault("blue_max", 255)
    elif data_type == "irange-spec":
        value.setdefault("step", 1)
        value.setdefault("min", "INT32_MIN")
        value.setdefault("max", "INT32_MAX")
    elif data_type == "drange-spec":
        value.setdefault("step", "DBL_MIN")
        value.setdefault("min", "-DBL_MAX")
        value.setdefault("max", "DBL_MAX")

    return value

def json_to_c_struct(data):
    return "{" + \
        ", ".join(".%s=%s" % it for it in sorted(data.items())) + \
        "}"

def value_to_c(value, data_type):
    value = expand_value(value, data_type)
    if data_type == "string":
        return str_to_c_or_null(value)
    elif data_type == "boolean":
        return bool_to_c(value)
    elif data_type in ("rgb", "direction-vector", "irange-spec", "drange-spec"):
        return json_to_c_struct(value)
    else:
        return "%s" % (value)


def load_json(infile, schema, prefix):
    data = json_load_and_check(infile, schema)

    prefix_c = ""
    if prefix:
        prefix_c = c_clean(prefix)

    name_c = c_clean(data["name"].lower())
    if prefix_c:
        name_c = prefix_c + "_" + name_c

    data["name_c"] = name_c
    data["NAME_C"] = name_c.upper()
    data["prefix_c"] = prefix_c
    return data


def uses_float(data):
    if "types" in data:
        for t in data["types"]:
            header = uses_float(t)
            if header:
                return header
    elif "options" in data and "members" in data["options"]:
        for o in data["options"]["members"]:
            if o["data_type"] in ["direction-vector", "drange", "drange-spec", "float"]:
                return "#include <float.h>\n"
    return ""


def generate_header_head(outfile, data):
    outfile.write("""\
#pragma once
/* this file was auto-generated from %(input)s */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>
%(float_h)s

#ifdef __cplusplus
extern "C" {
#endif
""" % {
    "input": data["input"],
    "name_c": data["name_c"],
    "NAME_C": data["NAME_C"],
    "float_h": uses_float(data),
})

# "ifndef SOL_LOG_DOMAIN" is there to aid on cases where a node
# aggregates sub-node types, thus including their log domains. In that
# case, the first generated header to be included must be the one with
# the actual log domain to apply
def generate_header_tail(outfile, data):
    outfile.write("""
#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name) \
    SOL_ATTR_UNUSED struct sol_log_domain _var = { \
        .name = "sol-" _name, \
        .color = SOL_LOG_COLOR_MAGENTA, \
        .level = SOL_LOG_LEVEL_WARNING \
    }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name) \
    static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, \"%(domain)s\");

#else // #ifdef SOL_LOG_ENABLED

#define SOL_LOG_INTERNAL_DECLARE(_var, _name)
#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)

#ifdef SOL_LOG_DOMAIN
#undef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN NULL
#endif // #ifdef SOL_LOG_DOMAIN

#endif // #ifdef SOL_LOG_ENABLED
#endif // ifndef SOL_LOG_DOMAIN

#ifdef __cplusplus
}
#endif
"""  % {
    "domain": "flow-" + c_clean(data["name"].lower())
})

def generate_composed_type_get_signature(outfile, composed_type, prefix):
    types = composed_type[len("composed:"):]
    types_with_underscore = types.replace(",", "_").replace("-", "_")
    sig = "%s_get_composed_%s_packet_type(void)" % (prefix, types_with_underscore)
    if sig in composed_types_signatures:
        return
    composed_types_signatures[sig] = types
    outfile.write("const struct sol_flow_packet_type *%s;\n" % (sig))

def generate_header_entry(outfile, data):
    outfile.write("""\

#define %(NAME_C)s_DEFINED 1
extern const struct sol_flow_node_type *%(NAME_C)s;
""" % {
    "input": data["input"],
    "NAME_C": data["NAME_C"],
})

    if "options" in data:
        outfile.write("""
struct %(name_c)s_options {
    struct sol_flow_node_options base;
#define %(NAME_C)s_OPTIONS_API_VERSION (%(options_version)d)
""" % {
    "name_c": data["name_c"],
    "NAME_C": data["NAME_C"],
    "options_version": data["options"]["version"],
})
        if "members" in data["options"]:
            for o in data["options"]["members"]:
                doc = o.get("description", "")
                default = o.get("default")
                if default is not None:
                    doc += " (default: %r)" % (default,)
                else:
                    doc += " (required)"

                outfile.write("""\
    %(type)s %(name)s; /**< %(doc)s */
""" % {
    "type": data_type_to_c(o["data_type"]),
    "name": o["name"],
    "doc": doc,
    })
        outfile.write("};\n")

        outfile.write("""
#define %(NAME_C)s_OPTIONS_DEFAULTS(...) { \\
    .base = { \\
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \\
        SOL_SET_API_VERSION(.sub_api = %(NAME_C)s_OPTIONS_API_VERSION) \\
    }, \\
""" % {
    "name_c": data["name_c"],
    "NAME_C": data["NAME_C"]
    })
        if "members" in data["options"]:
            for o in data["options"]["members"]:
                if "default" in o:
                    outfile.write("""\
    .%(name)s = %(value)s, \\
""" % {
    "name": o["name"],
    "value": value_to_c(o["default"], o["data_type"])
    })
        outfile.write("""\
    __VA_ARGS__ \\
}""")

    if "in_ports" in data:
        port_number_offset = 0
        outfile.write("\n/* Input Ports */\n")
        for i, o in enumerate(data["in_ports"]):
            pname, psize = port_name_and_size(o["name"])
            outfile.write("#define %s__IN__%s (%d)\n" % (
                data["NAME_C"], c_clean(pname).upper(), i + port_number_offset))
            for port_idx in range(psize):
                outfile.write("#define %s__IN__%s_%d (%d)\n" % (
                    data["NAME_C"], c_clean(pname).upper(),
                    port_idx, i + port_number_offset))
                port_number_offset += 1
            else:
                if psize > 0:
                    port_number_offset -= 1
                    outfile.write("#define %s__IN__%s_LAST (%d)\n" % (
                        data["NAME_C"], c_clean(pname).upper(),
                        i + port_number_offset))
            if is_composed(o["data_type"]):
                generate_composed_type_get_signature(outfile, o["data_type"], data["name_c"])
        outfile.write("#define %s__IN_LAST (%d)\n" % (
            data["NAME_C"], i + port_number_offset))

    if "out_ports" in data:
        port_number_offset = 0
        outfile.write("\n/* Output Ports */\n")
        for i, o in enumerate(data["out_ports"]):
            pname, psize = port_name_and_size(o["name"])
            outfile.write("#define %s__OUT__%s (%d)\n" % (
                data["NAME_C"], c_clean(pname).upper(), i + port_number_offset))
            for port_idx in range(psize):
                outfile.write("#define %s__OUT__%s_%d (%d)\n" % (
                    data["NAME_C"], c_clean(pname).upper(),
                    port_idx, i + port_number_offset))
                port_number_offset += 1
            else:
                if psize > 0:
                    port_number_offset -= 1
                    outfile.write("#define %s__OUT__%s_LAST (%d)\n" % (
                        data["NAME_C"], c_clean(pname).upper(),
                        i + port_number_offset))
            if is_composed(o["data_type"]):
                generate_composed_type_get_signature(outfile, o["data_type"], data["name_c"])
        outfile.write("#define %s__OUT_LAST (%d)\n" % (
            data["NAME_C"], i + port_number_offset))


def generate_code_head(outfile, data):
    outfile.write("""\
/* this file was auto-generated from %(input)s.
 * include it from your implementation after your methods and
 * types are defined.
 */
#ifndef %(NAME_C)s_DEFINED
#include "%(namespace)s%(header)s"
#endif
#include <sol-flow-packet.h>
#include <sol-macros.h>
#include <errno.h>
%(float_h)s

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_INIT_ONCE \
    do { \
        static bool _log_internal_init_once_first = true; \
        if (_log_internal_init_once_first) { \
            sol_log_domain_init_level(SOL_LOG_DOMAIN); \
            _log_internal_init_once_first = false; \
        } \
    } while (0)
#else
#define SOL_LOG_INTERNAL_INIT_ONCE
#endif // #ifdef SOL_LOG_ENABLED

static void
log_init(void)
{
    SOL_LOG_INTERNAL_INIT_ONCE;
}

""" % {
    "input": data["input"],
    "header": os.path.basename(data["header"]),
    "namespace": data["namespace"],
    "NAME_C": data["NAME_C"],
    "float_h": uses_float(data)
})


def generate_code_tail(outfile, data):
    outfile.write("""

#ifdef SOL_FLOW_NODE_TYPE_DESCRIPTION_ENABLED

#ifdef SOL_FLOW_NODE_TYPE_MODULE_EXTERNAL

void sol_flow_foreach_module_node_type(bool (*cb)(void *data, const struct sol_flow_node_type *type), const void *data);

SOL_API void
sol_flow_foreach_module_node_type(bool (*cb)(void *data, const struct sol_flow_node_type *type), const void *data)

#else

const struct sol_flow_node_type *sol_flow_foreach_builtin_node_type_%(name)s(bool (*cb)(void *data, const struct sol_flow_node_type *type), const void *data);

SOL_API const struct sol_flow_node_type *
sol_flow_foreach_builtin_node_type_%(name)s(bool (*cb)(void *data, const struct sol_flow_node_type *type), const void *data)

#endif // SOL_FLOW_NODE_TYPE_MODULE_EXTERNAL
{
    static const struct sol_flow_node_type **types[] = {
""" % {
    "name": c_clean(data["name"].lower())
})
    for node_type in data["types"]:
        outfile.write("""\
            &%(NAME_C)s,
""" % {
    "NAME_C" : node_type["NAME_C"]
})
    outfile.write("""\
            NULL
    }, ***itr;

    if (!cb)
#ifdef SOL_FLOW_NODE_TYPE_MODULE_EXTERNAL
        return;
#else
        return NULL;
#endif

    for (itr = types; *itr != NULL; itr++) {
        const struct sol_flow_node_type **type = &**itr;
        if ((*type)->init_type)
            (*type)->init_type();
        if (!cb((void *)data, *type))
#ifdef SOL_FLOW_NODE_TYPE_MODULE_EXTERNAL
            break;
#else
            return *type;
#endif
    }
#ifndef SOL_FLOW_NODE_TYPE_MODULE_EXTERNAL
    return NULL;
#endif
}
#else
#define sol_flow_foreach_module_node_type(cb, data)
#endif // SOL_FLOW_NODE_TYPE_DESCRIPTION_ENABLED
""")

def generate_composed_type_get_function(outfile):
    for key in sorted(composed_types_signatures.keys()):
        packet_types = composed_types_signatures[key].split(",")
        packet_type_final = []
        type_names_underscore = composed_types_signatures[key].replace(",", "_")
        for packet_type in packet_types:
            packet_type_final.append(data_type_to_packet_type_map[packet_type])
        outfile.write("""
const struct sol_flow_packet_type *
%s
{
    static const struct sol_flow_packet_type *composed_type = NULL;

    if (composed_type == NULL) {
        const struct sol_flow_packet_type *types[] = {%s, NULL};
        composed_type = sol_flow_packet_type_composed_new(types);
        SOL_NULL_CHECK(composed_type, NULL);
    }

    return composed_type;
}\n""" % (key, ", ".join(packet_type_final)))

def generate_code_entry(outfile, data):
    methods = data.get("methods", {})
    init_type = None

    in_ports_names = []
    in_ports_count = 0
    in_ports_get_port = ""
    in_data_types = []
    if "in_ports" in data:
        for o in data["in_ports"]:
            if "type" in o:
                continue
            pname, psize = port_name_and_size(o["name"])
            type_c = "%s__in__%s" % (data["name_c"], c_clean(pname))
            in_ports_names.append(type_c)
            if psize == 0: psize = 1
            in_ports_count += psize
            in_ports_get_port += """\
    if (port < %(port_limit)d)
        return &%(port_name)s;
""" % {
    "port_limit": in_ports_count,
    "port_name": type_c
    }
            in_data_types.append(o.get("data_type", "empty"))
            port_methods = o.get("methods", {})
            connect = port_methods.get("connect", "NULL")
            disconnect = port_methods.get("disconnect", "NULL")
            process = port_methods.get("process", "NULL")
            outfile.write("""
static struct sol_flow_port_type_in %(type_c)s = {
    SOL_SET_API_VERSION(.api_version = SOL_FLOW_PORT_TYPE_IN_API_VERSION, )
    .process = %(process)s,
    .connect = %(connect)s,
    .disconnect = %(disconnect)s,
};
""" % {
    "type_c": type_c,
    "process": process,
    "connect": connect,
    "disconnect": disconnect,
    })
    out_ports_names = []
    out_ports_count = 0
    out_ports_get_port = ""
    out_data_types = []
    if "out_ports" in data:
        for o in data["out_ports"]:
            if "type" in o:
                continue
            pname, psize = port_name_and_size(o["name"])
            type_c = "%s__out__%s" % (data["name_c"], c_clean(pname))
            out_ports_names.append(type_c)
            if psize == 0: psize = 1
            out_ports_count += psize
            out_ports_get_port += """\
    if (port < %(port_limit)d)
        return &%(port_name)s;
""" % {
    "port_limit": out_ports_count,
    "port_name": type_c
    }
            out_data_types.append(o.get("data_type", "empty"))
            port_methods = o.get("methods", {})
            connect = port_methods.get("connect", "NULL")
            disconnect = port_methods.get("disconnect", "NULL")
            outfile.write("""
static struct sol_flow_port_type_out %(type_c)s = {
    SOL_SET_API_VERSION(.api_version = SOL_FLOW_PORT_TYPE_OUT_API_VERSION, )
    .connect = %(connect)s,
    .disconnect = %(disconnect)s,
};
""" % {
    "type_c": type_c,
    "connect": connect,
    "disconnect": disconnect,
    })

    if in_ports_names:
        outfile.write("""\
static const struct sol_flow_port_type_in *
%(name_c)s_get_port_in_internal(const struct sol_flow_node_type *type, uint16_t port)
{
%(get_ports)s
    return NULL; /* shouldn't happen, but compiler complains otherwise */
}
""" % {
    "name_c": data["name_c"],
    "get_ports": in_ports_get_port
    })

    if out_ports_names:
        outfile.write("""\
static const struct sol_flow_port_type_out *
%(name_c)s_get_port_out_internal(const struct sol_flow_node_type *type, uint16_t port)
{
%(get_ports)s
    return NULL; /* shouldn't happen, but compiler complains otherwise */
}
""" % {
    "name_c": data["name_c"],
    "get_ports": out_ports_get_port
    })

    outfile.write("""
static void
%(name_c)s_init_type_internal(void)
{
""" % {
    "name_c": data["name_c"],
    })

    if in_ports_names or out_ports_names:
        all_ports_names = in_ports_names + out_ports_names
        all_ports_types = in_data_types + out_data_types
        outfile.write("    if (%s.packet_type == NULL) {\n" % (all_ports_names[0]))

        for port, d_type in zip(all_ports_names, all_ports_types):
            if is_composed(d_type):
                packet_type = "%s_get_composed_%s_packet_type()" % (data["name_c"] , get_composed_types_with_underscore(d_type))
            else:
                packet_type = packet_type_from_data_type(d_type)
            outfile.write("        %s.packet_type = %s;\n"  % (port, packet_type))
        outfile.write("    }\n")

    if "init_type" in methods:
        outfile.write("    %s();\n" % methods.get("init_type"))

    outfile.write(
"""
    log_init();
""")

    outfile.write("""\
}
""")

    if "options" in data:
        outfile.write("""
static const struct %(name_c)s_options %(name_c)s_options_defaults = %(NAME_C)s_OPTIONS_DEFAULTS();
""" % {
    "name_c": data["name_c"],
    "NAME_C": data["NAME_C"],
    })


    outfile.write("""
#ifdef SOL_FLOW_NODE_TYPE_DESCRIPTION_ENABLED
static const struct sol_flow_node_type_description %(name_c)s_description = {
    SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_TYPE_DESCRIPTION_API_VERSION, )
    .name = %(name)s,
    .category = %(category)s,
    .symbol = %(symbol)s,
    .options_symbol = "%(options_symbol)s_options",
    .description = %(description)s,
    .author = %(author)s,
    .url = %(url)s,
    .license = %(license)s,
    .version = %(version)s,
""" % {
    "name_c": data["name_c"],
    "name": str_to_c(data["name"]),
    "category": str_to_c(data["category"]),
    "symbol": str_to_c(data["NAME_C"]),
    "options_symbol": data["name_c"],
    "author": str_to_c_or_null(data.get("author")),
    "description": str_to_c_or_null(data.get("description")),
    "url": str_to_c_or_null(data.get("url")),
    "license": str_to_c_or_null(data.get("license")),
    "version": str_to_c_or_null(data.get("version")),
    })

    if "in_ports" in data:
        outfile.write("""\
    .ports_in = (const struct sol_flow_port_description *const []){
""")
        port_base = 0
        for o in data["in_ports"]:
            pname, psize = port_name_and_size(o["name"])
            outfile.write("""\
            &((const struct sol_flow_port_description){
            .name = %(name)s,
            .description=%(description)s,
            .data_type=%(data_type)s,
            .array_size=%(array_size)d,
            .base_port_idx=%(port_base)d,
            .required=%(required)s,
        }),
""" % {
    "name": str_to_c(pname),
    "description": str_to_c(o.get("description")),
    "data_type": str_to_c_or_null(o.get("data_type")),
    "array_size": psize,
    "port_base": port_base,
    "required": bool_to_c(o.get("required", False)),
    })
            port_base += psize if psize else 1;
        outfile.write("""\
        NULL
    },
""")

    if "out_ports" in data:
        outfile.write("""\
    .ports_out = (const struct sol_flow_port_description *const []){
""")
        port_base = 0
        for o in data["out_ports"]:
            pname, psize = port_name_and_size(o["name"])
            outfile.write("""\
        &((const struct sol_flow_port_description){
            .name = %(name)s,
            .description=%(description)s,
            .data_type=%(data_type)s,
            .array_size=%(array_size)d,
            .base_port_idx=%(port_base)d,
            .required=%(required)s,
        }),
""" % {
    "name": str_to_c(pname),
    "description": str_to_c_or_null(o.get("description")),
    "data_type": str_to_c_or_null(o.get("data_type")),
    "array_size": psize,
    "port_base": port_base,
    "required": bool_to_c(o.get("required", False)),
    })
            port_base += psize if psize else 1;
        outfile.write("""\
        NULL
    },
""")

    if "options" in data:
        required_member = False
        member_options = ""
        if "members" in data["options"]:
            for o in data["options"]["members"]:
                member_options += """\
        {
            .name="%(name)s",
            .description=%(description)s,
            .data_type=%(data_type)s,
            .required=%(required)s,
            .offset=offsetof(struct %(name_c)s_options, %(name)s),
            .size=sizeof(%(type_c)s),
""" % {
    "name": o["name"],
    "description": str_to_c_or_null(o.get("description")),
    "data_type": str_to_c(o["data_type"]),
    "required": "false" if "default" in o else "true",
    "name_c": data["name_c"],
    "type_c": data_type_to_c(o["data_type"]),
    }
                if not "default" in o:
                    required_member = True
                else:
                    member_options += """\
            .defvalue = {
                .%(default_member)s=%(default)s,
            },
""" % {
    "default_member": data_type_to_default_member(o["data_type"]),
    "default": value_to_c(o.get("default"), o["data_type"]),
    }
                member_options += """\
        },
"""

        member_options += """\
            {},
"""
        outfile.write("""\
    .options = &((const struct sol_flow_node_options_description){
        .data_size = sizeof(struct %(name_c)s_options),
        SOL_SET_API_VERSION(.sub_api = %(NAME_C)s_OPTIONS_API_VERSION, )
        .required = %(required)s,
        .members = (const struct sol_flow_node_options_member_description[]){
            %(member_options)s
""" % {
    "name_c": data["name_c"],
    "NAME_C": data["NAME_C"],
    "member_options": member_options,
    "required": bool_to_c(required_member),
    })

        outfile.write("""\
        },
    }),
""")

    outfile.write("""\
};
#endif

""")

    node_type = "struct sol_flow_node_type"
    node_base_type_access_open = ""
    node_base_type_access_close = ""
    node_base_type_access = ""
    if "node_type" in data:
        node_type = data["node_type"]["data_type"]
        for a in data["node_type"]["access"]:
            node_base_type_access_open += ".%s = {" % (a,)
            node_base_type_access_close += "}"
            node_base_type_access += ".%s" % (a,)
        node_base_type_access_close += ","

    data_size = "0"
    if "private_data_type" in data:
        data_size = "sizeof(struct " + data.get("private_data_type") + ")"

    options_size = "sizeof(struct sol_flow_node_options)"
    default_options = "NULL"
    if "options" in data:
        options_size = "sizeof(struct " + data["name_c"] + "_options)"
        default_options = "&" + data["name_c"] + "_options_defaults"

    outfile.write("""\
static const %(node_type)s %(name_c)s = {%(node_base_type_access_open)s
    SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_TYPE_API_VERSION, )
    .data_size = %(data_size)s,
    .options_size = %(options_size)s,
    .default_options = %(default_options)s,
    .init_type = %(name_c)s_init_type_internal,
    .open = %(open)s,
    .close = %(close)s,
""" % {
    "node_type": node_type,
    "node_base_type_access_open": node_base_type_access_open,
    "name_c": data["name_c"],
    "data_size": data_size,
    "options_size": options_size,
    "default_options": default_options,
    "open": methods.get("open", "NULL"),
    "close": methods.get("close", "NULL"),
    })

    if in_ports_names:
        outfile.write("""\
    .ports_in_count = %(count)d,
    .get_port_in = %(name_c)s_get_port_in_internal,
""" % {
    "name_c": data["name_c"],
    "count": in_ports_count,
    })

    if out_ports_names:
        outfile.write("""\
    .ports_out_count = %(count)d,
    .get_port_out = %(name_c)s_get_port_out_internal,
""" % {
    "name_c": data["name_c"],
    "count": out_ports_count,
    })

    outfile.write("""\
#ifdef SOL_FLOW_NODE_TYPE_DESCRIPTION_ENABLED
    .description=&%(name_c)s_description,
#endif
%(node_base_type_access_close)s
""" % {
    "name_c": data["name_c"],
    "node_base_type_access_close": node_base_type_access_close,
    })

    if "node_type" in data and "extra_methods" in data["node_type"]:
        def rec_extra(k, v, indent=0):
            indent += 1
            outfile.write("    " * indent)
            outfile.write(".%s = " % (k,))
            if isinstance(v, str):
                outfile.write(v)
            else:
                outfile.write("{\n")
                for key, value in v.items():
                    rec_extra(key, value, indent)
                outfile.write("    " * indent)
                outfile.write("}")
            outfile.write(",\n")

        for k, v in data["node_type"]["extra_methods"].items():
            rec_extra(k, v)

    outfile.write("""\
};

SOL_API const struct sol_flow_node_type *%(NAME_C)s = &%(name_c)s%(node_base_type_access)s;
""" % {
    "name_c": data["name_c"],
    "NAME_C": data["NAME_C"],
    "node_base_type_access": node_base_type_access,
    })


def generate_description_entry(descriptions, data):
    def dict_copy_nonempty_keys(dst, src, keys):
        for k in keys:
            v = src.get(k)
            if v:
                dst[k] = v

    entry = {
        "symbol": data["NAME_C"],
        "options_symbol": data["name_c"] + "_options",
        "header_file": data["namespace"] + os.path.basename(data["header"]),
        }
    descriptions.append(entry)
    dict_copy_nonempty_keys(entry, data,
                            ("name",
                             "category",
                             "description",
                             "url",
                             "author",
                             "license",
                             "version"))
    if "aliases" in data:
        aliases = []
        entry["aliases"] = aliases
        for alias in data["aliases"]:
            aliases.append(alias)

    if "options" in data:
        options = {"required": False}
        entry["options"] = options
        dict_copy_nonempty_keys(options,
                                data["options"],
                                ("version",
                                 "members"))
        for m in options.get("members", []):
            if "default" not in m:
                m["required"] = True
                options["required"] = True
            else:
                data_type = m["data_type"]
                value = m["default"]
                value = expand_value(value, data_type)

                m["default"] = value
                m["required"] = False

    if "in_ports" in data:
        in_ports = []
        entry["in_ports"] = in_ports
        base_port_idx = 0
        for genspec_port in data["in_ports"]:
            definition_port = {}
            in_ports.append(definition_port)
            pname, psize = port_name_and_size(genspec_port["name"])
            definition_port["name"] = pname
            definition_port["array_size"] = psize
            definition_port["base_port_idx"] = base_port_idx
            dict_copy_nonempty_keys(definition_port,
                                    genspec_port,
                                    ("description",
                                     "required",
                                     "data_type"))
            if "required" not in definition_port:
                definition_port["required"] = False
            if psize == 0:
                base_port_idx += 1
            else:
                base_port_idx += psize

    if "out_ports" in data:
        out_ports = []
        entry["out_ports"] = out_ports
        base_port_idx = 0
        for genspec_port in data["out_ports"]:
            definition_port = {}
            out_ports.append(definition_port)
            pname, psize = port_name_and_size(genspec_port["name"])
            definition_port["name"] = pname
            definition_port["array_size"] = psize
            definition_port["base_port_idx"] = base_port_idx
            dict_copy_nonempty_keys(definition_port,
                                    genspec_port,
                                    ("description",
                                     "required",
                                     "data_type"))
            if "required" not in definition_port:
                definition_port["required"] = False
            if psize == 0:
                base_port_idx += 1
            else:
                base_port_idx += psize


if __name__ == "__main__":
    import argparse
    parser = argparse.ArgumentParser(
        formatter_class=argparse.RawDescriptionHelpFormatter,
        description="""\
Reads sol_flow_node_type specification from JSON and generates all the
C boilerplate to create an usable builtin or external module.
""",
        epilog="""\
The generator specification is a JSON with a list of types, their options,
ports and methods. See an example at:

    https://github.com/solettaproject/soletta/blob/master/src/modules/flow/gpio/gpio.json

It will then generate a C header file with the public interface and the
boilerplate C source to expose these types as both builtin or external
modules. Then the user must create his own C source file that defines
all the functions and structures referenced in the generator
specification. See an example at:

    https://github.com/solettaproject/soletta/blob/master/src/modules/flow/gpio/gpio.c

These should be compiled later such as:

    cc `pkg-config --libs --cflags soletta` \\
        -DSOL_FLOW_NODE_TYPE_MODULE_EXTERNAL=1 \\
        -shared -fPIC module.c -o module.so

One can create an initial 'module.c' based on the generator specification
using the sol-flow-node-type-stub-gen.py tool.

""")

    parser.add_argument("--prefix",
                        help="Prefix to use in C generated code",
                        type=str)
    parser.add_argument("--genspec-schema",
                        help="JSON Schema of the genspec to use for validation",
                        type=argparse.FileType('r', encoding='UTF-8'),
                        default=os.path.join(pkgdatadir,
                                             "flow", "schemas",
                                             "node-type-genspec.schema"))
    parser.add_argument("genspec",
                        help=("Generator specification file in JSON format "
                              "(follows node-type-genspec.schema, "
                              "see --genspec-schema). "
                              "This file contains a list of node types and "
                              "information about their options, ports and "
                              "methods that will result in the generation of "
                              "a series of struct sol_flow_node_type and all "
                              "the required boilerplate to have them usable "
                              "by both builtin or external modules."),
                        type=argparse.FileType('r', encoding='UTF-8'))
    parser.add_argument("output_header",
                        help=("Output header (.h) file. This file will "
                              "contain the public declaration of all "
                              "'struct sol_flow_node_type*', "
                              "their associated "
                              "'struct sol_flow_node_options' and "
                              "C pre-processor (CPP) defines for all ports."),
                        type=argparse.FileType('w', encoding='UTF-8'))
    parser.add_argument("--namespace",
                        help=("The module's namespace i.e sol-flow, for Soletta's "
                              "in tree modules it makes sense to have the namespace "
                              "but for cases where an application is generating a "
                              "custom node type - like it's done in samples we'll "
                              "not want to have the namespace prefix."),
                        type=str, default=None)
    parser.add_argument("output_code",
                        help=("Boilerplate output code (.c) file. This file "
                              "will contain only the declaration of "
                              "boilerplate structures and initializations "
                              "required by 'struct sol_flow_node_type'. "
                              "The node and port methods will be set according "
                              "to the specifications in genspec and usually it "
                              "will be included by an user-defined C file with "
                              "the actual functions and "
                              "private data declarations."),
                        type=argparse.FileType('w', encoding='UTF-8'))
    parser.add_argument("output_description",
                        help=("The JSON description of the module. This file "
                              "is similar to genspec, but instead of "
                              "containing information about methods and "
                              "internal programming information it will "
                              "provide information on how to use the module. "
                              "It is used by tools such as sol-fbp-generator, "
                              "sol-flow-node-type-find.py, IDEs and so on and "
                              "should be installed to %s/flow/schemas") \
                        % (pkgdatadir,),
                        type=str)

    args = parser.parse_args()
    try:
        if args.genspec.name == args.output_description:
            raise SystemExit("genspec == output_description: %s" % (
                args.output_description,))
        if args.output_description == "-":
            output_description = sys.stdout
        else:
            output_description = open(args.output_description, "w", encoding='UTF-8')
        data = load_json(args.genspec, args.genspec_schema, args.prefix)
    except Exception as e:
        if args.output_header and args.output_header.name:
            os.unlink(args.output_header.name)
        if args.output_code and args.output_code.name:
            os.unlink(args.output_code.name)
        if args.output_description != "-" and \
           args.genspec.name == args.output_description:
            os.unlink(args.output_description)
        if isinstance(e, (ValueError, jsonschema.ValidationError, jsonschema.SchemaError)):
            exit(1)
        else:
            raise

    try:
        if not "types" in data:
            tmp = data
            data = {
                "types": [tmp],
                "name": tmp["name"],
                "name_c": tmp["name_c"],
                "NAME_C": tmp["NAME_C"],
                "prefix_c": tmp["prefix_c"],
                }

        data["input"] = args.genspec.name
        data["header"] = args.output_header.name

        if args.namespace:
            data["namespace"] = "%s/" % args.namespace
        else:
            data["namespace"] = ""

        data["source"] = args.output_code.name

        ntypes = len(data["types"])
        output_header = args.output_header
        output_code = args.output_code
        descriptions = []
        generate_header_head(args.output_header, data)
        generate_code_head(args.output_code, data)
        meta = data.get("meta", {})
        for t in data["types"]:
            t.setdefault("license", meta.get("license"))
            t.setdefault("author", meta.get("author"))
            t.setdefault("version", meta.get("version"))
            t["header"] = data["header"]
            t["namespace"] = data["namespace"]
            t["source"] = data["source"]
            t["input"] = data["input"]
            t["name_c"] = data["prefix_c"] + "_" + c_clean(t["name"].lower())
            t["NAME_C"] = t["name_c"].upper()
            t["prefix_c"] = data["prefix_c"]
            generate_header_entry(output_header, t)
            generate_code_entry(output_code, t)
            # internal nodes don't appear in the description json files
            if t["category"] != "internal":
                generate_description_entry(descriptions, t)

        generate_composed_type_get_function(args.output_code)
        generate_header_tail(args.output_header, data)
        generate_code_tail(args.output_code, data)
        output_header.close()
        output_code.close()

        json.dump({data["name"]: descriptions},
                  output_description,
                  indent=True, sort_keys=True)
        output_description.write('\n')
        output_description.close()
    except:
        if args.output_header and args.output_header.name:
            os.unlink(args.output_header.name)
        if args.output_code and args.output_code.name:
            os.unlink(args.output_code.name)
        if args.output_description != "-" and \
           args.genspec.name == args.output_description:
            os.unlink(args.output_description)
        raise
