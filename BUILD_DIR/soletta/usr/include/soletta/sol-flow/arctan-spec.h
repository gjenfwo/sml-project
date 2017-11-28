#pragma once
/* this file was auto-generated from ./src/samples/flow/tilt-angle/arctan-spec.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_ARCTANGENT_LOGIC_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_ARCTANGENT_LOGIC;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_ARCTANGENT_LOGIC__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_ARCTANGENT_LOGIC__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_ARCTANGENT_LOGIC__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_ARCTANGENT_LOGIC__OUT_LAST (0)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-arctangent");

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
