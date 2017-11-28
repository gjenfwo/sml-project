#pragma once
/* this file was auto-generated from ./src/modules/flow/format/format.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_FORMAT_FLOAT_TO_STRING_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FORMAT_FLOAT_TO_STRING;

struct sol_flow_node_type_format_float_to_string_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_FORMAT_FLOAT_TO_STRING_OPTIONS_API_VERSION (1)
    const char * format_spec; /**< Format string to be used in the conversion. The syntax is the same as Python's string.format() -- https://docs.python.org/3/library/stdtypes.html#str.format --, except that we got no format recursion, no '!' conversions, and the attribute names must be one of the integer fields (val, min, max, step). Numbered fields will get to them in this order. Naturally, there is no field attribute nor field index dereferencing either. (default: '{val:f}') */
};

#define SOL_FLOW_NODE_TYPE_FORMAT_FLOAT_TO_STRING_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_FORMAT_FLOAT_TO_STRING_OPTIONS_API_VERSION) \
    }, \
    .format_spec = "{val:f}", \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FORMAT_FLOAT_TO_STRING__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_FORMAT_FLOAT_TO_STRING__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FORMAT_FLOAT_TO_STRING__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FORMAT_FLOAT_TO_STRING__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FORMAT_INT_TO_STRING_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FORMAT_INT_TO_STRING;

struct sol_flow_node_type_format_int_to_string_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_FORMAT_INT_TO_STRING_OPTIONS_API_VERSION (1)
    const char * format_spec; /**< Format string to be used in the conversion. The syntax is the same as Python's string.format() -- https://docs.python.org/3/library/stdtypes.html#str.format --, except that we got no format recursion, no '!' conversions, and the attribute names must be one of the integer fields (val, min, max, step). Numbered fields will get to them in this order. Naturally, there is no field attribute nor field index dereferencing either. (default: '{val:d}') */
};

#define SOL_FLOW_NODE_TYPE_FORMAT_INT_TO_STRING_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_FORMAT_INT_TO_STRING_OPTIONS_API_VERSION) \
    }, \
    .format_spec = "{val:d}", \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FORMAT_INT_TO_STRING__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_FORMAT_INT_TO_STRING__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FORMAT_INT_TO_STRING__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FORMAT_INT_TO_STRING__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FORMAT_STRING_FORMATTED_FORM_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FORMAT_STRING_FORMATTED_FORM;

struct sol_flow_node_type_format_string_formatted_form_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_FORMAT_STRING_FORMATTED_FORM_OPTIONS_API_VERSION (1)
    int32_t columns; /**< The number of available columns to lay out the output string with. It must be a positive integer. (required) */
    int32_t rows; /**< The number of available rows to lay out the output string with. It must be a positive integer. (required) */
    int32_t blink_time; /**< Cursor blinking time, in miliseconds. (default: 1000) */
    bool circular; /**< Whether the numeric field edition by the UP/DOWN ports is circular or not (wraps from mininim value to maximum and vice-versa). (default: True) */
    const char * value; /**< The value (format) string, to be available for referencing when evaluating the format one by means of the '{value}' tag. Any line breaking characters in this string will be translated to a space instead. This is a format inside the broader one, meant to define the numbered fields to be actually editable by the node. The syntax is a free-form string where fields enclosed by '{}' are treated specially. They must have an entry with Python's number format specification mini-language (https://docs.python.org/3/library/string.html#formatspec), followed by a colon and three comma-separated values defining the field's minimum, maximum and step values. As an exception for the Python's language, empty types are not allowed, and 'n' will always translate to integer. As an example, '{3d:0,255,1}.{3d:0,255,1}.{3d:0,255,1}.{3d:0,255,1}' would make the node have four three-digit integer numbers separated by periods as output--an IPv4 number for user edition. (required) */
    const char * value_default; /**< The default value for the numeric fields' node state, in string form. The string should match the expected form given by the 'value' option, naturally. As an example, if '{3d:0,255,1}.{3d:0,255,1}.{3d:0,255,1}.{3d:0,255,1}' is in the 'value' option, something like '255.255.255.255' would be expected for this option. If this option is not set, the minimum values for each field will be the initial state. (required) */
    const char * title; /**< The title string, to be available for referencing when evaluating the format one by means of the '{title}' tag. Any line breaking characters in this string will be translated to a space instead. If no title is provided, a '{title}' tag in the format will be ignored. (required) */
    const char * format; /**< The format string to produce the final STRING output with. The syntax is a free-form string with one '{value}' sub-string in it (and one optional '{title}' one). The value tag will be replaced by the actual true/false strings defined for the node (true_str/false_str options), while the title one will be replaced by the title string option, if set. The title tag must occur before the value one. (default: '{value}') */
};

#define SOL_FLOW_NODE_TYPE_FORMAT_STRING_FORMATTED_FORM_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_FORMAT_STRING_FORMATTED_FORM_OPTIONS_API_VERSION) \
    }, \
    .blink_time = 1000, \
    .circular = true, \
    .value = NULL, \
    .value_default = NULL, \
    .title = NULL, \
    .format = "{value}", \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FORMAT_STRING_FORMATTED_FORM__IN__SELECTED (0)
#define SOL_FLOW_NODE_TYPE_FORMAT_STRING_FORMATTED_FORM__IN__UP (1)
#define SOL_FLOW_NODE_TYPE_FORMAT_STRING_FORMATTED_FORM__IN__DOWN (2)
#define SOL_FLOW_NODE_TYPE_FORMAT_STRING_FORMATTED_FORM__IN__NEXT (3)
#define SOL_FLOW_NODE_TYPE_FORMAT_STRING_FORMATTED_FORM__IN__PREVIOUS (4)
#define SOL_FLOW_NODE_TYPE_FORMAT_STRING_FORMATTED_FORM__IN__SELECT (5)
#define SOL_FLOW_NODE_TYPE_FORMAT_STRING_FORMATTED_FORM__IN__ENABLED (6)
#define SOL_FLOW_NODE_TYPE_FORMAT_STRING_FORMATTED_FORM__IN_LAST (6)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FORMAT_STRING_FORMATTED_FORM__OUT__STRING (0)
#define SOL_FLOW_NODE_TYPE_FORMAT_STRING_FORMATTED_FORM__OUT__SELECTED (1)
#define SOL_FLOW_NODE_TYPE_FORMAT_STRING_FORMATTED_FORM__OUT_LAST (1)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-format");

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
