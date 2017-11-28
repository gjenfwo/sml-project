#pragma once
/* this file was auto-generated from ./src/modules/flow/int/int.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_INT_MAX_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_MAX;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_MAX__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_INT_MAX__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_INT_MAX__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_INT_MAX__IN__IN_LAST (1)
#define SOL_FLOW_NODE_TYPE_INT_MAX__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_MAX__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_MAX__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_MIN_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_MIN;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_MIN__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_INT_MIN__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_INT_MIN__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_INT_MIN__IN__IN_LAST (1)
#define SOL_FLOW_NODE_TYPE_INT_MIN__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_MIN__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_MIN__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_ABS_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_ABS;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_ABS__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_INT_ABS__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_ABS__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_ABS__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_ACCUMULATOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_ACCUMULATOR;

struct sol_flow_node_type_int_accumulator_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_INT_ACCUMULATOR_OPTIONS_API_VERSION (1)
    struct sol_irange_spec setup_value; /**< Range and step to be used in operations. Only positive step values are allowed. (default: {'max': 'INT32_MAX', 'min': 'INT32_MIN', 'step': 1}) */
    int32_t initial_value; /**< The initial value. An initial packet will be sent with this value. (default: 0) */
    bool send_initial_packet; /**< If true, a packet containing initial value will be sent during initialization (default: True) */
};

#define SOL_FLOW_NODE_TYPE_INT_ACCUMULATOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_INT_ACCUMULATOR_OPTIONS_API_VERSION) \
    }, \
    .setup_value = {.max=INT32_MAX, .min=INT32_MIN, .step=1}, \
    .initial_value = 0, \
    .send_initial_packet = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_ACCUMULATOR__IN__INC (0)
#define SOL_FLOW_NODE_TYPE_INT_ACCUMULATOR__IN__DEC (1)
#define SOL_FLOW_NODE_TYPE_INT_ACCUMULATOR__IN__RESET (2)
#define SOL_FLOW_NODE_TYPE_INT_ACCUMULATOR__IN__SET (3)
#define SOL_FLOW_NODE_TYPE_INT_ACCUMULATOR__IN_LAST (3)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_ACCUMULATOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_ACCUMULATOR__OUT__OVERFLOW (1)
#define SOL_FLOW_NODE_TYPE_INT_ACCUMULATOR__OUT__UNDERFLOW (2)
#define SOL_FLOW_NODE_TYPE_INT_ACCUMULATOR__OUT_LAST (2)

