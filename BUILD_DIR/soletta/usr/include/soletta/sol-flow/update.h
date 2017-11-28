#pragma once
/* this file was auto-generated from ./src/modules/flow/update/update.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_UPDATE_CHECK_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_UPDATE_CHECK;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_UPDATE_CHECK__IN__CHECK (0)
#define SOL_FLOW_NODE_TYPE_UPDATE_CHECK__IN__CANCEL (1)
#define SOL_FLOW_NODE_TYPE_UPDATE_CHECK__IN__GET_PROGRESS (2)
#define SOL_FLOW_NODE_TYPE_UPDATE_CHECK__IN_LAST (2)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_UPDATE_CHECK__OUT__VERSION (0)
#define SOL_FLOW_NODE_TYPE_UPDATE_CHECK__OUT__SIZE (1)
#define SOL_FLOW_NODE_TYPE_UPDATE_CHECK__OUT__PROGRESS (2)
#define SOL_FLOW_NODE_TYPE_UPDATE_CHECK__OUT__NEED_UPDATE (3)
#define SOL_FLOW_NODE_TYPE_UPDATE_CHECK__OUT_LAST (3)

#define SOL_FLOW_NODE_TYPE_UPDATE_FETCH_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_UPDATE_FETCH;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_UPDATE_FETCH__IN__FETCH (0)
#define SOL_FLOW_NODE_TYPE_UPDATE_FETCH__IN__CANCEL (1)
#define SOL_FLOW_NODE_TYPE_UPDATE_FETCH__IN__GET_PROGRESS (2)
#define SOL_FLOW_NODE_TYPE_UPDATE_FETCH__IN_LAST (2)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_UPDATE_FETCH__OUT__SUCCESS (0)
#define SOL_FLOW_NODE_TYPE_UPDATE_FETCH__OUT__PROGRESS (1)
#define SOL_FLOW_NODE_TYPE_UPDATE_FETCH__OUT_LAST (1)

#define SOL_FLOW_NODE_TYPE_UPDATE_INSTALL_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_UPDATE_INSTALL;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_UPDATE_INSTALL__IN__CANCEL (0)
#define SOL_FLOW_NODE_TYPE_UPDATE_INSTALL__IN__GET_PROGRESS (1)
#define SOL_FLOW_NODE_TYPE_UPDATE_INSTALL__IN__INSTALL (2)
#define SOL_FLOW_NODE_TYPE_UPDATE_INSTALL__IN_LAST (2)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_UPDATE_INSTALL__OUT__SUCCESS (0)
#define SOL_FLOW_NODE_TYPE_UPDATE_INSTALL__OUT__PROGRESS (1)
#define SOL_FLOW_NODE_TYPE_UPDATE_INSTALL__OUT_LAST (1)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-update");

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
