#pragma once
/* this file was auto-generated from ./src/modules/flow/constant/constant.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>
#include <float.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_CONSTANT_BOOLEAN_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONSTANT_BOOLEAN;

struct sol_flow_node_type_constant_boolean_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONSTANT_BOOLEAN_OPTIONS_API_VERSION (1)
    bool value; /**< Value of constant. (required) */
};

#define SOL_FLOW_NODE_TYPE_CONSTANT_BOOLEAN_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONSTANT_BOOLEAN_OPTIONS_API_VERSION) \
    }, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONSTANT_BOOLEAN__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONSTANT_BOOLEAN__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONSTANT_BYTE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONSTANT_BYTE;

struct sol_flow_node_type_constant_byte_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONSTANT_BYTE_OPTIONS_API_VERSION (1)
    unsigned char value; /**< Value of constant. (required) */
};

#define SOL_FLOW_NODE_TYPE_CONSTANT_BYTE_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONSTANT_BYTE_OPTIONS_API_VERSION) \
    }, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONSTANT_BYTE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONSTANT_BYTE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONSTANT_FLOAT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONSTANT_FLOAT;

struct sol_flow_node_type_constant_float_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONSTANT_FLOAT_OPTIONS_API_VERSION (1)
    double value; /**< Value of constant. (default: 0) */
    struct sol_drange_spec value_spec; /**< Range (min / max) and step of constant. (default: {'step': 'DBL_MIN', 'max': 'DBL_MAX', 'min': '-DBL_MAX'}) */
};

#define SOL_FLOW_NODE_TYPE_CONSTANT_FLOAT_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONSTANT_FLOAT_OPTIONS_API_VERSION) \
    }, \
    .value = 0, \
    .value_spec = {.max=DBL_MAX, .min=-DBL_MAX, .step=DBL_MIN}, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONSTANT_FLOAT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONSTANT_FLOAT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONSTANT_EMPTY_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONSTANT_EMPTY;

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONSTANT_EMPTY__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONSTANT_EMPTY__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONSTANT_INT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONSTANT_INT;

struct sol_flow_node_type_constant_int_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONSTANT_INT_OPTIONS_API_VERSION (1)
    int32_t value; /**< Value of constant. (default: 0) */
    struct sol_irange_spec value_spec; /**< Range (min / max) and step of constant. (default: {'step': 1, 'max': 'INT32_MAX', 'min': 'INT32_MIN'}) */
};

#define SOL_FLOW_NODE_TYPE_CONSTANT_INT_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONSTANT_INT_OPTIONS_API_VERSION) \
    }, \
    .value = 0, \
    .value_spec = {.max=INT32_MAX, .min=INT32_MIN, .step=1}, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONSTANT_INT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONSTANT_INT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONSTANT_RGB_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONSTANT_RGB;

struct sol_flow_node_type_constant_rgb_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONSTANT_RGB_OPTIONS_API_VERSION (1)
    struct sol_rgb value; /**< Value of constant. (required) */
};

#define SOL_FLOW_NODE_TYPE_CONSTANT_RGB_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONSTANT_RGB_OPTIONS_API_VERSION) \
    }, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONSTANT_RGB__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONSTANT_RGB__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONSTANT_DIRECTION_VECTOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONSTANT_DIRECTION_VECTOR;

struct sol_flow_node_type_constant_direction_vector_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONSTANT_DIRECTION_VECTOR_OPTIONS_API_VERSION (1)
    struct sol_direction_vector value; /**< Value of constant. (required) */
};

#define SOL_FLOW_NODE_TYPE_CONSTANT_DIRECTION_VECTOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONSTANT_DIRECTION_VECTOR_OPTIONS_API_VERSION) \
    }, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONSTANT_DIRECTION_VECTOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONSTANT_DIRECTION_VECTOR__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONSTANT_STRING_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONSTANT_STRING;

struct sol_flow_node_type_constant_string_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONSTANT_STRING_OPTIONS_API_VERSION (1)
    const char * value; /**< String to be sent when node is connected. (required) */
};

#define SOL_FLOW_NODE_TYPE_CONSTANT_STRING_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONSTANT_STRING_OPTIONS_API_VERSION) \
    }, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONSTANT_STRING__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONSTANT_STRING__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONSTANT_LOCATION_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONSTANT_LOCATION;

struct sol_flow_node_type_constant_location_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONSTANT_LOCATION_OPTIONS_API_VERSION (1)
    double latitude; /**< Latitude coordinate (default: 0) */
    double longitude; /**< Longitude coordinate (default: 0) */
    double altitude; /**< Altitude coordinate (default: 0) */
};

#define SOL_FLOW_NODE_TYPE_CONSTANT_LOCATION_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONSTANT_LOCATION_OPTIONS_API_VERSION) \
    }, \
    .latitude = 0, \
    .longitude = 0, \
    .altitude = 0, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONSTANT_LOCATION__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONSTANT_LOCATION__OUT_LAST (0)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-constant");

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
