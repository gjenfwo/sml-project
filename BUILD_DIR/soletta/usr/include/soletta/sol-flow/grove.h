#pragma once
/* this file was auto-generated from ./src/modules/flow/grove/grove.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>
#include <float.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_GROVE_TEMPERATURE_CONVERTER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_GROVE_TEMPERATURE_CONVERTER;

struct sol_flow_node_type_grove_temperature_converter_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_GROVE_TEMPERATURE_CONVERTER_OPTIONS_API_VERSION (1)
    int32_t thermistor_constant; /**< Thermistor constant (required) */
    int32_t input_range_mask; /**< Input range mask (required) */
    int32_t resistance; /**< Potential divider resistance (required) */
    double reference_temperature; /**< Thermistor reference temperature (required) */
    int32_t thermistor_resistance; /**< Thermistor reference resistance (required) */
};

#define SOL_FLOW_NODE_TYPE_GROVE_TEMPERATURE_CONVERTER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_GROVE_TEMPERATURE_CONVERTER_OPTIONS_API_VERSION) \
    }, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_GROVE_TEMPERATURE_CONVERTER__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_GROVE_TEMPERATURE_CONVERTER__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_GROVE_TEMPERATURE_CONVERTER__OUT__KELVIN (0)
#define SOL_FLOW_NODE_TYPE_GROVE_TEMPERATURE_CONVERTER__OUT__RAW (1)
#define SOL_FLOW_NODE_TYPE_GROVE_TEMPERATURE_CONVERTER__OUT_LAST (1)

#define SOL_FLOW_NODE_TYPE_GROVE_THERMOMETER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_GROVE_THERMOMETER;

struct sol_flow_node_type_grove_thermometer_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_GROVE_THERMOMETER_OPTIONS_API_VERSION (1)
    const char * pin; /**< Label of the desired pin on the board. If raw is set to true, this should be "<device> <pin>" pair, e.g. "0 3". (required) */
    bool raw; /**< Change 'pin' meaning to be the system parameters needed to address the desired pin. Use it if you know what you are doing. (default: False) */
    int32_t mask; /**< Valid bits mask. This mask is used to filter the valid bits from the data received from hardware (which is manufacturer dependent), therefore should not be used as a way to change the output range because the mask is applied to the least significant bits. (default: 12) */
    int32_t poll_timeout; /**< Polling time in milliseconds. This option will take no effect if hardware interruptions for GPIO is supported by the underlying system. Use it if you know that you don't have those interruptions available. (default: 1000) */
    int32_t thermistor_constant; /**< Thermistor constant (default: 3975) */
    int32_t resistance; /**< Potential divider resistance (default: 10000) */
    double reference_temperature; /**< Thermistor reference temperature (default: 298.15) */
    int32_t thermistor_resistance; /**< Thermistor reference resistance (default: 10000) */
};

#define SOL_FLOW_NODE_TYPE_GROVE_THERMOMETER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_GROVE_THERMOMETER_OPTIONS_API_VERSION) \
    }, \
    .raw = false, \
    .mask = 12, \
    .poll_timeout = 1000, \
    .thermistor_constant = 3975, \
    .resistance = 10000, \
    .reference_temperature = 298.15, \
    .thermistor_resistance = 10000, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_GROVE_THERMOMETER__OUT__KELVIN (0)
#define SOL_FLOW_NODE_TYPE_GROVE_THERMOMETER__OUT__RAW (1)
#define SOL_FLOW_NODE_TYPE_GROVE_THERMOMETER__OUT_LAST (1)

#define SOL_FLOW_NODE_TYPE_GROVE_LIGHT_CONVERTER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_GROVE_LIGHT_CONVERTER;

struct sol_flow_node_type_grove_light_converter_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_GROVE_LIGHT_CONVERTER_OPTIONS_API_VERSION (1)
    int32_t input_range_mask; /**< Input range mask (required) */
};

#define SOL_FLOW_NODE_TYPE_GROVE_LIGHT_CONVERTER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_GROVE_LIGHT_CONVERTER_OPTIONS_API_VERSION) \
    }, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_GROVE_LIGHT_CONVERTER__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_GROVE_LIGHT_CONVERTER__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_GROVE_LIGHT_CONVERTER__OUT__LUX (0)
#define SOL_FLOW_NODE_TYPE_GROVE_LIGHT_CONVERTER__OUT__RAW (1)
#define SOL_FLOW_NODE_TYPE_GROVE_LIGHT_CONVERTER__OUT_LAST (1)

