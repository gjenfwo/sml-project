#pragma once
/* this file was auto-generated from ./src/modules/flow/form/form.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_FORM_SELECTOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FORM_SELECTOR;

struct sol_flow_node_type_form_selector_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_FORM_SELECTOR_OPTIONS_API_VERSION (1)
    int32_t columns; /**< The number of available columns to lay out the output string with. It must be a positive integer. (required) */
    int32_t rows; /**< The number of available rows to lay out the output string with. It must be a positive integer. (required) */
    const char * title; /**< The title string, to be available for referencing when evaluating the format one by means of the '{title}' tag. Any line breaking characters in this string will be translated to a space instead. If no title is provided, a '{title}' tag in the format will be ignored. (required) */
    const char * selection_marker; /**< If set, selected items will be laid out with this string pre-fixed. (default: '* ') */
    const char * cursor_marker; /**< If set, items under the cursor will be laid out with this string pre-fixed. (default: '> ') */
    const char * format; /**< The format string to produce the final STRING output with. The syntax is a free-form string with one '{value}' sub-string in it (and one optional '{title}' one). The value tag will be replaced by the actual string items that came in the ITEMS port, while the title one will be replaced by the title string option, if set. The title tag must occur before the value one. (default: '{value}') */
    bool circular; /**< If true, this makes a circular menu, where after the last option it goes back to the first (and vice-versa). (default: False) */
};

#define SOL_FLOW_NODE_TYPE_FORM_SELECTOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_FORM_SELECTOR_OPTIONS_API_VERSION) \
    }, \
    .title = NULL, \
    .selection_marker = "* ", \
    .cursor_marker = "> ", \
    .format = "{value}", \
    .circular = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FORM_SELECTOR__IN__ADD_ITEM (0)
#define SOL_FLOW_NODE_TYPE_FORM_SELECTOR__IN__SELECTED (1)
#define SOL_FLOW_NODE_TYPE_FORM_SELECTOR__IN__CLEAR (2)
#define SOL_FLOW_NODE_TYPE_FORM_SELECTOR__IN__NEXT (3)
#define SOL_FLOW_NODE_TYPE_FORM_SELECTOR__IN__PREVIOUS (4)
#define SOL_FLOW_NODE_TYPE_FORM_SELECTOR__IN__SELECT (5)
#define SOL_FLOW_NODE_TYPE_FORM_SELECTOR__IN__ENABLED (6)
#define SOL_FLOW_NODE_TYPE_FORM_SELECTOR__IN_LAST (6)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FORM_SELECTOR__OUT__STRING (0)
#define SOL_FLOW_NODE_TYPE_FORM_SELECTOR__OUT__SELECTED (1)
#define SOL_FLOW_NODE_TYPE_FORM_SELECTOR__OUT_LAST (1)

#define SOL_FLOW_NODE_TYPE_FORM_BOOLEAN_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FORM_BOOLEAN;

struct sol_flow_node_type_form_boolean_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_FORM_BOOLEAN_OPTIONS_API_VERSION (1)
    int32_t columns; /**< The number of available columns to lay out the output string with. It must be a positive integer. (required) */
    int32_t rows; /**< The number of available rows to lay out the output string with. It must be a positive integer. (required) */
    const char * title; /**< The title string, to be available for referencing when evaluating the format one by means of the '{title}' tag. Any line breaking characters in this string will be translated to a space instead. If no title is provided, a '{title}' tag in the format will be ignored. (required) */
    const char * format; /**< The format string to produce the final STRING output with. The syntax is a free-form string with one '{value}' sub-string in it (and one optional '{title}' one). The value tag will be replaced by the actual true/false strings defined for the node (true_str/false_str options), while the title one will be replaced by the title string option, if set. The title tag must occur before the value one. (default: '{value}') */
    const char * true_str; /**< The string to show for the 'true' boolean item. (default: 'true') */
    const char * false_str; /**< The string to show for the 'false' boolean item. (default: 'false') */
};

#define SOL_FLOW_NODE_TYPE_FORM_BOOLEAN_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_FORM_BOOLEAN_OPTIONS_API_VERSION) \
    }, \
    .title = NULL, \
    .format = "{value}", \
    .true_str = "true", \
    .false_str = "false", \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FORM_BOOLEAN__IN__SELECTED (0)
#define SOL_FLOW_NODE_TYPE_FORM_BOOLEAN__IN__TOGGLE (1)
#define SOL_FLOW_NODE_TYPE_FORM_BOOLEAN__IN__SELECT (2)
#define SOL_FLOW_NODE_TYPE_FORM_BOOLEAN__IN__ENABLED (3)
#define SOL_FLOW_NODE_TYPE_FORM_BOOLEAN__IN_LAST (3)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FORM_BOOLEAN__OUT__STRING (0)
#define SOL_FLOW_NODE_TYPE_FORM_BOOLEAN__OUT__SELECTED (1)
#define SOL_FLOW_NODE_TYPE_FORM_BOOLEAN__OUT_LAST (1)

