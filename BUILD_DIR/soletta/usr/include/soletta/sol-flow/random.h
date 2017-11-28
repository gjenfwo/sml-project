#pragma once
/* this file was auto-generated from ./src/modules/flow/random/random.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_RANDOM_BOOLEAN_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_RANDOM_BOOLEAN;

struct sol_flow_node_type_random_boolean_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_RANDOM_BOOLEAN_OPTIONS_API_VERSION (1)
    int32_t seed; /**< Seed value. Sequences are repeatable by using the same seed. (default: 1) */
};

#define SOL_FLOW_NODE_TYPE_RANDOM_BOOLEAN_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_RANDOM_BOOLEAN_OPTIONS_API_VERSION) \
    }, \
    .seed = 1, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_RANDOM_BOOLEAN__IN__SEED (0)
#define SOL_FLOW_NODE_TYPE_RANDOM_BOOLEAN__IN__IN (1)
#define SOL_FLOW_NODE_TYPE_RANDOM_BOOLEAN__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_RANDOM_BOOLEAN__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_RANDOM_BOOLEAN__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_RANDOM_BYTE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_RANDOM_BYTE;

struct sol_flow_node_type_random_byte_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_RANDOM_BYTE_OPTIONS_API_VERSION (1)
    int32_t seed; /**< Seed value. Sequences are repeatable by using the same seed. (default: 1) */
};

#define SOL_FLOW_NODE_TYPE_RANDOM_BYTE_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_RANDOM_BYTE_OPTIONS_API_VERSION) \
    }, \
    .seed = 1, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_RANDOM_BYTE__IN__SEED (0)
#define SOL_FLOW_NODE_TYPE_RANDOM_BYTE__IN__IN (1)
#define SOL_FLOW_NODE_TYPE_RANDOM_BYTE__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_RANDOM_BYTE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_RANDOM_BYTE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_RANDOM_FLOAT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_RANDOM_FLOAT;

struct sol_flow_node_type_random_float_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_RANDOM_FLOAT_OPTIONS_API_VERSION (1)
    int32_t seed; /**< Seed value. Sequences are repeatable by using the same seed. (default: 1) */
};

#define SOL_FLOW_NODE_TYPE_RANDOM_FLOAT_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_RANDOM_FLOAT_OPTIONS_API_VERSION) \
    }, \
    .seed = 1, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_RANDOM_FLOAT__IN__SEED (0)
#define SOL_FLOW_NODE_TYPE_RANDOM_FLOAT__IN__IN (1)
#define SOL_FLOW_NODE_TYPE_RANDOM_FLOAT__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_RANDOM_FLOAT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_RANDOM_FLOAT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_RANDOM_INT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_RANDOM_INT;

struct sol_flow_node_type_random_int_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_RANDOM_INT_OPTIONS_API_VERSION (1)
    int32_t seed; /**< Seed value. Sequences are repeatable by using the same seed. (default: 1) */
};

#define SOL_FLOW_NODE_TYPE_RANDOM_INT_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_RANDOM_INT_OPTIONS_API_VERSION) \
    }, \
    .seed = 1, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_RANDOM_INT__IN__SEED (0)
#define SOL_FLOW_NODE_TYPE_RANDOM_INT__IN__IN (1)
#define SOL_FLOW_NODE_TYPE_RANDOM_INT__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_RANDOM_INT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_RANDOM_INT__OUT_LAST (0)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-random");

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
