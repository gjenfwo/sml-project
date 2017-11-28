#pragma once
/* this file was auto-generated from ./src/modules/flow/gpio/gpio.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_GPIO_READER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_GPIO_READER;

struct sol_flow_node_type_gpio_reader_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_GPIO_READER_OPTIONS_API_VERSION (1)
    const char * pin; /**< Label of the desired pin on the board. If raw is set to true, this should be the pin number as recognized by the platform. (required) */
    bool raw; /**< Change 'pin' meaning to be the system parameters needed to address the desired pin. Use it if you know what you are doing. (default: False) */
    int32_t poll_timeout; /**< Polling time (default: 1000) */
    bool active_low; /**< Is active low (default: False) */
    bool edge_rising; /**< Is edge rising (default: True) */
    bool edge_falling; /**< Is edge falling (default: True) */
    const char * pull; /**< up for pull up, down for pull down, none for no pull (default: 'none') */
};

#define SOL_FLOW_NODE_TYPE_GPIO_READER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_GPIO_READER_OPTIONS_API_VERSION) \
    }, \
    .raw = false, \
    .poll_timeout = 1000, \
    .active_low = false, \
    .edge_rising = true, \
    .edge_falling = true, \
    .pull = "none", \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_GPIO_READER__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_GPIO_READER__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_GPIO_WRITER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_GPIO_WRITER;

struct sol_flow_node_type_gpio_writer_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_GPIO_WRITER_OPTIONS_API_VERSION (1)
    const char * pin; /**< Label of the desired pin on the board. If raw is set to true, this should be the pin number as recognized by the platform. (required) */
    bool raw; /**< Change 'pin' meaning to be the system parameters needed to address the desired pin. Use it if you know what you are doing. (default: False) */
    bool active_low; /**< Is active low (default: False) */
};

#define SOL_FLOW_NODE_TYPE_GPIO_WRITER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_GPIO_WRITER_OPTIONS_API_VERSION) \
    }, \
    .raw = false, \
    .active_low = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_GPIO_WRITER__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_GPIO_WRITER__IN_LAST (0)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-gpio");

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
