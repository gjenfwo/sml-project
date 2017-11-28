#pragma once
/* this file was auto-generated from ./src/modules/flow/timer/timer.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_TIMER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_TIMER;

struct sol_flow_node_type_timer_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_TIMER_OPTIONS_API_VERSION (1)
    int32_t interval; /**< Tick interval the timer will start with, in milliseconds. (default: 1000) */
    bool enabled; /**< Set if timer starts enabled or disabled. After initialization state must be changed through input port ENABLED (default: True) */
};

#define SOL_FLOW_NODE_TYPE_TIMER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_TIMER_OPTIONS_API_VERSION) \
    }, \
    .interval = 1000, \
    .enabled = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_TIMER__IN__RESET (0)
#define SOL_FLOW_NODE_TYPE_TIMER__IN__INTERVAL (1)
#define SOL_FLOW_NODE_TYPE_TIMER__IN__ENABLED (2)
#define SOL_FLOW_NODE_TYPE_TIMER__IN_LAST (2)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_TIMER__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_TIMER__OUT_LAST (0)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-timer");

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
