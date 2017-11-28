#pragma once
/* this file was auto-generated from ./src/modules/flow/float/float.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>
#include <float.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FLOAT_ADDITION;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_0 (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_1 (1)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_2 (2)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_3 (3)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_4 (4)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_5 (5)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_6 (6)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_7 (7)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_8 (8)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_9 (9)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_10 (10)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_11 (11)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_12 (12)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_13 (13)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_14 (14)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_15 (15)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_16 (16)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_17 (17)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_18 (18)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_19 (19)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_20 (20)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_21 (21)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_22 (22)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_23 (23)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_24 (24)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_25 (25)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_26 (26)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_27 (27)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_28 (28)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_29 (29)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_30 (30)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_31 (31)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN__OPERAND_LAST (31)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__IN_LAST (31)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_ADDITION__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FLOAT_DIVISION_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FLOAT_DIVISION;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_DIVISION__IN__DIVIDEND (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_DIVISION__IN__DIVISOR (1)
#define SOL_FLOW_NODE_TYPE_FLOAT_DIVISION__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_DIVISION__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_DIVISION__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FLOAT_MODULO_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FLOAT_MODULO;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_MODULO__IN__DIVIDEND (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_MODULO__IN__DIVISOR (1)
#define SOL_FLOW_NODE_TYPE_FLOAT_MODULO__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_MODULO__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_MODULO__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_0 (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_1 (1)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_2 (2)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_3 (3)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_4 (4)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_5 (5)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_6 (6)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_7 (7)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_8 (8)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_9 (9)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_10 (10)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_11 (11)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_12 (12)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_13 (13)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_14 (14)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_15 (15)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_16 (16)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_17 (17)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_18 (18)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_19 (19)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_20 (20)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_21 (21)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_22 (22)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_23 (23)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_24 (24)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_25 (25)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_26 (26)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_27 (27)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_28 (28)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_29 (29)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_30 (30)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_31 (31)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN__OPERAND_LAST (31)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__IN_LAST (31)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_MULTIPLICATION__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FLOAT_SUBTRACTION_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FLOAT_SUBTRACTION;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_SUBTRACTION__IN__MINUEND (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_SUBTRACTION__IN__SUBTRAHEND (1)
#define SOL_FLOW_NODE_TYPE_FLOAT_SUBTRACTION__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_SUBTRACTION__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_SUBTRACTION__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FLOAT_ABS_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FLOAT_ABS;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_ABS__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_ABS__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_ABS__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_ABS__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FLOAT_CONSTRAIN_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FLOAT_CONSTRAIN;

struct sol_flow_node_type_float_constrain_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_FLOAT_CONSTRAIN_OPTIONS_API_VERSION (1)
    struct sol_drange_spec range; /**< Range values (min, max, step). Used only if use_input_range is disabled. (default: {'min': 0, 'max': 1023}) */
    bool use_input_range; /**< Use min, max and step values from package instead of options min, max and step. It's useful if you need to convert from many different sources to the same range and all of them inform these values correctly in each package. (default: True) */
};

#define SOL_FLOW_NODE_TYPE_FLOAT_CONSTRAIN_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_FLOAT_CONSTRAIN_OPTIONS_API_VERSION) \
    }, \
    .range = {.max=1023, .min=0, .step=DBL_MIN}, \
    .use_input_range = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_CONSTRAIN__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_CONSTRAIN__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_CONSTRAIN__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_CONSTRAIN__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FLOAT_LN_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FLOAT_LN;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_LN__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_LN__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_LN__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_LN__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FLOAT_MAP_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FLOAT_MAP;

struct sol_flow_node_type_float_map_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_FLOAT_MAP_OPTIONS_API_VERSION (1)
    struct sol_drange_spec input_range; /**< Input's range. Used only if use_input_range is disabled. (default: {'min': '-DBL_MAX', 'step': 'DBL_MIN', 'max': 'DBL_MAX'}) */
    struct sol_drange_spec output_range; /**< Output's range. (required) */
    bool use_input_range; /**< Use min and max values from input package instead of option input_range. It's useful if you need to convert from many different sources to the same range and all of them inform these values correctly in each package. (default: True) */
};

