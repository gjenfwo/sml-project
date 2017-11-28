#pragma once
/* this file was auto-generated from ./src/modules/flow/keyboard/keyboard.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_KEYBOARD_BOOLEAN_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_KEYBOARD_BOOLEAN;

struct sol_flow_node_type_keyboard_boolean_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_KEYBOARD_BOOLEAN_OPTIONS_API_VERSION (1)
    int32_t binary_code; /**< A key's actual ASCII code to capture. (required) */
    bool toggle; /**< Whether to toggle the output value, if the same key is pressed in sequence. (default: False) */
};

#define SOL_FLOW_NODE_TYPE_KEYBOARD_BOOLEAN_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_KEYBOARD_BOOLEAN_OPTIONS_API_VERSION) \
    }, \
    .toggle = false, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_KEYBOARD_BOOLEAN__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_KEYBOARD_BOOLEAN__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_KEYBOARD_INT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_KEYBOARD_INT;

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_KEYBOARD_INT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_KEYBOARD_INT__OUT_LAST (0)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-keyboard");

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
