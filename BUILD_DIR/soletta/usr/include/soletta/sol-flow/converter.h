#pragma once
/* this file was auto-generated from ./src/modules/flow/converter/converter.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>
#include <float.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_FLOAT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_FLOAT;

struct sol_flow_node_type_converter_boolean_to_float_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_FLOAT_OPTIONS_API_VERSION (1)
    double false_value; /**< Float value of output when input is false. (default: 0) */
    double true_value; /**< Float value of output when input is true. (default: 1) */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_FLOAT_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_FLOAT_OPTIONS_API_VERSION) \
    }, \
    .false_value = 0, \
    .true_value = 1, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_FLOAT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_FLOAT__IN__FALSE_VALUE (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_FLOAT__IN__TRUE_VALUE (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_FLOAT__IN_LAST (2)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_FLOAT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_FLOAT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_BYTE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_BYTE;

struct sol_flow_node_type_converter_boolean_to_byte_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_BYTE_OPTIONS_API_VERSION (1)
    unsigned char false_value; /**< Byte value of output when input is false. (default: 0) */
    unsigned char true_value; /**< Byte value of output when input is true. (default: 1) */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_BYTE_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_BYTE_OPTIONS_API_VERSION) \
    }, \
    .false_value = 0, \
    .true_value = 1, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_BYTE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_BYTE__IN__FALSE_VALUE (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_BYTE__IN__TRUE_VALUE (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_BYTE__IN_LAST (2)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_BYTE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_BYTE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_EMPTY_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_EMPTY;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_EMPTY__IN__PULSE_IF_TRUE (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_EMPTY__IN__PULSE_IF_FALSE (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_EMPTY__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_EMPTY__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_EMPTY__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_INT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_INT;

struct sol_flow_node_type_converter_boolean_to_int_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_INT_OPTIONS_API_VERSION (1)
    int32_t false_value; /**< IRange value of output when input is false. (default: 0) */
    int32_t true_value; /**< IRange value of output when input is true. (default: 1) */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_INT_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_INT_OPTIONS_API_VERSION) \
    }, \
    .false_value = 0, \
    .true_value = 1, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_INT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_INT__IN__FALSE_VALUE (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_INT__IN__TRUE_VALUE (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_INT__IN_LAST (2)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_INT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_INT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_STRING_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_STRING;

struct sol_flow_node_type_converter_boolean_to_string_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_STRING_OPTIONS_API_VERSION (1)
    const char * false_value; /**< String sent when input is false. (default: 'False') */
    const char * true_value; /**< String sent when input is true. (default: 'True') */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_STRING_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_STRING_OPTIONS_API_VERSION) \
    }, \
    .false_value = "False", \
    .true_value = "True", \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_STRING__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_STRING__IN__FALSE_VALUE (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_STRING__IN__TRUE_VALUE (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_STRING__IN_LAST (2)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_STRING__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BOOLEAN_TO_STRING__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BITS_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BITS;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BITS__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BITS__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BITS__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BITS__OUT__OUT_0 (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BITS__OUT__OUT_1 (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BITS__OUT__OUT_2 (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BITS__OUT__OUT_3 (3)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BITS__OUT__OUT_4 (4)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BITS__OUT__OUT_5 (5)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BITS__OUT__OUT_6 (6)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BITS__OUT__OUT_7 (7)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BITS__OUT__OUT_LAST (7)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BITS__OUT_LAST (7)

#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BOOLEAN_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BOOLEAN;

struct sol_flow_node_type_converter_byte_to_boolean_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BOOLEAN_OPTIONS_API_VERSION (1)
    unsigned char true_max; /**< Defines maximum value of input to set output as true. (default: 255) */
    unsigned char true_min; /**< Defines minimum value of input to set output as true. (default: 1) */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BOOLEAN_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BOOLEAN_OPTIONS_API_VERSION) \
    }, \
    .true_max = 255, \
    .true_min = 1, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BOOLEAN__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BOOLEAN__IN__TRUE_MAX (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BOOLEAN__IN__TRUE_MIN (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BOOLEAN__IN_LAST (2)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BOOLEAN__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_BOOLEAN__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_FLOAT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_FLOAT;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_FLOAT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_FLOAT__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_FLOAT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_FLOAT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_EMPTY_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_EMPTY;

struct sol_flow_node_type_converter_byte_to_empty_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_EMPTY_OPTIONS_API_VERSION (1)
    unsigned char range_max; /**< Byte maximum value that generates a pulse. (default: 255) */
    unsigned char range_min; /**< Byte minimum value that generates a pulse. (default: 1) */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_EMPTY_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_EMPTY_OPTIONS_API_VERSION) \
    }, \
    .range_max = 255, \
    .range_min = 1, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_EMPTY__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_EMPTY__IN__RANGE_MAX (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_EMPTY__IN__RANGE_MIN (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_EMPTY__IN_LAST (2)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_EMPTY__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_EMPTY__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_INT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_INT;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_INT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_INT__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_INT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_INT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_RGB_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_RGB;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_RGB__IN__RED (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_RGB__IN__GREEN (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_RGB__IN__BLUE (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_RGB__IN_LAST (2)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_RGB__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_RGB__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_DIRECTION_VECTOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_DIRECTION_VECTOR;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_DIRECTION_VECTOR__IN__X (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_DIRECTION_VECTOR__IN__Y (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_DIRECTION_VECTOR__IN__Z (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_DIRECTION_VECTOR__IN_LAST (2)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_DIRECTION_VECTOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_DIRECTION_VECTOR__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_STRING_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_STRING;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_STRING__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_STRING__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_STRING__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BYTE_TO_STRING__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_BOOLEAN_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_BOOLEAN;

struct sol_flow_node_type_converter_float_to_boolean_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_BOOLEAN_OPTIONS_API_VERSION (1)
    struct sol_drange_spec true_range; /**< Defines minimum and maximum values of input to set output as true. (default: {'min': 1, 'max': 255}) */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_BOOLEAN_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_BOOLEAN_OPTIONS_API_VERSION) \
    }, \
    .true_range = {.max=255, .min=1, .step=DBL_MIN}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_BOOLEAN__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_BOOLEAN__IN__TRUE_RANGE (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_BOOLEAN__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_BOOLEAN__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_BOOLEAN__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_BYTE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_BYTE;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_BYTE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_BYTE__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_BYTE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_BYTE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_EMPTY_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_EMPTY;

struct sol_flow_node_type_converter_float_to_empty_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_EMPTY_OPTIONS_API_VERSION (1)
    struct sol_drange_spec range; /**< Float range that generates a pulse. (default: {'min': 1, 'max': 255}) */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_EMPTY_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_EMPTY_OPTIONS_API_VERSION) \
    }, \
    .range = {.max=255, .min=1, .step=DBL_MIN}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_EMPTY__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_EMPTY__IN__RANGE (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_EMPTY__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_EMPTY__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_EMPTY__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_INT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_INT;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_INT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_INT__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_INT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_INT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_RGB_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_RGB;

struct sol_flow_node_type_converter_float_to_rgb_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_RGB_OPTIONS_API_VERSION (1)
    int32_t red_max; /**< Max value of red component. Minimum is set to zero. (default: 255) */
    int32_t green_max; /**< Max value of green component. Minimum is set to zero. (default: 255) */
    int32_t blue_max; /**< Max value of blue component. Minimum is set to zero. (default: 255) */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_RGB_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_RGB_OPTIONS_API_VERSION) \
    }, \
    .red_max = 255, \
    .green_max = 255, \
    .blue_max = 255, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_RGB__IN__RED (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_RGB__IN__GREEN (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_RGB__IN__BLUE (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_RGB__IN_LAST (2)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_RGB__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_RGB__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_DIRECTION_VECTOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_DIRECTION_VECTOR;

struct sol_flow_node_type_converter_float_to_direction_vector_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_DIRECTION_VECTOR_OPTIONS_API_VERSION (1)
    struct sol_drange_spec out_range; /**< Range of output packet. (default: {'min': '-DBL_MAX', 'max': 'DBL_MAX'}) */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_DIRECTION_VECTOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_DIRECTION_VECTOR_OPTIONS_API_VERSION) \
    }, \
    .out_range = {.max=DBL_MAX, .min=-DBL_MAX, .step=DBL_MIN}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_DIRECTION_VECTOR__IN__X (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_DIRECTION_VECTOR__IN__Y (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_DIRECTION_VECTOR__IN__Z (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_DIRECTION_VECTOR__IN_LAST (2)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_DIRECTION_VECTOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_DIRECTION_VECTOR__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_STRING_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_STRING;

struct sol_flow_node_type_converter_float_to_string_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_STRING_OPTIONS_API_VERSION (1)
    const char * format_prefix; /**< (Literal) prefix to compose the final string. (default: '') */
    const char * format_suffix; /**< (Literal) suffix to compose the final string (default: '') */
    const char * format_flags; /**< Flags to compose the final format string (combination of '#', '0', '-', ' ' and '+' characters). (default: '') */
    int32_t format_field_width; /**< Field width specification to compose the final format string (may be negative). (default: 0) */
    int32_t format_precision; /**< Precision specification to compose the final format string (negative values mean no precision specified on output format string). (default: -1) */
    const char * format_conversion_specifier; /**< Conversion specification to compose the final format string (one of 'e', 'E', 'f', 'F', 'g', 'G', 'a' or 'A') (default: 'f') */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_STRING_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_STRING_OPTIONS_API_VERSION) \
    }, \
    .format_prefix = "", \
    .format_suffix = "", \
    .format_flags = "", \
    .format_field_width = 0, \
    .format_precision = -1, \
    .format_conversion_specifier = "f", \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_STRING__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_STRING__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_STRING__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_STRING__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_BOOLEAN_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_BOOLEAN;

struct sol_flow_node_type_converter_empty_to_boolean_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_BOOLEAN_OPTIONS_API_VERSION (1)
    bool output_value; /**< Boolean value of output when an empty packet is received. (default: True) */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_BOOLEAN_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_BOOLEAN_OPTIONS_API_VERSION) \
    }, \
    .output_value = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_BOOLEAN__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_BOOLEAN__IN__OUTPUT_VALUE (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_BOOLEAN__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_BOOLEAN__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_BOOLEAN__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_RGB_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_RGB;

struct sol_flow_node_type_converter_empty_to_rgb_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_RGB_OPTIONS_API_VERSION (1)
    struct sol_rgb output_value; /**< RGB value of output when an empty packet is received. (default: {'green': 255, 'blue_max': 255, 'green_max': 255, 'red': 255, 'red_max': 255, 'blue': 255}) */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_RGB_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_RGB_OPTIONS_API_VERSION) \
    }, \
    .output_value = {.blue=255, .blue_max=255, .green=255, .green_max=255, .red=255, .red_max=255}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_RGB__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_RGB__IN__OUTPUT_VALUE (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_RGB__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_RGB__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_RGB__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_BYTE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_BYTE;

struct sol_flow_node_type_converter_empty_to_byte_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_BYTE_OPTIONS_API_VERSION (1)
    unsigned char output_value; /**< Byte value of output when an empty packet is received. (default: 1) */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_BYTE_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_BYTE_OPTIONS_API_VERSION) \
    }, \
    .output_value = 1, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_BYTE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_BYTE__IN__OUTPUT_VALUE (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_BYTE__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_BYTE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_BYTE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_FLOAT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_FLOAT;

struct sol_flow_node_type_converter_empty_to_float_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_FLOAT_OPTIONS_API_VERSION (1)
    struct sol_drange_spec output_value_spec; /**< Float range and step of output when an empty packet is received. (default: {'min': 1, 'step': 1, 'max': 1}) */
    double output_value; /**< Float value of output when an empty packet is received. (default: 1) */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_FLOAT_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_FLOAT_OPTIONS_API_VERSION) \
    }, \
    .output_value_spec = {.max=1, .min=1, .step=1}, \
    .output_value = 1, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_FLOAT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_FLOAT__IN__OUTPUT_VALUE (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_FLOAT__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_FLOAT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_FLOAT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_INT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_INT;

struct sol_flow_node_type_converter_empty_to_int_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_INT_OPTIONS_API_VERSION (1)
    struct sol_irange_spec output_value_spec; /**< Int range and step of output when an empty packet is received. (default: {'min': 1, 'step': 1, 'max': 1}) */
    int32_t output_value; /**< Int value of output when an empty packet is received. (default: 1) */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_INT_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_INT_OPTIONS_API_VERSION) \
    }, \
    .output_value_spec = {.max=1, .min=1, .step=1}, \
    .output_value = 1, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_INT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_INT__IN__OUTPUT_VALUE (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_INT__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_INT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_INT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_STRING_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_STRING;

struct sol_flow_node_type_converter_empty_to_string_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_STRING_OPTIONS_API_VERSION (1)
    const char * output_value; /**< Output string sent when an empty packet is received. (default: '') */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_STRING_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_STRING_OPTIONS_API_VERSION) \
    }, \
    .output_value = "", \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_STRING__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_STRING__IN__OUTPUT_VALUE (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_STRING__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_STRING__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_EMPTY_TO_STRING__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_BOOLEAN_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_BOOLEAN;

struct sol_flow_node_type_converter_int_to_boolean_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_BOOLEAN_OPTIONS_API_VERSION (1)
    struct sol_irange_spec true_range; /**< Defines minimum and maximum values of input to set output as true. (default: {'min': 1, 'max': 255}) */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_BOOLEAN_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_BOOLEAN_OPTIONS_API_VERSION) \
    }, \
    .true_range = {.max=255, .min=1, .step=1}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_BOOLEAN__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_BOOLEAN__IN__TRUE_RANGE (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_BOOLEAN__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_BOOLEAN__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_BOOLEAN__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_BYTE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_BYTE;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_BYTE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_BYTE__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_BYTE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_BYTE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_COMPOSE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_INT_COMPOSE;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_COMPOSE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_COMPOSE__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_COMPOSE__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_COMPOSE__IN__IN_2 (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_COMPOSE__IN__IN_3 (3)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_COMPOSE__IN__IN_LAST (3)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_COMPOSE__IN_LAST (3)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_COMPOSE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_COMPOSE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_DECOMPOSE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_INT_DECOMPOSE;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_DECOMPOSE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_DECOMPOSE__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_DECOMPOSE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_DECOMPOSE__OUT__OUT_0 (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_DECOMPOSE__OUT__OUT_1 (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_DECOMPOSE__OUT__OUT_2 (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_DECOMPOSE__OUT__OUT_3 (3)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_DECOMPOSE__OUT__OUT_LAST (3)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_DECOMPOSE__OUT_LAST (3)

#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_FLOAT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_FLOAT;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_FLOAT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_FLOAT__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_FLOAT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_FLOAT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_EMPTY_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_EMPTY;

struct sol_flow_node_type_converter_int_to_empty_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_EMPTY_OPTIONS_API_VERSION (1)
    struct sol_irange_spec range; /**< Int range that generates a pulse. (default: {'min': 1, 'max': 255}) */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_EMPTY_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_EMPTY_OPTIONS_API_VERSION) \
    }, \
    .range = {.max=255, .min=1, .step=1}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_EMPTY__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_EMPTY__IN__RANGE (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_EMPTY__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_EMPTY__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_EMPTY__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_RGB_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_RGB;

struct sol_flow_node_type_converter_int_to_rgb_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_RGB_OPTIONS_API_VERSION (1)
    int32_t red_max; /**< Max value of red component. Minimum is set to zero. (default: 255) */
    int32_t green_max; /**< Max value of green component. Minimum is set to zero. (default: 255) */
    int32_t blue_max; /**< Max value of blue component. Minimum is set to zero. (default: 255) */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_RGB_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_RGB_OPTIONS_API_VERSION) \
    }, \
    .red_max = 255, \
    .green_max = 255, \
    .blue_max = 255, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_RGB__IN__RED (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_RGB__IN__GREEN (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_RGB__IN__BLUE (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_RGB__IN_LAST (2)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_RGB__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_RGB__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_DIRECTION_VECTOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_DIRECTION_VECTOR;

struct sol_flow_node_type_converter_int_to_direction_vector_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_DIRECTION_VECTOR_OPTIONS_API_VERSION (1)
    struct sol_drange_spec out_range; /**< Range of output packet. (default: {'min': '-DBL_MAX', 'max': 'DBL_MAX'}) */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_DIRECTION_VECTOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_DIRECTION_VECTOR_OPTIONS_API_VERSION) \
    }, \
    .out_range = {.max=DBL_MAX, .min=-DBL_MAX, .step=DBL_MIN}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_DIRECTION_VECTOR__IN__X (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_DIRECTION_VECTOR__IN__Y (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_DIRECTION_VECTOR__IN__Z (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_DIRECTION_VECTOR__IN_LAST (2)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_DIRECTION_VECTOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_DIRECTION_VECTOR__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_STRING_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_STRING;

struct sol_flow_node_type_converter_int_to_string_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_STRING_OPTIONS_API_VERSION (1)
    const char * format_prefix; /**< (Literal) prefix to compose the final string. (default: '') */
    const char * format_suffix; /**< (Literal) suffix to compose the final string (default: '') */
    const char * format_flags; /**< Flags to compose the final format string (combination of '#', '0', '-', ' ' and '+' characters) (default: '') */
    int32_t format_field_width; /**< Field width specification to compose the final format string (may be negative). (default: 0) */
    int32_t format_precision; /**< Precision specification to compose the final format string (negative values mean no precision specified on output format string). (default: -1) */
    const char * format_conversion_specifier; /**< Conversion specification to compose the final format string (one of 'd', 'i', 'o', 'u', 'x', 'X' or 'c') (default: 'd') */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_STRING_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_STRING_OPTIONS_API_VERSION) \
    }, \
    .format_prefix = "", \
    .format_suffix = "", \
    .format_flags = "", \
    .format_field_width = 0, \
    .format_precision = -1, \
    .format_conversion_specifier = "d", \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_STRING__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_STRING__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_STRING__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_INT_TO_STRING__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_BYTE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_BYTE;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_BYTE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_BYTE__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_BYTE__OUT__RED (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_BYTE__OUT__GREEN (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_BYTE__OUT__BLUE (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_BYTE__OUT_LAST (2)

#define SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_FLOAT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_FLOAT;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_FLOAT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_FLOAT__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_FLOAT__OUT__RED (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_FLOAT__OUT__GREEN (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_FLOAT__OUT__BLUE (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_FLOAT__OUT_LAST (2)

#define SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_INT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_INT;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_INT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_INT__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_INT__OUT__RED (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_INT__OUT__GREEN (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_INT__OUT__BLUE (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_RGB_TO_INT__OUT_LAST (2)

#define SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_BYTE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_BYTE;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_BYTE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_BYTE__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_BYTE__OUT__X (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_BYTE__OUT__Y (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_BYTE__OUT__Z (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_BYTE__OUT_LAST (2)

#define SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_FLOAT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_FLOAT;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_FLOAT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_FLOAT__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_FLOAT__OUT__X (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_FLOAT__OUT__Y (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_FLOAT__OUT__Z (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_FLOAT__OUT_LAST (2)

#define SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_INT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_INT;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_INT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_INT__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_INT__OUT__X (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_INT__OUT__Y (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_INT__OUT__Z (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_DIRECTION_VECTOR_TO_INT__OUT_LAST (2)

#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_BOOLEAN_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_BOOLEAN;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_BOOLEAN__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_BOOLEAN__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_BOOLEAN__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_BOOLEAN__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_BYTE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_BYTE;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_BYTE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_BYTE__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_BYTE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_BYTE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_FLOAT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_FLOAT;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_FLOAT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_FLOAT__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_FLOAT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_FLOAT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_EMPTY_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_EMPTY;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_EMPTY__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_EMPTY__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_EMPTY__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_EMPTY__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_INT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_INT;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_INT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_INT__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_INT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_INT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_ERROR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_ERROR;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_ERROR__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_ERROR__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_ERROR__OUT__CODE (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_ERROR__OUT__MESSAGE (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_ERROR__OUT_LAST (1)

#define SOL_FLOW_NODE_TYPE_CONVERTER_BITS_TO_BYTE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_BITS_TO_BYTE;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BITS_TO_BYTE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BITS_TO_BYTE__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BITS_TO_BYTE__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BITS_TO_BYTE__IN__IN_2 (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BITS_TO_BYTE__IN__IN_3 (3)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BITS_TO_BYTE__IN__IN_4 (4)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BITS_TO_BYTE__IN__IN_5 (5)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BITS_TO_BYTE__IN__IN_6 (6)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BITS_TO_BYTE__IN__IN_7 (7)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BITS_TO_BYTE__IN__IN_LAST (7)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BITS_TO_BYTE__IN_LAST (7)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BITS_TO_BYTE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BITS_TO_BYTE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_BLOB_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_BLOB;

struct sol_flow_node_type_converter_string_to_blob_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_BLOB_OPTIONS_API_VERSION (1)
    bool include_null_terminator; /**< Include the terminating NULL byte (\0) in the blob size. (default: True) */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_BLOB_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_BLOB_OPTIONS_API_VERSION) \
    }, \
    .include_null_terminator = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_BLOB__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_BLOB__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_BLOB__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_BLOB__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_BLOB_TO_STRING_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_BLOB_TO_STRING;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BLOB_TO_STRING__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BLOB_TO_STRING__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BLOB_TO_STRING__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BLOB_TO_STRING__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_TIMESTAMP_TO_STRING_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_TIMESTAMP_TO_STRING;

struct sol_flow_node_type_converter_timestamp_to_string_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_TIMESTAMP_TO_STRING_OPTIONS_API_VERSION (1)
    const char * format; /**< Format string to be used in the conversion. The syntax is the same as strftime()'s. (default: '%Y-%m-%dT%H:%M:%S%Z') */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_TIMESTAMP_TO_STRING_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_TIMESTAMP_TO_STRING_OPTIONS_API_VERSION) \
    }, \
    .format = "%Y-%m-%dT%H:%M:%S%Z", \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_TIMESTAMP_TO_STRING__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_TIMESTAMP_TO_STRING__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_TIMESTAMP_TO_STRING__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_TIMESTAMP_TO_STRING__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_TIMESTAMP_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_TIMESTAMP;

struct sol_flow_node_type_converter_string_to_timestamp_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_TIMESTAMP_OPTIONS_API_VERSION (1)
    const char * format; /**< Format string to be used in the conversion. The syntax is the same as strftime()'s. (default: '%Y-%m-%dT%H:%M:%S') */
};

#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_TIMESTAMP_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_TIMESTAMP_OPTIONS_API_VERSION) \
    }, \
    .format = "%Y-%m-%dT%H:%M:%S", \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_TIMESTAMP__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_TIMESTAMP__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_TIMESTAMP__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_TIMESTAMP__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_BLOB_TO_JSON_OBJECT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_BLOB_TO_JSON_OBJECT;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BLOB_TO_JSON_OBJECT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BLOB_TO_JSON_OBJECT__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BLOB_TO_JSON_OBJECT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BLOB_TO_JSON_OBJECT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_JSON_OBJECT_TO_BLOB_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_JSON_OBJECT_TO_BLOB;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_JSON_OBJECT_TO_BLOB__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_JSON_OBJECT_TO_BLOB__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_JSON_OBJECT_TO_BLOB__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_JSON_OBJECT_TO_BLOB__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_BLOB_TO_JSON_ARRAY_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_BLOB_TO_JSON_ARRAY;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BLOB_TO_JSON_ARRAY__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BLOB_TO_JSON_ARRAY__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_BLOB_TO_JSON_ARRAY__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_BLOB_TO_JSON_ARRAY__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_JSON_ARRAY_TO_BLOB_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_JSON_ARRAY_TO_BLOB;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_JSON_ARRAY_TO_BLOB__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_JSON_ARRAY_TO_BLOB__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_JSON_ARRAY_TO_BLOB__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_JSON_ARRAY_TO_BLOB__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_JSON_OBJECT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_JSON_OBJECT;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_JSON_OBJECT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_JSON_OBJECT__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_JSON_OBJECT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_JSON_OBJECT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_JSON_ARRAY_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_JSON_ARRAY;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_JSON_ARRAY__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_JSON_ARRAY__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_JSON_ARRAY__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_STRING_TO_JSON_ARRAY__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_CONVERTER_LOCATION_TO_FLOAT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_LOCATION_TO_FLOAT;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_LOCATION_TO_FLOAT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_LOCATION_TO_FLOAT__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_LOCATION_TO_FLOAT__OUT__LATITUDE (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_LOCATION_TO_FLOAT__OUT__LONGITUDE (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_LOCATION_TO_FLOAT__OUT__ALTITUDE (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_LOCATION_TO_FLOAT__OUT_LAST (2)

#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_LOCATION_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_LOCATION;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_LOCATION__IN__LATITUDE (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_LOCATION__IN__LONGITUDE (1)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_LOCATION__IN__ALTITUDE (2)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_LOCATION__IN_LAST (2)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_LOCATION__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_CONVERTER_FLOAT_TO_LOCATION__OUT_LAST (0)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-converter");

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