#define SOL_FLOW_NODE_TYPE_FLOAT_MAP_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_FLOAT_MAP_OPTIONS_API_VERSION) \
    }, \
    .input_range = {.max=DBL_MAX, .min=-DBL_MAX, .step=DBL_MIN}, \
    .use_input_range = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_MAP__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_MAP__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_MAP__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_MAP__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FLOAT_MAX_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FLOAT_MAX;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_MAX__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_MAX__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_MAX__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_FLOAT_MAX__IN__IN_LAST (1)
#define SOL_FLOW_NODE_TYPE_FLOAT_MAX__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_MAX__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_MAX__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FLOAT_MIN_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FLOAT_MIN;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_MIN__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_MIN__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_MIN__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_FLOAT_MIN__IN__IN_LAST (1)
#define SOL_FLOW_NODE_TYPE_FLOAT_MIN__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_MIN__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_MIN__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FLOAT_POW_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FLOAT_POW;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_POW__IN__BASE (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_POW__IN__EXPONENT (1)
#define SOL_FLOW_NODE_TYPE_FLOAT_POW__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_POW__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_POW__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FLOAT_SQRT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FLOAT_SQRT;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_SQRT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_SQRT__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_SQRT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_SQRT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FLOAT_EQUAL_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FLOAT_EQUAL;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_EQUAL__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_EQUAL__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_EQUAL__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_FLOAT_EQUAL__IN__IN_LAST (1)
#define SOL_FLOW_NODE_TYPE_FLOAT_EQUAL__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_EQUAL__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_EQUAL__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FLOAT_GREATER_OR_EQUAL_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FLOAT_GREATER_OR_EQUAL;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_GREATER_OR_EQUAL__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_GREATER_OR_EQUAL__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_GREATER_OR_EQUAL__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_FLOAT_GREATER_OR_EQUAL__IN__IN_LAST (1)
#define SOL_FLOW_NODE_TYPE_FLOAT_GREATER_OR_EQUAL__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_GREATER_OR_EQUAL__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_GREATER_OR_EQUAL__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FLOAT_GREATER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FLOAT_GREATER;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_GREATER__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_GREATER__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_GREATER__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_FLOAT_GREATER__IN__IN_LAST (1)
#define SOL_FLOW_NODE_TYPE_FLOAT_GREATER__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_GREATER__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_GREATER__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FLOAT_LESS_OR_EQUAL_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FLOAT_LESS_OR_EQUAL;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_LESS_OR_EQUAL__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_LESS_OR_EQUAL__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_LESS_OR_EQUAL__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_FLOAT_LESS_OR_EQUAL__IN__IN_LAST (1)
#define SOL_FLOW_NODE_TYPE_FLOAT_LESS_OR_EQUAL__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_LESS_OR_EQUAL__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_LESS_OR_EQUAL__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FLOAT_LESS_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FLOAT_LESS;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_LESS__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_LESS__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_LESS__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_FLOAT_LESS__IN__IN_LAST (1)
#define SOL_FLOW_NODE_TYPE_FLOAT_LESS__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_LESS__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_LESS__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FLOAT_NOT_EQUAL_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FLOAT_NOT_EQUAL;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_NOT_EQUAL__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_NOT_EQUAL__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_NOT_EQUAL__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_FLOAT_NOT_EQUAL__IN__IN_LAST (1)
#define SOL_FLOW_NODE_TYPE_FLOAT_NOT_EQUAL__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_NOT_EQUAL__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_NOT_EQUAL__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FLOAT_FILTER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FLOAT_FILTER;

struct sol_flow_node_type_float_filter_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_FLOAT_FILTER_OPTIONS_API_VERSION (1)
    double min; /**< Minimum value (inclusive) (default: '-DBL_MAX') */
    double max; /**< Maximum value (inclusive) (default: 'DBL_MAX') */
    bool range_override; /**< if true, the packet irange will have it's min and max changed to the min and max of this node. (default: False) */
};

#define SOL_FLOW_NODE_TYPE_FLOAT_FILTER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_FLOAT_FILTER_OPTIONS_API_VERSION) \
    }, \
    .min = -DBL_MAX, \
    .max = DBL_MAX, \
    .range_override = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_FILTER__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_FILTER__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_FILTER__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_FILTER__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FLOAT_WAVE_GENERATOR_TRAPEZOIDAL_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FLOAT_WAVE_GENERATOR_TRAPEZOIDAL;

