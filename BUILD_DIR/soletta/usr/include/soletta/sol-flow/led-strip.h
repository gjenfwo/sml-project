#pragma once
/* this file was auto-generated from ./src/modules/flow/led-strip/led-strip.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_LED_STRIP_LPD8806_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_LED_STRIP_LPD8806;

struct sol_flow_node_type_led_strip_lpd8806_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_LED_STRIP_LPD8806_OPTIONS_API_VERSION (1)
    int32_t bus; /**< SPI Bus number. (default: 0) */
    int32_t chip_select; /**< SPI chip to operate. (default: 0) */
    int32_t pixel_count; /**< Pixel count. How many LEDs are on the strip. (default: 32) */
};

#define SOL_FLOW_NODE_TYPE_LED_STRIP_LPD8806_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_LED_STRIP_LPD8806_OPTIONS_API_VERSION) \
    }, \
    .bus = 0, \
    .chip_select = 0, \
    .pixel_count = 32, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_LED_STRIP_LPD8806__IN__PIXEL (0)
#define SOL_FLOW_NODE_TYPE_LED_STRIP_LPD8806__IN__COLOR (1)
#define SOL_FLOW_NODE_TYPE_LED_STRIP_LPD8806__IN__FLUSH (2)
#define SOL_FLOW_NODE_TYPE_LED_STRIP_LPD8806__IN_LAST (2)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-led_strip");

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
