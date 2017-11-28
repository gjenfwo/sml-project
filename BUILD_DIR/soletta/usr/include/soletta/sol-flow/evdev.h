#pragma once
/* this file was auto-generated from ./src/modules/flow/evdev/evdev.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_EVDEV_BOOLEAN_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_EVDEV_BOOLEAN;

struct sol_flow_node_type_evdev_boolean_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_EVDEV_BOOLEAN_OPTIONS_API_VERSION (1)
    int32_t ev_code; /**< The event code to be monitored (required) */
    const char * path; /**< The event path to be monitored (required) */
    bool on_press; /**< The event is triggered on press (default: True) */
    bool on_release; /**< The event is triggered on release (default: True) */
};

#define SOL_FLOW_NODE_TYPE_EVDEV_BOOLEAN_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_EVDEV_BOOLEAN_OPTIONS_API_VERSION) \
    }, \
    .on_press = true, \
    .on_release = true, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_EVDEV_BOOLEAN__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_EVDEV_BOOLEAN__OUT_LAST (0)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-evdev");

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