#define SOL_FLOW_NODE_TYPE_FORM_INT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FORM_INT;

struct sol_flow_node_type_form_int_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_FORM_INT_OPTIONS_API_VERSION (1)
    int32_t columns; /**< The number of available columns to lay out the output string with. It must be a positive integer. (required) */
    int32_t rows; /**< The number of available rows to lay out the output string with. It must be a positive integer. (required) */
    struct sol_irange_spec range; /**< The integer range that the node may store. (default: {'max': 'INT32_MAX', 'min': 0, 'step': 1}) */
    int32_t start_value; /**< The initial value (must be inside the range given on the 'range' option) to start at. It may be overriden by a value in the SELECTED input port. Always remember to set it explicitly if custom values are also passed to the 'range' option. (default: 0) */
    const char * title; /**< The title string, to be available for referencing when evaluating the format one by means of the '{title}' tag. Any line breaking characters in this string will be translated to a space instead. If no title is provided, a '{title}' tag in the format will be ignored. (required) */
    const char * format; /**< The format string to produce the final STRING output with. The syntax is a free-form string with one '{value}' sub-string in it (and one optional '{title}' one). The value tag will be replaced by the actual true/false strings defined for the node (true_str/false_str options), while the title one will be replaced by the title string option, if set. The title tag must occur before the value one. (default: '{value}') */
    bool circular; /**< Whether the integer selection by the UP/DOWN ports is circular or not. (default: True) */
};

#define SOL_FLOW_NODE_TYPE_FORM_INT_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_FORM_INT_OPTIONS_API_VERSION) \
    }, \
    .range = {.max=INT32_MAX, .min=0, .step=1}, \
    .start_value = 0, \
    .title = NULL, \
    .format = "{value}", \
    .circular = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FORM_INT__IN__SELECTED (0)
#define SOL_FLOW_NODE_TYPE_FORM_INT__IN__UP (1)
#define SOL_FLOW_NODE_TYPE_FORM_INT__IN__DOWN (2)
#define SOL_FLOW_NODE_TYPE_FORM_INT__IN__SELECT (3)
#define SOL_FLOW_NODE_TYPE_FORM_INT__IN__ENABLED (4)
#define SOL_FLOW_NODE_TYPE_FORM_INT__IN_LAST (4)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FORM_INT__OUT__STRING (0)
#define SOL_FLOW_NODE_TYPE_FORM_INT__OUT__SELECTED (1)
#define SOL_FLOW_NODE_TYPE_FORM_INT__OUT__OUT_OF_RANGE (2)
#define SOL_FLOW_NODE_TYPE_FORM_INT__OUT_LAST (2)

#define SOL_FLOW_NODE_TYPE_FORM_INT_CUSTOM_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FORM_INT_CUSTOM;

struct sol_flow_node_type_form_int_custom_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_FORM_INT_CUSTOM_OPTIONS_API_VERSION (1)
    int32_t columns; /**< The number of available columns to lay out the output string with. It must be a positive integer. (required) */
    int32_t rows; /**< The number of available rows to lay out the output string with. It must be a positive integer. (required) */
    struct sol_irange_spec range; /**< The integer range that the node may store. The step for this node is always per integer digit, so only the value of one makes sense and any other will be ignored. (default: {'max': 'INT32_MAX', 'min': 0, 'step': 1}) */
    int32_t blink_time; /**< Cursor blinking time, in miliseconds. (default: 1000) */
    int32_t start_value; /**< The initial value (must be inside the range given on the 'range' option) to start at. It may be overriden by a value in the SELECTED input port. Always remember to set it explicitly if custom values are also passed to the 'range' option. (default: 0) */
    const char * title; /**< The title string, to be available for referencing when evaluating the format one by means of the '{title}' tag. Any line breaking characters in this string will be translated to a space instead. If no title is provided, a '{title}' tag in the format will be ignored. (required) */
    const char * format; /**< The format string to produce the final STRING output with. The syntax is a free-form string with one '{value}' sub-string in it (and one optional '{title}' one). The value tag will be replaced by the actual true/false strings defined for the node (true_str/false_str options), while the title one will be replaced by the title string option, if set. The title tag must occur before the value one. (default: '{value}') */
};

#define SOL_FLOW_NODE_TYPE_FORM_INT_CUSTOM_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_FORM_INT_CUSTOM_OPTIONS_API_VERSION) \
    }, \
    .range = {.max=INT32_MAX, .min=0, .step=1}, \
    .blink_time = 1000, \
    .start_value = 0, \
    .title = NULL, \
    .format = "{value}", \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FORM_INT_CUSTOM__IN__SELECTED (0)
