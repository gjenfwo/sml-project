#pragma once
/* this file was auto-generated from ./src/modules/flow/am2315/am2315.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_AM2315_THERMOMETER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_AM2315_THERMOMETER;

struct sol_flow_node_type_am2315_thermometer_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_AM2315_THERMOMETER_OPTIONS_API_VERSION (1)
    int32_t i2c_bus; /**< I2C bus number (required) */
    int32_t i2c_slave; /**< I2C bus slave on which the sensor answers. (default: 92) */
};

#define SOL_FLOW_NODE_TYPE_AM2315_THERMOMETER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_AM2315_THERMOMETER_OPTIONS_API_VERSION) \
    }, \
    .i2c_slave = 92, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_AM2315_THERMOMETER__IN__TICK (0)
#define SOL_FLOW_NODE_TYPE_AM2315_THERMOMETER__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_AM2315_THERMOMETER__OUT__KELVIN (0)
#define SOL_FLOW_NODE_TYPE_AM2315_THERMOMETER__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_AM2315_HUMIDITY_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_AM2315_HUMIDITY;

struct sol_flow_node_type_am2315_humidity_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_AM2315_HUMIDITY_OPTIONS_API_VERSION (1)
    int32_t i2c_bus; /**< I2C bus number (required) */
    int32_t i2c_slave; /**< I2C bus slave on which the sensor answers. (default: 92) */
};

#define SOL_FLOW_NODE_TYPE_AM2315_HUMIDITY_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_AM2315_HUMIDITY_OPTIONS_API_VERSION) \
    }, \
    .i2c_slave = 92, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_AM2315_HUMIDITY__IN__TICK (0)
#define SOL_FLOW_NODE_TYPE_AM2315_HUMIDITY__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_AM2315_HUMIDITY__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_AM2315_HUMIDITY__OUT_LAST (0)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-am2315");

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
