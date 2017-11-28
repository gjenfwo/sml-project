#pragma once
/* this file was auto-generated from ./src/modules/flow/trigonometry/trigonometry.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_COSINE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_TRIGONOMETRY_COSINE;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_COSINE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_COSINE__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_COSINE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_COSINE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_DEGREES_TO_RADIAN_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_TRIGONOMETRY_DEGREES_TO_RADIAN;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_DEGREES_TO_RADIAN__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_DEGREES_TO_RADIAN__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_DEGREES_TO_RADIAN__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_DEGREES_TO_RADIAN__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_RADIAN_TO_DEGREES_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_TRIGONOMETRY_RADIAN_TO_DEGREES;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_RADIAN_TO_DEGREES__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_RADIAN_TO_DEGREES__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_RADIAN_TO_DEGREES__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_RADIAN_TO_DEGREES__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_SINE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_TRIGONOMETRY_SINE;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_SINE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_SINE__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_SINE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_SINE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_TANGENT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_TRIGONOMETRY_TANGENT;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_TANGENT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_TANGENT__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_TANGENT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_TRIGONOMETRY_TANGENT__OUT_LAST (0)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-trigonometry");

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
