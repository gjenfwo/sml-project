#pragma once
/* this file was auto-generated from ./src/modules/flow/persistence/persistence.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>
#include <float.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_PERSISTENCE_BOOLEAN_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_PERSISTENCE_BOOLEAN;

struct sol_flow_node_type_persistence_boolean_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_BOOLEAN_OPTIONS_API_VERSION (1)
    const char * name; /**< Name to persist a boolean packet. If 'storage' is 'fs', name can be a fully fledged path to the file where the value will be stored. (required) */
    const char * storage; /**< Storage where data will be persisted. It can be of the following: fs, efivars (required) */
    bool default_value; /**< Default value for this node, when there's no previous value persisted (default: False) */
};

#define SOL_FLOW_NODE_TYPE_PERSISTENCE_BOOLEAN_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_PERSISTENCE_BOOLEAN_OPTIONS_API_VERSION) \
    }, \
    .default_value = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_BOOLEAN__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_BOOLEAN__IN__RESET (1)
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_BOOLEAN__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_BOOLEAN__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_BOOLEAN__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_PERSISTENCE_BYTE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_PERSISTENCE_BYTE;

struct sol_flow_node_type_persistence_byte_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_BYTE_OPTIONS_API_VERSION (1)
    const char * name; /**< Name to persist a byte packet. If 'storage' is 'fs', name can be a fully fledged path to the file where the value will be stored. (required) */
    const char * storage; /**< Storage where data will be persisted. It can be of the following: fs, efivars (required) */
    unsigned char default_value; /**< Default value for this node, when there's no previous value persisted (default: 0) */
};

#define SOL_FLOW_NODE_TYPE_PERSISTENCE_BYTE_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_PERSISTENCE_BYTE_OPTIONS_API_VERSION) \
    }, \
    .default_value = 0, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_BYTE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_BYTE__IN__RESET (1)
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_BYTE__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_BYTE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_BYTE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_PERSISTENCE_FLOAT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_PERSISTENCE_FLOAT;

struct sol_flow_node_type_persistence_float_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_FLOAT_OPTIONS_API_VERSION (1)
    const char * name; /**< Name to persist a float packet. If 'storage' is 'fs', name can be a fully fledged path to the file where the value will be stored. (required) */
    const char * storage; /**< Storage where data will be persisted. It can be of the following: fs, efivars (required) */
    double default_value; /**< Default value for this node, when there's no previous value persisted (default: 0.0) */
    struct sol_drange_spec default_value_spec; /**< Default range for this node, when there's no previous value persisted (default: {'max': 'DBL_MAX', 'step': 'DBL_MIN', 'min': '-DBL_MAX'}) */
    bool store_only_val; /**< Store only drange val, discarding min, max and step values (default: False) */
};

#define SOL_FLOW_NODE_TYPE_PERSISTENCE_FLOAT_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_PERSISTENCE_FLOAT_OPTIONS_API_VERSION) \
    }, \
    .default_value = 0.0, \
    .default_value_spec = {.max=DBL_MAX, .min=-DBL_MAX, .step=DBL_MIN}, \
    .store_only_val = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_FLOAT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_FLOAT__IN__RESET (1)
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_FLOAT__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_FLOAT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_FLOAT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_PERSISTENCE_INT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_PERSISTENCE_INT;

struct sol_flow_node_type_persistence_int_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_INT_OPTIONS_API_VERSION (1)
    const char * name; /**< Name to persist an integer packet with. If 'storage' is 'fs', the name must be a fully fledged path to the file where the value will be stored. (required) */
    const char * storage; /**< Storage where data will be persisted. It can be of the following: fs, efivars (required) */
    int32_t default_value; /**< Default value for this node, when there's no previous value persisted (default: 0) */
    struct sol_irange_spec default_value_spec; /**< Default range for this node, when there's no previous value persisted (default: {'max': 'INT32_MAX', 'step': 1, 'min': 'INT32_MIN'}) */
    bool store_only_val; /**< Store only irange val, discarding min, max and step values (default: False) */
};

#define SOL_FLOW_NODE_TYPE_PERSISTENCE_INT_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_PERSISTENCE_INT_OPTIONS_API_VERSION) \
    }, \
    .default_value = 0, \
    .default_value_spec = {.max=INT32_MAX, .min=INT32_MIN, .step=1}, \
    .store_only_val = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_INT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_INT__IN__RESET (1)
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_INT__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_INT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_INT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_PERSISTENCE_STRING_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_PERSISTENCE_STRING;

struct sol_flow_node_type_persistence_string_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_STRING_OPTIONS_API_VERSION (1)
    const char * name; /**< Name to persist a string packet. If 'storage' is 'fs', name can be a fully fledged path to the file where the value will be stored. (required) */
    const char * storage; /**< Storage where data will be persisted. It can be of the following: fs, efivars (required) */
    const char * default_value; /**< Default value for this node, when there's no previous value persisted (default: '') */
};

#define SOL_FLOW_NODE_TYPE_PERSISTENCE_STRING_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_PERSISTENCE_STRING_OPTIONS_API_VERSION) \
    }, \
    .default_value = "", \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_STRING__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_STRING__IN__RESET (1)
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_STRING__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_STRING__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_STRING__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_PERSISTENCE_RGB_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_PERSISTENCE_RGB;

struct sol_flow_node_type_persistence_rgb_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_RGB_OPTIONS_API_VERSION (1)
    const char * name; /**< Name to persist a rgb packet. If 'storage' is 'fs', name can be a fully fledged path to the file where the value will be stored. (required) */
    const char * storage; /**< Storage where data will be persisted. It can be of the following: fs, efivars (required) */
    struct sol_rgb default_value; /**< Default value for this node, when there's no previous value persisted (default: {'blue': 0, 'green': 0, 'red': 0}) */
};

#define SOL_FLOW_NODE_TYPE_PERSISTENCE_RGB_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_PERSISTENCE_RGB_OPTIONS_API_VERSION) \
    }, \
    .default_value = {.blue=0, .blue_max=255, .green=0, .green_max=255, .red=0, .red_max=255}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_RGB__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_RGB__IN__RESET (1)
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_RGB__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_RGB__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_RGB__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_PERSISTENCE_DIRECTION_VECTOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_PERSISTENCE_DIRECTION_VECTOR;

struct sol_flow_node_type_persistence_direction_vector_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_DIRECTION_VECTOR_OPTIONS_API_VERSION (1)
    const char * name; /**< Name to persist a direction-vector packet. If 'storage' is 'fs', name can be a fully fledged path to the file where the value will be stored. (required) */
    const char * storage; /**< Storage where data will be persisted. It can be of the following: fs, efivars (required) */
    struct sol_direction_vector default_value; /**< Default value for this node, when there's no previous value persisted (default: {'y': 0, 'x': 0, 'z': 0}) */
};

#define SOL_FLOW_NODE_TYPE_PERSISTENCE_DIRECTION_VECTOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_PERSISTENCE_DIRECTION_VECTOR_OPTIONS_API_VERSION) \
    }, \
    .default_value = {.max=DBL_MAX, .min=-DBL_MAX, .x=0, .y=0, .z=0}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_DIRECTION_VECTOR__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_DIRECTION_VECTOR__IN__RESET (1)
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_DIRECTION_VECTOR__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_DIRECTION_VECTOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_PERSISTENCE_DIRECTION_VECTOR__OUT_LAST (0)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-persistence");

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
