#pragma once
/* this file was auto-generated from ./src/modules/flow/calamari/calamari.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_CALAMARI_LED_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CALAMARI_LED;

struct sol_flow_node_type_calamari_led_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CALAMARI_LED_OPTIONS_API_VERSION (1)
    int32_t period; /**< PWM period (default: 10000) */
    struct sol_irange_spec range; /**< Range for PWM output. (default: {'min': 0, 'max': 10000}) */
    int32_t address; /**< Hardware address of the PWN output (required) */
};

#define SOL_FLOW_NODE_TYPE_CALAMARI_LED_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CALAMARI_LED_OPTIONS_API_VERSION) \
    }, \
    .period = 10000, \
    .range = {.max=10000, .min=0, .step=1}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CALAMARI_LED__IN__INTENSITY (0)
#define SOL_FLOW_NODE_TYPE_CALAMARI_LED__IN_LAST (0)

#define SOL_FLOW_NODE_TYPE_CALAMARI_LEVER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CALAMARI_LEVER;

struct sol_flow_node_type_calamari_lever_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CALAMARI_LEVER_OPTIONS_API_VERSION (1)
    int32_t poll_interval; /**< Intervel between polling the SPI chip in the lure. (default: 0) */
    struct sol_irange_spec range; /**< The range value. Used to convert the output. (default: {'min': 0, 'max': 1023}) */
    int32_t bus; /**< SPI bus. (default: 0) */
    int32_t chip_select; /**< SPI chip select. (default: 0) */
};

#define SOL_FLOW_NODE_TYPE_CALAMARI_LEVER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CALAMARI_LEVER_OPTIONS_API_VERSION) \
    }, \
    .poll_interval = 0, \
    .range = {.max=1023, .min=0, .step=1}, \
    .bus = 0, \
    .chip_select = 0, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CALAMARI_LEVER__IN__POLL_SIGNAL (0)
#define SOL_FLOW_NODE_TYPE_CALAMARI_LEVER__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CALAMARI_LEVER__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CALAMARI_LEVER__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CALAMARI_RGB_CTL_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CALAMARI_RGB_CTL;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CALAMARI_RGB_CTL__IN__RED (0)
#define SOL_FLOW_NODE_TYPE_CALAMARI_RGB_CTL__IN__GREEN (1)
#define SOL_FLOW_NODE_TYPE_CALAMARI_RGB_CTL__IN__BLUE (2)
#define SOL_FLOW_NODE_TYPE_CALAMARI_RGB_CTL__IN_LAST (2)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CALAMARI_RGB_CTL__OUT__RED (0)
#define SOL_FLOW_NODE_TYPE_CALAMARI_RGB_CTL__OUT__GREEN (1)
#define SOL_FLOW_NODE_TYPE_CALAMARI_RGB_CTL__OUT__BLUE (2)
#define SOL_FLOW_NODE_TYPE_CALAMARI_RGB_CTL__OUT_LAST (2)

#define SOL_FLOW_NODE_TYPE_CALAMARI_SEGMENTS_CTL_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CALAMARI_SEGMENTS_CTL;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CALAMARI_SEGMENTS_CTL__IN__SEGMENTS (0)
#define SOL_FLOW_NODE_TYPE_CALAMARI_SEGMENTS_CTL__IN__VALUE (1)
#define SOL_FLOW_NODE_TYPE_CALAMARI_SEGMENTS_CTL__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CALAMARI_SEGMENTS_CTL__OUT__CLEAR (0)
#define SOL_FLOW_NODE_TYPE_CALAMARI_SEGMENTS_CTL__OUT__LATCH (1)
#define SOL_FLOW_NODE_TYPE_CALAMARI_SEGMENTS_CTL__OUT__CLOCK (2)
#define SOL_FLOW_NODE_TYPE_CALAMARI_SEGMENTS_CTL__OUT__DATA (3)
#define SOL_FLOW_NODE_TYPE_CALAMARI_SEGMENTS_CTL__OUT_LAST (3)

#define SOL_FLOW_NODE_TYPE_CALAMARI_7SEG_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CALAMARI_7SEG;

struct sol_flow_node_type_calamari_7seg_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CALAMARI_7SEG_OPTIONS_API_VERSION (1)
    const char * clock_pin; /**< CLOCK GPIO pin (required) */
    const char * clear_pin; /**< CLEAR GPIO pin (required) */
    const char * data_pin; /**< DATA GPIO pin (required) */
    const char * latch_pin; /**< LATCH GPIO pin (required) */
};

#define SOL_FLOW_NODE_TYPE_CALAMARI_7SEG_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CALAMARI_7SEG_OPTIONS_API_VERSION) \
    }, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CALAMARI_7SEG__IN__SEGMENTS (0)
#define SOL_FLOW_NODE_TYPE_CALAMARI_7SEG__IN__VALUE (1)
#define SOL_FLOW_NODE_TYPE_CALAMARI_7SEG__IN_LAST (1)

#define SOL_FLOW_NODE_TYPE_CALAMARI_RGB_LED_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CALAMARI_RGB_LED;

struct sol_flow_node_type_calamari_rgb_led_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CALAMARI_RGB_LED_OPTIONS_API_VERSION (1)
    const char * red_pin; /**< Red LED GPIO pin (required) */
    const char * green_pin; /**< Green LED GPIO pin (required) */
    const char * blue_pin; /**< Blue LED GPIO pin (required) */
};

#define SOL_FLOW_NODE_TYPE_CALAMARI_RGB_LED_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CALAMARI_RGB_LED_OPTIONS_API_VERSION) \
    }, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CALAMARI_RGB_LED__IN__RED (0)
#define SOL_FLOW_NODE_TYPE_CALAMARI_RGB_LED__IN__GREEN (1)
#define SOL_FLOW_NODE_TYPE_CALAMARI_RGB_LED__IN__BLUE (2)
#define SOL_FLOW_NODE_TYPE_CALAMARI_RGB_LED__IN_LAST (2)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-calamari");

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
