#pragma once
/* this file was auto-generated from ./src/modules/flow/process/process.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_PROCESS_STDIN_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_PROCESS_STDIN;

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_PROCESS_STDIN__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_PROCESS_STDIN__OUT__CLOSED (1)
#define SOL_FLOW_NODE_TYPE_PROCESS_STDIN__OUT_LAST (1)

#define SOL_FLOW_NODE_TYPE_PROCESS_STDOUT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_PROCESS_STDOUT;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_PROCESS_STDOUT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_PROCESS_STDOUT__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_PROCESS_STDOUT__OUT__CLOSED (0)
#define SOL_FLOW_NODE_TYPE_PROCESS_STDOUT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_PROCESS_STDERR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_PROCESS_STDERR;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_PROCESS_STDERR__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_PROCESS_STDERR__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_PROCESS_STDERR__OUT__CLOSED (0)
#define SOL_FLOW_NODE_TYPE_PROCESS_STDERR__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_PROCESS_SUBPROCESS_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_PROCESS_SUBPROCESS;

struct sol_flow_node_type_process_subprocess_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_PROCESS_SUBPROCESS_OPTIONS_API_VERSION (1)
    const char * command; /**< The command that will be executed (required) */
    bool start; /**< Select if the process should automatically start (true) or should start only after a packet come into the START port (default: True) */
};

#define SOL_FLOW_NODE_TYPE_PROCESS_SUBPROCESS_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_PROCESS_SUBPROCESS_OPTIONS_API_VERSION) \
    }, \
    .start = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_PROCESS_SUBPROCESS__IN__START (0)
#define SOL_FLOW_NODE_TYPE_PROCESS_SUBPROCESS__IN__STOP (1)
#define SOL_FLOW_NODE_TYPE_PROCESS_SUBPROCESS__IN__SIGNAL (2)
#define SOL_FLOW_NODE_TYPE_PROCESS_SUBPROCESS__IN__STDIN (3)
#define SOL_FLOW_NODE_TYPE_PROCESS_SUBPROCESS__IN_LAST (3)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_PROCESS_SUBPROCESS__OUT__STATUS (0)
#define SOL_FLOW_NODE_TYPE_PROCESS_SUBPROCESS__OUT__STDOUT (1)
#define SOL_FLOW_NODE_TYPE_PROCESS_SUBPROCESS__OUT__STDERR (2)
#define SOL_FLOW_NODE_TYPE_PROCESS_SUBPROCESS__OUT__PID (3)
#define SOL_FLOW_NODE_TYPE_PROCESS_SUBPROCESS__OUT_LAST (3)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-process");

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
