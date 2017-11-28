#pragma once
/* this file was auto-generated from ./src/modules/flow/json/json.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_KEY_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_KEY;

struct sol_flow_node_type_json_object_get_key_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_KEY_OPTIONS_API_VERSION (1)
    const char * key; /**< The key of the JSON object child to access. (default: '') */
};

#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_KEY_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_KEY_OPTIONS_API_VERSION) \
    }, \
    .key = "", \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_KEY__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_KEY__IN__KEY (1)
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_KEY__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_KEY__OUT__INT (0)
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_KEY__OUT__STRING (1)
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_KEY__OUT__BOOLEAN (2)
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_KEY__OUT__FLOAT (3)
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_KEY__OUT__OBJECT (4)
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_KEY__OUT__ARRAY (5)
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_KEY__OUT__NULL (6)
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_KEY__OUT_LAST (6)

#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_PATH_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_PATH;

struct sol_flow_node_type_json_object_get_path_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_PATH_OPTIONS_API_VERSION (1)
    const char * path; /**< The path of the JSON object child to access. Path needs to be a valid JSONPath as documented in http://goessner.net/articles/JsonPath/ (default: '') */
};

#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_PATH_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_PATH_OPTIONS_API_VERSION) \
    }, \
    .path = "", \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_PATH__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_PATH__IN__PATH (1)
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_PATH__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_PATH__OUT__INT (0)
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_PATH__OUT__STRING (1)
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_PATH__OUT__BOOLEAN (2)
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_PATH__OUT__FLOAT (3)
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_PATH__OUT__OBJECT (4)
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_PATH__OUT__ARRAY (5)
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_PATH__OUT__NULL (6)
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_PATH__OUT_LAST (6)

#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_PATH_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_PATH;

struct sol_flow_node_type_json_array_get_path_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_PATH_OPTIONS_API_VERSION (1)
    const char * path; /**< The path of the JSON array child to access. Path needs to be a valid JSONPath as documented in http://goessner.net/articles/JsonPath/ (default: '') */
};

#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_PATH_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_PATH_OPTIONS_API_VERSION) \
    }, \
    .path = "", \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_PATH__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_PATH__IN__PATH (1)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_PATH__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_PATH__OUT__INT (0)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_PATH__OUT__STRING (1)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_PATH__OUT__BOOLEAN (2)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_PATH__OUT__FLOAT (3)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_PATH__OUT__OBJECT (4)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_PATH__OUT__ARRAY (5)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_PATH__OUT__NULL (6)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_PATH__OUT_LAST (6)

#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_LENGTH_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_JSON_OBJECT_LENGTH;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_LENGTH__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_LENGTH__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_LENGTH__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_LENGTH__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_ALL_KEYS_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_ALL_KEYS;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_ALL_KEYS__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_ALL_KEYS__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_ALL_KEYS__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_ALL_KEYS__OUT__EMPTY (1)
#define SOL_FLOW_NODE_TYPE_JSON_OBJECT_GET_ALL_KEYS__OUT_LAST (1)

#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_AT_INDEX_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_AT_INDEX;

struct sol_flow_node_type_json_array_get_at_index_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_AT_INDEX_OPTIONS_API_VERSION (1)
    int32_t index; /**< The index of the element to be sent to OUT port. If negative, no value will be sent before setting index using INDEX port (default: -1) */
};

#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_AT_INDEX_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_AT_INDEX_OPTIONS_API_VERSION) \
    }, \
    .index = -1, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_AT_INDEX__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_AT_INDEX__IN__INDEX (1)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_AT_INDEX__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_AT_INDEX__OUT__INT (0)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_AT_INDEX__OUT__STRING (1)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_AT_INDEX__OUT__BOOLEAN (2)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_AT_INDEX__OUT__FLOAT (3)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_AT_INDEX__OUT__OBJECT (4)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_AT_INDEX__OUT__ARRAY (5)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_AT_INDEX__OUT__NULL (6)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_AT_INDEX__OUT_LAST (6)

#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_LENGTH_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_JSON_ARRAY_LENGTH;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_LENGTH__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_LENGTH__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_LENGTH__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_LENGTH__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_ALL_ELEMENTS_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_ALL_ELEMENTS;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_ALL_ELEMENTS__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_ALL_ELEMENTS__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_ALL_ELEMENTS__OUT__INT (0)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_ALL_ELEMENTS__OUT__STRING (1)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_ALL_ELEMENTS__OUT__BOOLEAN (2)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_ALL_ELEMENTS__OUT__FLOAT (3)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_ALL_ELEMENTS__OUT__OBJECT (4)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_ALL_ELEMENTS__OUT__ARRAY (5)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_ALL_ELEMENTS__OUT__NULL (6)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_ALL_ELEMENTS__OUT__EMPTY (7)
#define SOL_FLOW_NODE_TYPE_JSON_ARRAY_GET_ALL_ELEMENTS__OUT_LAST (7)

