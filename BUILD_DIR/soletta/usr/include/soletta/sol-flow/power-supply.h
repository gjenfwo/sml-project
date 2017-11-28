#pragma once
/* this file was auto-generated from ./src/modules/flow/power-supply/power-supply.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_LIST_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_LIST;

struct sol_flow_node_type_power_supply_get_list_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_LIST_OPTIONS_API_VERSION (1)
    const char * type; /**< Name of type to be used to filter power supplies. It can be 'Any', 'Unknown', 'Battery', 'UPS', 'Mains', 'USB', 'USB_DCP', 'USB_CDP', 'USB_ACA'. If 'null', no filter is applied. (required) */
};

#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_LIST_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_LIST_OPTIONS_API_VERSION) \
    }, \
    .type = NULL, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_LIST__IN__TRIGGER (0)
#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_LIST__IN__TYPE (1)
#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_LIST__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_LIST__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_LIST__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_CAPACITY_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_CAPACITY;

struct sol_flow_node_type_power_supply_get_capacity_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_CAPACITY_OPTIONS_API_VERSION (1)
    const char * name; /**< Name of power supply from where capacity will be fetched. (required) */
};

#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_CAPACITY_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_CAPACITY_OPTIONS_API_VERSION) \
    }, \
    .name = NULL, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_CAPACITY__IN__TRIGGER (0)
#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_CAPACITY__IN__NAME (1)
#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_CAPACITY__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_CAPACITY__OUT__CAPACITY (0)
#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_CAPACITY__OUT__CAPACITY_LEVEL (1)
#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_CAPACITY__OUT_LAST (1)

#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_INFO_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_INFO;

struct sol_flow_node_type_power_supply_get_info_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_INFO_OPTIONS_API_VERSION (1)
    const char * name; /**< Name of power supply from where information will be fetched. (required) */
};

#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_INFO_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_INFO_OPTIONS_API_VERSION) \
    }, \
    .name = NULL, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_INFO__IN__TRIGGER (0)
#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_INFO__IN__NAME (1)
#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_INFO__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_INFO__OUT__MANUFACTURER (0)
#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_INFO__OUT__MODEL (1)
#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_INFO__OUT__SERIAL (2)
#define SOL_FLOW_NODE_TYPE_POWER_SUPPLY_GET_INFO__OUT_LAST (2)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-power_supply");

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
