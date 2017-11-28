#pragma once
/* this file was auto-generated from ./src/modules/flow/compass/compass.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_COMPASS_ACCELEROMETER_MAGNETOMETER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_COMPASS_ACCELEROMETER_MAGNETOMETER;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_COMPASS_ACCELEROMETER_MAGNETOMETER__IN__ACCELEROMETER (0)
#define SOL_FLOW_NODE_TYPE_COMPASS_ACCELEROMETER_MAGNETOMETER__IN__MAGNETOMETER (1)
#define SOL_FLOW_NODE_TYPE_COMPASS_ACCELEROMETER_MAGNETOMETER__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_COMPASS_ACCELEROMETER_MAGNETOMETER__OUT__VECTOR (0)
#define SOL_FLOW_NODE_TYPE_COMPASS_ACCELEROMETER_MAGNETOMETER__OUT__HEADING (1)
#define SOL_FLOW_NODE_TYPE_COMPASS_ACCELEROMETER_MAGNETOMETER__OUT_LAST (1)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-compass");

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