#define SOL_FLOW_NODE_TYPE_INT_ADDITION_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_ADDITION;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND (0)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_0 (0)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_1 (1)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_2 (2)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_3 (3)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_4 (4)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_5 (5)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_6 (6)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_7 (7)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_8 (8)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_9 (9)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_10 (10)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_11 (11)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_12 (12)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_13 (13)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_14 (14)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_15 (15)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_16 (16)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_17 (17)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_18 (18)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_19 (19)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_20 (20)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_21 (21)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_22 (22)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_23 (23)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_24 (24)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_25 (25)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_26 (26)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_27 (27)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_28 (28)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_29 (29)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_30 (30)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_31 (31)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN__OPERAND_LAST (31)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__IN_LAST (31)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_ADDITION__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_DIVISION_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_DIVISION;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_DIVISION__IN__DIVIDEND (0)
#define SOL_FLOW_NODE_TYPE_INT_DIVISION__IN__DIVISOR (1)
#define SOL_FLOW_NODE_TYPE_INT_DIVISION__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_DIVISION__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_DIVISION__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_MODULO_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_MODULO;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_MODULO__IN__DIVIDEND (0)
#define SOL_FLOW_NODE_TYPE_INT_MODULO__IN__DIVISOR (1)
#define SOL_FLOW_NODE_TYPE_INT_MODULO__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_MODULO__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_MODULO__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND (0)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_0 (0)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_1 (1)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_2 (2)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_3 (3)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_4 (4)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_5 (5)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_6 (6)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_7 (7)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_8 (8)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_9 (9)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_10 (10)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_11 (11)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_12 (12)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_13 (13)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_14 (14)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_15 (15)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_16 (16)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_17 (17)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_18 (18)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_19 (19)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_20 (20)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_21 (21)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_22 (22)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_23 (23)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_24 (24)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_25 (25)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_26 (26)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_27 (27)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_28 (28)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_29 (29)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_30 (30)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_31 (31)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN__OPERAND_LAST (31)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__IN_LAST (31)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_MULTIPLICATION__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_SUBTRACTION_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_SUBTRACTION;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_SUBTRACTION__IN__MINUEND (0)
#define SOL_FLOW_NODE_TYPE_INT_SUBTRACTION__IN__SUBTRAHEND (1)
#define SOL_FLOW_NODE_TYPE_INT_SUBTRACTION__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_SUBTRACTION__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_SUBTRACTION__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_BITWISE_AND_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_BITWISE_AND;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_AND__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_AND__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_AND__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_AND__IN__IN_LAST (1)
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_AND__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_AND__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_AND__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_BITWISE_NOT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_BITWISE_NOT;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_NOT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_NOT__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_NOT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_NOT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_BITWISE_OR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_BITWISE_OR;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_OR__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_OR__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_OR__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_OR__IN__IN_LAST (1)
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_OR__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_OR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_OR__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_SHIFT_LEFT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_SHIFT_LEFT;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_SHIFT_LEFT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_INT_SHIFT_LEFT__IN__SHIFT (1)
#define SOL_FLOW_NODE_TYPE_INT_SHIFT_LEFT__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_SHIFT_LEFT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_SHIFT_LEFT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_SHIFT_RIGHT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_SHIFT_RIGHT;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_SHIFT_RIGHT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_INT_SHIFT_RIGHT__IN__SHIFT (1)
#define SOL_FLOW_NODE_TYPE_INT_SHIFT_RIGHT__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_SHIFT_RIGHT__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_SHIFT_RIGHT__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_BITWISE_XOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_BITWISE_XOR;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_XOR__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_XOR__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_XOR__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_XOR__IN__IN_LAST (1)
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_XOR__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_XOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_BITWISE_XOR__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_BUFFER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_BUFFER;

struct sol_flow_node_type_int_buffer_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_INT_BUFFER_OPTIONS_API_VERSION (1)
    int32_t samples; /**< Number of samples that the buffer should hold. (default: 4) */
    int32_t timeout; /**< Timeout time in milliseconds. Default is zero which means that timeout is disabled. (default: 0) */
    const char * operation; /**< Operation to be applied in the buffer elements to compute the output. Supported operations: mean and median. (default: 'mean') */
    bool circular; /**< If enabled, it will work just like a circular buffer, so after samples amount is reached it will send a new packet every time a new value is received, reusing last received values. If set to false, after a packet is sent it needs to wait for all samples again (or timeout) since it resets the buffer when samples amount is reached. (default: False) */
};

#define SOL_FLOW_NODE_TYPE_INT_BUFFER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_INT_BUFFER_OPTIONS_API_VERSION) \
    }, \
    .samples = 4, \
    .timeout = 0, \
    .operation = "mean", \
    .circular = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_BUFFER__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_INT_BUFFER__IN__TIMEOUT (1)
#define SOL_FLOW_NODE_TYPE_INT_BUFFER__IN__RESET (2)
#define SOL_FLOW_NODE_TYPE_INT_BUFFER__IN_LAST (2)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_BUFFER__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_BUFFER__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_EQUAL_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_EQUAL;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_EQUAL__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_INT_EQUAL__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_INT_EQUAL__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_INT_EQUAL__IN__IN_LAST (1)
#define SOL_FLOW_NODE_TYPE_INT_EQUAL__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_EQUAL__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_EQUAL__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_GREATER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_GREATER;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_GREATER__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_INT_GREATER__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_INT_GREATER__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_INT_GREATER__IN__IN_LAST (1)
#define SOL_FLOW_NODE_TYPE_INT_GREATER__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_GREATER__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_GREATER__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_GREATER_OR_EQUAL_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_GREATER_OR_EQUAL;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_GREATER_OR_EQUAL__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_INT_GREATER_OR_EQUAL__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_INT_GREATER_OR_EQUAL__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_INT_GREATER_OR_EQUAL__IN__IN_LAST (1)
#define SOL_FLOW_NODE_TYPE_INT_GREATER_OR_EQUAL__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_GREATER_OR_EQUAL__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_GREATER_OR_EQUAL__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_LESS_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_LESS;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_LESS__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_INT_LESS__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_INT_LESS__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_INT_LESS__IN__IN_LAST (1)
#define SOL_FLOW_NODE_TYPE_INT_LESS__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_LESS__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_LESS__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_LESS_OR_EQUAL_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_LESS_OR_EQUAL;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_LESS_OR_EQUAL__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_INT_LESS_OR_EQUAL__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_INT_LESS_OR_EQUAL__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_INT_LESS_OR_EQUAL__IN__IN_LAST (1)
#define SOL_FLOW_NODE_TYPE_INT_LESS_OR_EQUAL__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_LESS_OR_EQUAL__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_LESS_OR_EQUAL__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_NOT_EQUAL_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_NOT_EQUAL;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_NOT_EQUAL__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_INT_NOT_EQUAL__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_INT_NOT_EQUAL__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_INT_NOT_EQUAL__IN__IN_LAST (1)
#define SOL_FLOW_NODE_TYPE_INT_NOT_EQUAL__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_NOT_EQUAL__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_NOT_EQUAL__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_CONSTRAIN_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_CONSTRAIN;

