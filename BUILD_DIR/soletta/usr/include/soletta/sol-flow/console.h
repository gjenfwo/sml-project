#pragma once
/* this file was auto-generated from ./src/modules/flow/console/console.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_CONSOLE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONSOLE;

struct sol_flow_node_type_console_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONSOLE_OPTIONS_API_VERSION (1)
    const char * prefix; /**< prefix messages with given string. (required) */
    const char * suffix; /**< suffix messages with given string. (required) */
    bool output_on_stdout; /**< If true will output to stdout, otherwise stderr. (default: True) */
    bool flush; /**< If true will force flush after messages are printed. (default: True) */
};

#define SOL_FLOW_NODE_TYPE_CONSOLE_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONSOLE_OPTIONS_API_VERSION) \
    }, \
    .prefix = NULL, \
    .suffix = NULL, \
    .output_on_stdout = true, \
    .flush = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONSOLE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONSOLE__IN_LAST (0)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-console");

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