#define SOL_FLOW_NODE_TYPE_GROVE_LIGHT_SENSOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_GROVE_LIGHT_SENSOR;

struct sol_flow_node_type_grove_light_sensor_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_GROVE_LIGHT_SENSOR_OPTIONS_API_VERSION (1)
    const char * pin; /**< Label of the desired pin on the board. If raw is set to true, this should be "<device> <pin>" pair, e.g. "0 3". (required) */
    bool raw; /**< Change 'pin' meaning to be the system parameters needed to address the desired pin. Use it if you know what you are doing. (default: False) */
    int32_t mask; /**< Valid bits mask. This mask is used to filter the valid bits from the data received from hardware (which is manufacturer dependent), therefore should not be used as a way to change the output range because the mask is applied to the least significant bits. (default: 12) */
    int32_t poll_timeout; /**< Polling time in milliseconds. This option will take no effect if hardware interruptions for GPIO is supported by the underlying system. Use it if you know that you don't have those interruptions available. (default: 1000) */
};

#define SOL_FLOW_NODE_TYPE_GROVE_LIGHT_SENSOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_GROVE_LIGHT_SENSOR_OPTIONS_API_VERSION) \
    }, \
    .raw = false, \
    .mask = 12, \
    .poll_timeout = 1000, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_GROVE_LIGHT_SENSOR__OUT__LUX (0)
#define SOL_FLOW_NODE_TYPE_GROVE_LIGHT_SENSOR__OUT__RAW (1)
#define SOL_FLOW_NODE_TYPE_GROVE_LIGHT_SENSOR__OUT_LAST (1)

#define SOL_FLOW_NODE_TYPE_GROVE_ROTARY_CONVERTER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_GROVE_ROTARY_CONVERTER;

struct sol_flow_node_type_grove_rotary_converter_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_GROVE_ROTARY_CONVERTER_OPTIONS_API_VERSION (1)
    int32_t angular_range; /**< Angular range (required) */
    int32_t input_range_mask; /**< Input range mask (required) */
};

#define SOL_FLOW_NODE_TYPE_GROVE_ROTARY_CONVERTER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_GROVE_ROTARY_CONVERTER_OPTIONS_API_VERSION) \
    }, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_GROVE_ROTARY_CONVERTER__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_GROVE_ROTARY_CONVERTER__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_GROVE_ROTARY_CONVERTER__OUT__DEG (0)
#define SOL_FLOW_NODE_TYPE_GROVE_ROTARY_CONVERTER__OUT__RAD (1)
#define SOL_FLOW_NODE_TYPE_GROVE_ROTARY_CONVERTER__OUT__RAW (2)
#define SOL_FLOW_NODE_TYPE_GROVE_ROTARY_CONVERTER__OUT_LAST (2)

#define SOL_FLOW_NODE_TYPE_GROVE_ROTARY_SENSOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_GROVE_ROTARY_SENSOR;

struct sol_flow_node_type_grove_rotary_sensor_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_GROVE_ROTARY_SENSOR_OPTIONS_API_VERSION (1)
    const char * pin; /**< Label of the desired pin on the board. If raw is set to true, this should be "<device> <pin>" pair, e.g. "0 3". (required) */
    bool raw; /**< Change 'pin' meaning to be the system parameters needed to address the desired pin. Use it if you know what you are doing. (default: False) */
    int32_t mask; /**< Valid bits mask. This mask is used to filter the valid bits from the data received from hardware (which is manufacturer dependent), therefore should not be used as a way to change the output range because the mask is applied to the least significant bits. (default: 12) */
    int32_t poll_timeout; /**< Polling time in milliseconds. This option will take no effect if hardware interruptions for GPIO is supported by the underlying system. Use it if you know that you don't have those interruptions available. (default: 1000) */
    int32_t angular_range; /**< Angular range (default: 300) */
};

#define SOL_FLOW_NODE_TYPE_GROVE_ROTARY_SENSOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_GROVE_ROTARY_SENSOR_OPTIONS_API_VERSION) \
    }, \
    .raw = false, \
    .mask = 12, \
    .poll_timeout = 1000, \
    .angular_range = 300, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_GROVE_ROTARY_SENSOR__OUT__DEG (0)
#define SOL_FLOW_NODE_TYPE_GROVE_ROTARY_SENSOR__OUT__RAD (1)
#define SOL_FLOW_NODE_TYPE_GROVE_ROTARY_SENSOR__OUT__RAW (2)
#define SOL_FLOW_NODE_TYPE_GROVE_ROTARY_SENSOR__OUT_LAST (2)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-grove");

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
