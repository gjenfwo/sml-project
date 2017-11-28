#pragma once
/* this file was auto-generated from ./src/modules/flow/network/network.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_NETWORK_BOOLEAN_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_NETWORK_BOOLEAN;

struct sol_flow_node_type_network_boolean_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_NETWORK_BOOLEAN_OPTIONS_API_VERSION (1)
    const char * address; /**< Which interface should be monitored (it MUST be a regexp - so if you want a exact match with a name, use '^name$') (required) */
};

#define SOL_FLOW_NODE_TYPE_NETWORK_BOOLEAN_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_NETWORK_BOOLEAN_OPTIONS_API_VERSION) \
    }, \
    .address = NULL, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_NETWORK_BOOLEAN__IN__ADDRESS (0)
#define SOL_FLOW_NODE_TYPE_NETWORK_BOOLEAN__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_NETWORK_BOOLEAN__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_NETWORK_BOOLEAN__OUT_LAST (0)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-network");

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