struct sol_flow_node_type_float_wave_generator_trapezoidal_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_FLOAT_WAVE_GENERATOR_TRAPEZOIDAL_OPTIONS_API_VERSION (1)
    int32_t ticks_inc; /**< In how many function iterations (ticks) it should go from max to min values. The value must be greater than or equal to 1 (which means go from max to min instantly). With this value, the node will calculate the 'increasing step' of the function for you. (default: 1) */
    double max; /**< The maximum value of the wave. This must be greater than min. (required) */
    int32_t ticks_dec; /**< In how many function iterations (ticks) it should go from min to max values. The value must be greater than or equal to 1 (which means go from min to max instantly). With this value, the node will calculate the 'increasing step' of the function for you. (default: 1) */
    double min; /**< The minimum value of the wave. This must be less than max. (required) */
    int32_t tick_start; /**< The starting point of the wave, in ticks (must be greater or equal to 0). Zero means to start at min value, when no ticks have happened yet. Use this to shift the starting point and overwrite the default behavior. (default: 0) */
    int32_t ticks_at_max; /**< The number of (extra) input ticks the wave will hold its output at max value when it reaches it. The value must be greater than or equal to 0. (default: 0) */
    int32_t ticks_at_min; /**< The number of (extra) input ticks the wave will hold its output at min value when it reaches it. The value must be greater than or equal to 0. (default: 0) */
};

#define SOL_FLOW_NODE_TYPE_FLOAT_WAVE_GENERATOR_TRAPEZOIDAL_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_FLOAT_WAVE_GENERATOR_TRAPEZOIDAL_OPTIONS_API_VERSION) \
    }, \
    .ticks_inc = 1, \
    .ticks_dec = 1, \
    .tick_start = 0, \
    .ticks_at_max = 0, \
    .ticks_at_min = 0, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_WAVE_GENERATOR_TRAPEZOIDAL__IN__TICK (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_WAVE_GENERATOR_TRAPEZOIDAL__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_WAVE_GENERATOR_TRAPEZOIDAL__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_WAVE_GENERATOR_TRAPEZOIDAL__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FLOAT_WAVE_GENERATOR_SINUSOIDAL_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FLOAT_WAVE_GENERATOR_SINUSOIDAL;

struct sol_flow_node_type_float_wave_generator_sinusoidal_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_FLOAT_WAVE_GENERATOR_SINUSOIDAL_OPTIONS_API_VERSION (1)
    int32_t ticks_per_period; /**< In how many function iterations (ticks) it should go from the starting to the ending value of each function period (AKA function's resolution). The value must be greater than or equal to 1 (which means go from start to end in one step only), but note that waves very small values for this option tend to be useless. (required) */
    double amplitude; /**< The sine wave's amplitude. This must be a positive number, which will multiply the values in the pristine [-1.0, 1.0] range. (default: 1.0) */
    int32_t tick_start; /**< The starting point of the wave, in ticks (must be greater or equal to 0). Zero means to start at the beginning of the sive wave, when no ticks have happened yet. Use this to shift the starting point and overwrite the default behavior. (default: 0) */
};

#define SOL_FLOW_NODE_TYPE_FLOAT_WAVE_GENERATOR_SINUSOIDAL_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_FLOAT_WAVE_GENERATOR_SINUSOIDAL_OPTIONS_API_VERSION) \
    }, \
    .amplitude = 1.0, \
    .tick_start = 0, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_WAVE_GENERATOR_SINUSOIDAL__IN__TICK (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_WAVE_GENERATOR_SINUSOIDAL__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_WAVE_GENERATOR_SINUSOIDAL__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_WAVE_GENERATOR_SINUSOIDAL__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FLOAT_CLASSIFY_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FLOAT_CLASSIFY;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_CLASSIFY__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_CLASSIFY__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FLOAT_CLASSIFY__OUT__NAN (0)
#define SOL_FLOW_NODE_TYPE_FLOAT_CLASSIFY__OUT__INFINITE (1)
#define SOL_FLOW_NODE_TYPE_FLOAT_CLASSIFY__OUT__ZERO (2)
#define SOL_FLOW_NODE_TYPE_FLOAT_CLASSIFY__OUT__SUBNORMAL (3)
#define SOL_FLOW_NODE_TYPE_FLOAT_CLASSIFY__OUT__NORMAL (4)
#define SOL_FLOW_NODE_TYPE_FLOAT_CLASSIFY__OUT_LAST (4)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-float");

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
