#pragma once
/* this file was auto-generated from ./src/modules/flow/app/app.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_APP_ARGC_ARGV_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_APP_ARGC_ARGV;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_APP_ARGC_ARGV__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_APP_ARGC_ARGV__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_APP_ARGC_ARGV__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_APP_ARGC_ARGV__OUT__ARGC (1)
#define SOL_FLOW_NODE_TYPE_APP_ARGC_ARGV__OUT_LAST (1)

#define SOL_FLOW_NODE_TYPE_APP_ARGV_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_APP_ARGV;

struct sol_flow_node_type_app_argv_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_APP_ARGV_OPTIONS_API_VERSION (1)
    int32_t index; /**< Argument position. (required) */
};

#define SOL_FLOW_NODE_TYPE_APP_ARGV_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_APP_ARGV_OPTIONS_API_VERSION) \
    }, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_APP_ARGV__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_APP_ARGV__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_APP_QUIT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_APP_QUIT;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_APP_QUIT__IN__QUIT (0)
#define SOL_FLOW_NODE_TYPE_APP_QUIT__IN__CODE (1)
#define SOL_FLOW_NODE_TYPE_APP_QUIT__IN__ERROR (2)
#define SOL_FLOW_NODE_TYPE_APP_QUIT__IN_LAST (2)

#define SOL_FLOW_NODE_TYPE_APP_GETENV_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_APP_GETENV;

struct sol_flow_node_type_app_getenv_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_APP_GETENV_OPTIONS_API_VERSION (1)
    const char * variable_name; /**< Environment variable name to be searched for in the environment list. The corresponding value will be sent on 'VALUE' port. By default no name is set, so it waits until a name is received on 'NAME' port. (required) */
};

#define SOL_FLOW_NODE_TYPE_APP_GETENV_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_APP_GETENV_OPTIONS_API_VERSION) \
    }, \
    .variable_name = NULL, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_APP_GETENV__IN__NAME (0)
#define SOL_FLOW_NODE_TYPE_APP_GETENV__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_APP_GETENV__OUT__VALUE (0)
#define SOL_FLOW_NODE_TYPE_APP_GETENV__OUT__FOUND (1)
#define SOL_FLOW_NODE_TYPE_APP_GETENV__OUT_LAST (1)

#define SOL_FLOW_NODE_TYPE_APP_SETENV_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_APP_SETENV;

struct sol_flow_node_type_app_setenv_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_APP_SETENV_OPTIONS_API_VERSION (1)
    const char * variable_name; /**< Name for variable to be added to environment when 'VALUE' packet is received. May be overwritten by packets received on port 'NAME'. If variable already exists on environement, behavior depends on 'overwrite' option. (required) */
    bool overwrite; /**< If variable name does exist in the environment, then its value is changed to value if overwrite is 'true'; if overwrite is zero, then the value of name is not changed. (default: True) */
};

#define SOL_FLOW_NODE_TYPE_APP_SETENV_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_APP_SETENV_OPTIONS_API_VERSION) \
    }, \
    .variable_name = NULL, \
    .overwrite = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_APP_SETENV__IN__NAME (0)
#define SOL_FLOW_NODE_TYPE_APP_SETENV__IN__VALUE (1)
#define SOL_FLOW_NODE_TYPE_APP_SETENV__IN_LAST (1)

#define SOL_FLOW_NODE_TYPE_APP_UNSETENV_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_APP_UNSETENV;

struct sol_flow_node_type_app_unsetenv_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_APP_UNSETENV_OPTIONS_API_VERSION (1)
    const char * variable_name; /**< Name of variable to be removed from to environment when flow is run. (required) */
};

#define SOL_FLOW_NODE_TYPE_APP_UNSETENV_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_APP_UNSETENV_OPTIONS_API_VERSION) \
    }, \
    .variable_name = NULL, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_APP_UNSETENV__IN__NAME (0)
#define SOL_FLOW_NODE_TYPE_APP_UNSETENV__IN_LAST (0)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-app");

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
