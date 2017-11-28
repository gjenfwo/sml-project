#pragma once
/* this file was auto-generated from ./src/modules/flow/boolean/boolean.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_BOOLEAN_AND;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_2 (2)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_3 (3)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_4 (4)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_5 (5)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_6 (6)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_7 (7)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_8 (8)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_9 (9)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_10 (10)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_11 (11)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_12 (12)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_13 (13)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_14 (14)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_15 (15)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_16 (16)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_17 (17)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_18 (18)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_19 (19)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_20 (20)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_21 (21)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_22 (22)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_23 (23)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_24 (24)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_25 (25)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_26 (26)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_27 (27)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_28 (28)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_29 (29)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_30 (30)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_31 (31)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN__IN_LAST (31)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__IN_LAST (31)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_AND__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_BOOLEAN_COUNTER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_BOOLEAN_COUNTER;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_BOOLEAN_COUNTER__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_COUNTER__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_BOOLEAN_COUNTER__OUT__TRUE (0)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_COUNTER__OUT__FALSE (1)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_COUNTER__OUT_LAST (1)

#define SOL_FLOW_NODE_TYPE_BOOLEAN_FILTER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_BOOLEAN_FILTER;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_BOOLEAN_FILTER__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_FILTER__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_BOOLEAN_FILTER__OUT__TRUE (0)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_FILTER__OUT__FALSE (1)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_FILTER__OUT_LAST (1)

#define SOL_FLOW_NODE_TYPE_BOOLEAN_NOT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_BOOLEAN_NOT;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_BOOLEAN_NOT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_NOT__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_BOOLEAN_NOT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_NOT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_BOOLEAN_OR;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_2 (2)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_3 (3)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_4 (4)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_5 (5)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_6 (6)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_7 (7)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_8 (8)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_9 (9)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_10 (10)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_11 (11)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_12 (12)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_13 (13)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_14 (14)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_15 (15)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_16 (16)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_17 (17)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_18 (18)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_19 (19)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_20 (20)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_21 (21)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_22 (22)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_23 (23)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_24 (24)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_25 (25)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_26 (26)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_27 (27)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_28 (28)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_29 (29)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_30 (30)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_31 (31)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN__IN_LAST (31)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__IN_LAST (31)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_OR__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_BOOLEAN_TOGGLE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_BOOLEAN_TOGGLE;

struct sol_flow_node_type_boolean_toggle_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_BOOLEAN_TOGGLE_OPTIONS_API_VERSION (1)
    bool initial_state; /**< the initial state, defaults to false. (default: False) */
};

#define SOL_FLOW_NODE_TYPE_BOOLEAN_TOGGLE_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_BOOLEAN_TOGGLE_OPTIONS_API_VERSION) \
    }, \
    .initial_state = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_BOOLEAN_TOGGLE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_TOGGLE__IN__SET (1)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_TOGGLE__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_BOOLEAN_TOGGLE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_TOGGLE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_BOOLEAN_XOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_BOOLEAN_XOR;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_BOOLEAN_XOR__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_XOR__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_XOR__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_XOR__IN__IN_LAST (1)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_XOR__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_BOOLEAN_XOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_XOR__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_BOOLEAN_BUFFER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_BOOLEAN_BUFFER;

struct sol_flow_node_type_boolean_buffer_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_BOOLEAN_BUFFER_OPTIONS_API_VERSION (1)
    int32_t samples; /**< Number of samples that the buffer should hold. (default: 4) */
    int32_t timeout; /**< Timeout time in milliseconds. Default is zero which means that timeout is disabled. (default: 0) */
    const char * operation; /**< Operation to be applied in the buffer elements to compute the output. Supported operations are: all_true, all_false, any_true, any_false. (default: 'all_true') */
    bool circular; /**< If enabled, it will work just like a circular buffer, so after samples amount is reached it will send a new packet every time a new value is received, reusing last received values. If set to false, after a packet is sent it needs to wait for all samples again (or timeout) since it resets the buffer when samples amount is reached. (default: False) */
};

#define SOL_FLOW_NODE_TYPE_BOOLEAN_BUFFER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_BOOLEAN_BUFFER_OPTIONS_API_VERSION) \
    }, \
    .samples = 4, \
    .timeout = 0, \
    .operation = "all_true", \
    .circular = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_BOOLEAN_BUFFER__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_BUFFER__IN__TIMEOUT (1)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_BUFFER__IN__RESET (2)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_BUFFER__IN_LAST (2)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_BOOLEAN_BUFFER__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_BOOLEAN_BUFFER__OUT_LAST (0)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-boolean");

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