#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY__IN__INT (0)
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY__IN__STRING (1)
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY__IN__BOOLEAN (2)
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY__IN__FLOAT (3)
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY__IN__OBJECT (4)
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY__IN__ARRAY (5)
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY__IN__NULL (6)
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY__IN__CLEAR (7)
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY__IN__CREATE (8)
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY__IN_LAST (8)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY__OUT__COUNT (1)
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY__OUT_LAST (1)

#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT__IN__INT (0)
const struct sol_flow_packet_type *sol_flow_node_type_json_create_object_get_composed_string_int_packet_type(void);
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT__IN__STRING (1)
const struct sol_flow_packet_type *sol_flow_node_type_json_create_object_get_composed_string_string_packet_type(void);
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT__IN__BOOLEAN (2)
const struct sol_flow_packet_type *sol_flow_node_type_json_create_object_get_composed_string_boolean_packet_type(void);
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT__IN__FLOAT (3)
const struct sol_flow_packet_type *sol_flow_node_type_json_create_object_get_composed_string_float_packet_type(void);
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT__IN__OBJECT (4)
const struct sol_flow_packet_type *sol_flow_node_type_json_create_object_get_composed_string_json_object_packet_type(void);
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT__IN__ARRAY (5)
const struct sol_flow_packet_type *sol_flow_node_type_json_create_object_get_composed_string_json_array_packet_type(void);
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT__IN__NULL (6)
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT__IN__CLEAR (7)
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT__IN__CREATE (8)
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT__IN_LAST (8)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY_PATH_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY_PATH;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY_PATH__IN__INT (0)
const struct sol_flow_packet_type *sol_flow_node_type_json_create_array_path_get_composed_string_int_packet_type(void);
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY_PATH__IN__STRING (1)
const struct sol_flow_packet_type *sol_flow_node_type_json_create_array_path_get_composed_string_string_packet_type(void);
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY_PATH__IN__BOOLEAN (2)
const struct sol_flow_packet_type *sol_flow_node_type_json_create_array_path_get_composed_string_boolean_packet_type(void);
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY_PATH__IN__FLOAT (3)
const struct sol_flow_packet_type *sol_flow_node_type_json_create_array_path_get_composed_string_float_packet_type(void);
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY_PATH__IN__OBJECT (4)
const struct sol_flow_packet_type *sol_flow_node_type_json_create_array_path_get_composed_string_json_object_packet_type(void);
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY_PATH__IN__ARRAY (5)
const struct sol_flow_packet_type *sol_flow_node_type_json_create_array_path_get_composed_string_json_array_packet_type(void);
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY_PATH__IN__NULL (6)
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY_PATH__IN__CLEAR (7)
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY_PATH__IN__CREATE (8)
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY_PATH__IN_LAST (8)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY_PATH__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_ARRAY_PATH__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT_PATH_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT_PATH;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT_PATH__IN__INT (0)
const struct sol_flow_packet_type *sol_flow_node_type_json_create_object_path_get_composed_string_int_packet_type(void);
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT_PATH__IN__STRING (1)
const struct sol_flow_packet_type *sol_flow_node_type_json_create_object_path_get_composed_string_string_packet_type(void);
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT_PATH__IN__BOOLEAN (2)
const struct sol_flow_packet_type *sol_flow_node_type_json_create_object_path_get_composed_string_boolean_packet_type(void);
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT_PATH__IN__FLOAT (3)
const struct sol_flow_packet_type *sol_flow_node_type_json_create_object_path_get_composed_string_float_packet_type(void);
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT_PATH__IN__OBJECT (4)
const struct sol_flow_packet_type *sol_flow_node_type_json_create_object_path_get_composed_string_json_object_packet_type(void);
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT_PATH__IN__ARRAY (5)
const struct sol_flow_packet_type *sol_flow_node_type_json_create_object_path_get_composed_string_json_array_packet_type(void);
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT_PATH__IN__NULL (6)
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT_PATH__IN__CLEAR (7)
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT_PATH__IN__CREATE (8)
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT_PATH__IN_LAST (8)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT_PATH__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_JSON_CREATE_OBJECT_PATH__OUT_LAST (0)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-json");

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