#define SOL_FLOW_NODE_TYPE_FORM_INT_CUSTOM__IN__UP (1)
#define SOL_FLOW_NODE_TYPE_FORM_INT_CUSTOM__IN__DOWN (2)
#define SOL_FLOW_NODE_TYPE_FORM_INT_CUSTOM__IN__NEXT (3)
#define SOL_FLOW_NODE_TYPE_FORM_INT_CUSTOM__IN__PREVIOUS (4)
#define SOL_FLOW_NODE_TYPE_FORM_INT_CUSTOM__IN__TOGGLE_SIGN (5)
#define SOL_FLOW_NODE_TYPE_FORM_INT_CUSTOM__IN__SELECT (6)
#define SOL_FLOW_NODE_TYPE_FORM_INT_CUSTOM__IN__ENABLED (7)
#define SOL_FLOW_NODE_TYPE_FORM_INT_CUSTOM__IN_LAST (7)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FORM_INT_CUSTOM__OUT__STRING (0)
#define SOL_FLOW_NODE_TYPE_FORM_INT_CUSTOM__OUT__SELECTED (1)
#define SOL_FLOW_NODE_TYPE_FORM_INT_CUSTOM__OUT__OUT_OF_RANGE (2)
#define SOL_FLOW_NODE_TYPE_FORM_INT_CUSTOM__OUT_LAST (2)

#define SOL_FLOW_NODE_TYPE_FORM_STRING_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FORM_STRING;

struct sol_flow_node_type_form_string_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_FORM_STRING_OPTIONS_API_VERSION (1)
    int32_t columns; /**< The number of available columns to lay out the output string with. It must be a positive integer. (required) */
    int32_t rows; /**< The number of available rows to lay out the output string with. It must be a positive integer. (required) */
    int32_t blink_time; /**< Cursor blinking time, in miliseconds. (default: 1000) */
    int32_t min_length; /**< Minimum output string length (must be non-negative and less than or equal to 'max_length' option's value). (default: 0) */
    int32_t max_length; /**< Maximum output string length (must be non-negative and greater than or equal to 'min_length' option's value). The special value of 0 means no maximum will be applied. (default: 0) */
    const char * start_value; /**< The initial string value (all characters must be inside the 'charset' option's set of chars) to start at. It may be overriden by a value in the SELECTED input port. (required) */
    const char * charset; /**< The character set to build the strings with in this node. The order is important: this is the sequence the UP/DOWN ports will cycle through. (default: ' abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!?.:;,-()[]{}|\\\\^~`_"\'#$%&*+/<>=@') */
    const char * title; /**< The title string, to be available for referencing when evaluating the format one by means of the '{title}' tag. Any line breaking characters in this string will be translated to a space instead. If no title is provided, a '{title}' tag in the format will be ignored. (required) */
    const char * format; /**< The format string to produce the final STRING output with. The syntax is a free-form string with one '{value}' sub-string in it (and one optional '{title}' one). The value tag will be replaced by the actual true/false strings defined for the node (true_str/false_str options), while the title one will be replaced by the title string option, if set. The title tag must occur before the value one. (default: '{value}') */
};

#define SOL_FLOW_NODE_TYPE_FORM_STRING_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_FORM_STRING_OPTIONS_API_VERSION) \
    }, \
    .blink_time = 1000, \
    .min_length = 0, \
    .max_length = 0, \
    .start_value = NULL, \
    .charset = " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!?.:;,-()[]{}|\\^~`_\"'#$%&*+/<>=@", \
    .title = NULL, \
    .format = "{value}", \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FORM_STRING__IN__SELECTED (0)
#define SOL_FLOW_NODE_TYPE_FORM_STRING__IN__UP (1)
#define SOL_FLOW_NODE_TYPE_FORM_STRING__IN__DOWN (2)
#define SOL_FLOW_NODE_TYPE_FORM_STRING__IN__NEXT (3)
#define SOL_FLOW_NODE_TYPE_FORM_STRING__IN__PREVIOUS (4)
#define SOL_FLOW_NODE_TYPE_FORM_STRING__IN__DELETE (5)
#define SOL_FLOW_NODE_TYPE_FORM_STRING__IN__SELECT (6)
#define SOL_FLOW_NODE_TYPE_FORM_STRING__IN__ENABLED (7)
#define SOL_FLOW_NODE_TYPE_FORM_STRING__IN_LAST (7)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FORM_STRING__OUT__STRING (0)
#define SOL_FLOW_NODE_TYPE_FORM_STRING__OUT__SELECTED (1)
#define SOL_FLOW_NODE_TYPE_FORM_STRING__OUT_LAST (1)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-form");

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
