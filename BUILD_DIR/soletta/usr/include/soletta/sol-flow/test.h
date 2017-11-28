#pragma once
/* this file was auto-generated from ./src/modules/flow/test/test.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_TEST_RESULT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_TEST_RESULT;

struct sol_flow_node_type_test_result_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_TEST_RESULT_OPTIONS_API_VERSION (1)
    int32_t timeout; /**< Time allotted for a fbp test to run in ms. Expiration of the timer is considered a failure. (default: 4000) */
};

#define SOL_FLOW_NODE_TYPE_TEST_RESULT_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_TEST_RESULT_OPTIONS_API_VERSION) \
    }, \
    .timeout = 4000, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_TEST_RESULT__IN__PASS (0)
#define SOL_FLOW_NODE_TYPE_TEST_RESULT__IN__FAIL (1)
#define SOL_FLOW_NODE_TYPE_TEST_RESULT__IN__RESULT (2)
#define SOL_FLOW_NODE_TYPE_TEST_RESULT__IN_LAST (2)

#define SOL_FLOW_NODE_TYPE_TEST_BOOLEAN_VALIDATOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_TEST_BOOLEAN_VALIDATOR;

struct sol_flow_node_type_test_boolean_validator_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_TEST_BOOLEAN_VALIDATOR_OPTIONS_API_VERSION (1)
    const char * sequence; /**< Expected sequence to be matched, formatted as 'TFTFTTTFF' where 'T' is true and 'F' is false. (required) */
};

#define SOL_FLOW_NODE_TYPE_TEST_BOOLEAN_VALIDATOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_TEST_BOOLEAN_VALIDATOR_OPTIONS_API_VERSION) \
    }, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_TEST_BOOLEAN_VALIDATOR__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_TEST_BOOLEAN_VALIDATOR__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_TEST_BOOLEAN_VALIDATOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_TEST_BOOLEAN_VALIDATOR__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_TEST_BOOLEAN_GENERATOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_TEST_BOOLEAN_GENERATOR;

struct sol_flow_node_type_test_boolean_generator_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_TEST_BOOLEAN_GENERATOR_OPTIONS_API_VERSION (1)
    const char * sequence; /**< String sequence to be generated, formatted as 'TFTFTTTFF' where 'T' is true and 'F' is false. (required) */
    int32_t interval; /**< Interval between packets, in miliseconds. (default: 0) */
};

#define SOL_FLOW_NODE_TYPE_TEST_BOOLEAN_GENERATOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_TEST_BOOLEAN_GENERATOR_OPTIONS_API_VERSION) \
    }, \
    .interval = 0, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_TEST_BOOLEAN_GENERATOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_TEST_BOOLEAN_GENERATOR__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_TEST_BYTE_VALIDATOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_TEST_BYTE_VALIDATOR;

struct sol_flow_node_type_test_byte_validator_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_TEST_BYTE_VALIDATOR_OPTIONS_API_VERSION (1)
    const char * sequence; /**< Expected sequence to be matched, formatted as '1 2 3 20 70 255'. Only numbers on base 10. (required) */
};

#define SOL_FLOW_NODE_TYPE_TEST_BYTE_VALIDATOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_TEST_BYTE_VALIDATOR_OPTIONS_API_VERSION) \
    }, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_TEST_BYTE_VALIDATOR__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_TEST_BYTE_VALIDATOR__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_TEST_BYTE_VALIDATOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_TEST_BYTE_VALIDATOR__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_TEST_BYTE_GENERATOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_TEST_BYTE_GENERATOR;

struct sol_flow_node_type_test_byte_generator_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_TEST_BYTE_GENERATOR_OPTIONS_API_VERSION (1)
    const char * sequence; /**< String sequence to be generated, formatted as '10 20 255'. Only numbers on base 10. (required) */
    int32_t interval; /**< Interval between packets, in miliseconds. (default: 0) */
};

#define SOL_FLOW_NODE_TYPE_TEST_BYTE_GENERATOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_TEST_BYTE_GENERATOR_OPTIONS_API_VERSION) \
    }, \
    .interval = 0, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_TEST_BYTE_GENERATOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_TEST_BYTE_GENERATOR__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_TEST_INT_VALIDATOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_TEST_INT_VALIDATOR;

struct sol_flow_node_type_test_int_validator_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_TEST_INT_VALIDATOR_OPTIONS_API_VERSION (1)
    const char * sequence; /**< Expected sequence to be matched, formatted as '1 2 3 -4 10 100 -1000' (required) */
};

