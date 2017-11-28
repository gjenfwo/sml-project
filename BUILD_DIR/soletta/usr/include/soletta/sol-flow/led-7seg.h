#pragma once
/* this file was auto-generated from ./src/modules/flow/led-7seg/led-7seg.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_LED_7SEG_LED_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_LED_7SEG_LED;

struct sol_flow_node_type_led_7seg_led_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_LED_7SEG_LED_OPTIONS_API_VERSION (1)
    bool common_cathode; /**< Set this option to true if type of led is common cathode or set it to false if it's common anode (it'll invert gpio low and high states). (default: True) */
    const char * pin_a; /**< Pin used to set segment 'A' state. (required) */
    const char * pin_b; /**< Pin used to set segment 'B' state. (required) */
    const char * pin_c; /**< Pin used to set segment 'C' state. (required) */
    const char * pin_d; /**< Pin used to set segment 'D' state. (required) */
    const char * pin_e; /**< Pin used to set segment 'E' state. (required) */
    const char * pin_f; /**< Pin used to set segment 'F' state. (required) */
    const char * pin_g; /**< Pin used to set segment 'G' state. (required) */
    const char * pin_dp; /**< Pin used to set segment 'DP' state. (required) */
    bool raw; /**< Change 'pin' meaning to be the system parameters needed to address the desired pin. Use it if you know what you are doing. (default: False) */
};

#define SOL_FLOW_NODE_TYPE_LED_7SEG_LED_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_LED_7SEG_LED_OPTIONS_API_VERSION) \
    }, \
    .common_cathode = true, \
    .raw = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_LED_7SEG_LED__IN__SEGMENTS (0)
#define SOL_FLOW_NODE_TYPE_LED_7SEG_LED__IN__VALUE (1)
#define SOL_FLOW_NODE_TYPE_LED_7SEG_LED__IN_LAST (1)

#define SOL_FLOW_NODE_TYPE_LED_7SEG_CHAR_TO_BYTE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_LED_7SEG_CHAR_TO_BYTE;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_LED_7SEG_CHAR_TO_BYTE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_LED_7SEG_CHAR_TO_BYTE__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_LED_7SEG_CHAR_TO_BYTE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_LED_7SEG_CHAR_TO_BYTE__OUT_LAST (0)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-led_7seg");

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