struct sol_flow_node_type_int_constrain_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_INT_CONSTRAIN_OPTIONS_API_VERSION (1)
    struct sol_irange_spec range; /**< Range values (min, max, step). Used only if use_input_range is disabled. (default: {'max': 1023, 'min': 0}) */
    bool use_input_range; /**< Use min, max and step values from package instead of options min, max and step. It's useful if you need to convert from many different sources to the same range and all of them inform these values correctly in each package. (default: True) */
};

#define SOL_FLOW_NODE_TYPE_INT_CONSTRAIN_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_INT_CONSTRAIN_OPTIONS_API_VERSION) \
    }, \
    .range = {.max=1023, .min=0, .step=1}, \
    .use_input_range = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_CONSTRAIN__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_INT_CONSTRAIN__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_CONSTRAIN__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_CONSTRAIN__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_FILTER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_FILTER;

struct sol_flow_node_type_int_filter_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_INT_FILTER_OPTIONS_API_VERSION (1)
    int32_t min; /**< Minimum value (inclusive) (default: 'INT32_MIN') */
    int32_t max; /**< Maximum value (inclusive) (default: 'INT32_MAX') */
    bool range_override; /**< if true, the packet irange will have it's min and max changed to the min and max of this node. (default: False) */
};

#define SOL_FLOW_NODE_TYPE_INT_FILTER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_INT_FILTER_OPTIONS_API_VERSION) \
    }, \
    .min = INT32_MIN, \
    .max = INT32_MAX, \
    .range_override = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_FILTER__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_INT_FILTER__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_FILTER__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_FILTER__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_INRANGE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_INRANGE;

struct sol_flow_node_type_int_inrange_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_INT_INRANGE_OPTIONS_API_VERSION (1)
    struct sol_irange_spec range; /**< Range values. (default: {'max': 255, 'min': -255}) */
};

#define SOL_FLOW_NODE_TYPE_INT_INRANGE_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_INT_INRANGE_OPTIONS_API_VERSION) \
    }, \
    .range = {.max=255, .min=-255, .step=1}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_INRANGE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_INT_INRANGE__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_INRANGE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_INRANGE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_INT_MAP_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_INT_MAP;

struct sol_flow_node_type_int_map_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_INT_MAP_OPTIONS_API_VERSION (1)
    struct sol_irange_spec input_range; /**< Input's range. Used only if use_input_range is disabled. (default: {'max': 'INT32_MAX', 'min': 'INT32_MIN'}) */
    struct sol_irange_spec output_range; /**< Output's range. (required) */
    bool use_input_range; /**< Use min and max values from input package instead of option input_range. It's useful if you need to convert from many different sources to the same range and all of them inform these values correctly in each package. (default: True) */
};

#define SOL_FLOW_NODE_TYPE_INT_MAP_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_INT_MAP_OPTIONS_API_VERSION) \
    }, \
    .input_range = {.max=INT32_MAX, .min=INT32_MIN, .step=1}, \
    .use_input_range = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_INT_MAP__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_INT_MAP__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_INT_MAP__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_INT_MAP__OUT_LAST (0)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-int");

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