#define SOL_FLOW_NODE_TYPE_TEST_INT_VALIDATOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_TEST_INT_VALIDATOR_OPTIONS_API_VERSION) \
    }, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_TEST_INT_VALIDATOR__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_TEST_INT_VALIDATOR__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_TEST_INT_VALIDATOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_TEST_INT_VALIDATOR__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_TEST_INT_GENERATOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_TEST_INT_GENERATOR;

struct sol_flow_node_type_test_int_generator_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_TEST_INT_GENERATOR_OPTIONS_API_VERSION (1)
    const char * sequence; /**< String sequence to be generated, formatted as '1 10 -2 1000'. (required) */
    int32_t interval; /**< Interval between packets, in miliseconds. (default: 0) */
};

#define SOL_FLOW_NODE_TYPE_TEST_INT_GENERATOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_TEST_INT_GENERATOR_OPTIONS_API_VERSION) \
    }, \
    .interval = 0, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_TEST_INT_GENERATOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_TEST_INT_GENERATOR__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_TEST_FLOAT_GENERATOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_TEST_FLOAT_GENERATOR;

struct sol_flow_node_type_test_float_generator_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_TEST_FLOAT_GENERATOR_OPTIONS_API_VERSION (1)
    const char * sequence; /**< String sequence to be generated, formatted as '1.0 2 -1.7 35.864' (required) */
    int32_t interval; /**< Interval between packets, in miliseconds. (default: 0) */
};

#define SOL_FLOW_NODE_TYPE_TEST_FLOAT_GENERATOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_TEST_FLOAT_GENERATOR_OPTIONS_API_VERSION) \
    }, \
    .interval = 0, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_TEST_FLOAT_GENERATOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_TEST_FLOAT_GENERATOR__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_TEST_FLOAT_VALIDATOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_TEST_FLOAT_VALIDATOR;

struct sol_flow_node_type_test_float_validator_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_TEST_FLOAT_VALIDATOR_OPTIONS_API_VERSION (1)
    const char * sequence; /**< Expected sequence to be matched, formatted as '1.0 2 -1.7 35.864' (required) */
};

#define SOL_FLOW_NODE_TYPE_TEST_FLOAT_VALIDATOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_TEST_FLOAT_VALIDATOR_OPTIONS_API_VERSION) \
    }, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_TEST_FLOAT_VALIDATOR__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_TEST_FLOAT_VALIDATOR__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_TEST_FLOAT_VALIDATOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_TEST_FLOAT_VALIDATOR__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_TEST_BLOB_VALIDATOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_TEST_BLOB_VALIDATOR;

struct sol_flow_node_type_test_blob_validator_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_TEST_BLOB_VALIDATOR_OPTIONS_API_VERSION (1)
    const char * expected; /**< Expected string to be matched (required) */
    bool expect_terminating_null_byte; /**< If true, it will compare the received blob with 'expected' string with terminating null byte, otherwise it will compare with a not terminated string. (default: False) */
};

#define SOL_FLOW_NODE_TYPE_TEST_BLOB_VALIDATOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_TEST_BLOB_VALIDATOR_OPTIONS_API_VERSION) \
    }, \
    .expect_terminating_null_byte = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_TEST_BLOB_VALIDATOR__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_TEST_BLOB_VALIDATOR__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_TEST_BLOB_VALIDATOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_TEST_BLOB_VALIDATOR__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_TEST_STRING_GENERATOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_TEST_STRING_GENERATOR;

struct sol_flow_node_type_test_string_generator_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_TEST_STRING_GENERATOR_OPTIONS_API_VERSION (1)
    const char * sequence; /**< String sequence to be generated, formatted as 'str1<separator>str2<separator>...', where separator is set on the separator option.. (required) */
    const char * separator; /**< String sequence separator. (default: ' ') */
    int32_t interval; /**< Interval between packets, in miliseconds. (default: 0) */
};

#define SOL_FLOW_NODE_TYPE_TEST_STRING_GENERATOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_TEST_STRING_GENERATOR_OPTIONS_API_VERSION) \
    }, \
    .separator = " ", \
    .interval = 0, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_TEST_STRING_GENERATOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_TEST_STRING_GENERATOR__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_TEST_STRING_VALIDATOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_TEST_STRING_VALIDATOR;

struct sol_flow_node_type_test_string_validator_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_TEST_STRING_VALIDATOR_OPTIONS_API_VERSION (1)
    const char * sequence; /**< Expected sequence to be matched, formatted as 'string 1|string 2|string 3' (required) */
};

#define SOL_FLOW_NODE_TYPE_TEST_STRING_VALIDATOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_TEST_STRING_VALIDATOR_OPTIONS_API_VERSION) \
    }, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_TEST_STRING_VALIDATOR__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_TEST_STRING_VALIDATOR__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_TEST_STRING_VALIDATOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_TEST_STRING_VALIDATOR__OUT_LAST (0)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-test");

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
