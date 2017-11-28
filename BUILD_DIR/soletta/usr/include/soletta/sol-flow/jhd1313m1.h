#pragma once
/* this file was auto-generated from ./src/modules/flow/jhd1313m1/jhd1313m1.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_JHD1313M1_STRING_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_JHD1313M1_STRING;

struct sol_flow_node_type_jhd1313m1_string_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_JHD1313M1_STRING_OPTIONS_API_VERSION (1)
    int32_t bus; /**< I2C bus to be used. (required) */
    struct sol_rgb color; /**< Initial background color. (default: {'red': 255, 'blue': 255, 'red_max': 255, 'blue_max': 255, 'green_max': 255, 'green': 255}) */
};

#define SOL_FLOW_NODE_TYPE_JHD1313M1_STRING_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_JHD1313M1_STRING_OPTIONS_API_VERSION) \
    }, \
    .color = {.blue=255, .blue_max=255, .green=255, .green_max=255, .red=255, .red_max=255}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_JHD1313M1_STRING__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_JHD1313M1_STRING__IN__COLOR (1)
#define SOL_FLOW_NODE_TYPE_JHD1313M1_STRING__IN_LAST (1)

#define SOL_FLOW_NODE_TYPE_JHD1313M1_CHAR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_JHD1313M1_CHAR;

struct sol_flow_node_type_jhd1313m1_char_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_JHD1313M1_CHAR_OPTIONS_API_VERSION (1)
    int32_t bus; /**< I2C bus to be used. (required) */
    int32_t init_col; /**< Initial column of the cursor. (default: 0) */
    int32_t init_row; /**< Initial row of the cursor. (default: 0) */
    bool ltr; /**< Whether to start on left-to-right (true) or right-to-left (false) cursor advancing. (default: True) */
    bool blink_cursor; /**< Set whether the display's blinking cursor is on (true) or off (false). (default: False) */
    bool underline_cursor; /**< Set whether the display's underline cursor is on (true) or off (false). (default: False) */
    bool auto_scroll; /**< Whether to start on auto scroll mode (true) or not (false). (default: False) */
    struct sol_rgb color; /**< Initial background color. (default: {'red': 255, 'blue': 255, 'red_max': 255, 'blue_max': 255, 'green_max': 255, 'green': 255}) */
};

#define SOL_FLOW_NODE_TYPE_JHD1313M1_CHAR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_JHD1313M1_CHAR_OPTIONS_API_VERSION) \
    }, \
    .init_col = 0, \
    .init_row = 0, \
    .ltr = true, \
    .blink_cursor = false, \
    .underline_cursor = false, \
    .auto_scroll = false, \
    .color = {.blue=255, .blue_max=255, .green=255, .green_max=255, .red=255, .red_max=255}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_JHD1313M1_CHAR__IN__AUTO_SCROLL (0)
#define SOL_FLOW_NODE_TYPE_JHD1313M1_CHAR__IN__LEFT_TO_RIGHT (1)
#define SOL_FLOW_NODE_TYPE_JHD1313M1_CHAR__IN__COLOR (2)
#define SOL_FLOW_NODE_TYPE_JHD1313M1_CHAR__IN__COL (3)
#define SOL_FLOW_NODE_TYPE_JHD1313M1_CHAR__IN__ROW (4)
#define SOL_FLOW_NODE_TYPE_JHD1313M1_CHAR__IN__BLINK_CURSOR (5)
#define SOL_FLOW_NODE_TYPE_JHD1313M1_CHAR__IN__UNDERLINE_CURSOR (6)
#define SOL_FLOW_NODE_TYPE_JHD1313M1_CHAR__IN__DISPLAY_ON (7)
#define SOL_FLOW_NODE_TYPE_JHD1313M1_CHAR__IN__PUT_CHAR (8)
#define SOL_FLOW_NODE_TYPE_JHD1313M1_CHAR__IN__PUT_STRING (9)
#define SOL_FLOW_NODE_TYPE_JHD1313M1_CHAR__IN__SCROLL_RIGHT (10)
#define SOL_FLOW_NODE_TYPE_JHD1313M1_CHAR__IN__SCROLL_LEFT (11)
#define SOL_FLOW_NODE_TYPE_JHD1313M1_CHAR__IN__CLEAR (12)
#define SOL_FLOW_NODE_TYPE_JHD1313M1_CHAR__IN_LAST (12)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-jhd1313m1");

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
