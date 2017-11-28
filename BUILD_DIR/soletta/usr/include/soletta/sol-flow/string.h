#pragma once
/* this file was auto-generated from ./src/modules/flow/string/string.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_STRING_COMPARE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_STRING_COMPARE;

struct sol_flow_node_type_string_compare_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_STRING_COMPARE_OPTIONS_API_VERSION (1)
    int32_t chars; /**< Amount of chars to be compared between strings. If zero, the whole strings will be compared. (default: 0) */
    bool ignore_case; /**< Ignore case when comparing strings. (default: False) */
};

#define SOL_FLOW_NODE_TYPE_STRING_COMPARE_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_STRING_COMPARE_OPTIONS_API_VERSION) \
    }, \
    .chars = 0, \
    .ignore_case = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_STRING_COMPARE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_STRING_COMPARE__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_STRING_COMPARE__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_STRING_COMPARE__IN__IN_LAST (1)
#define SOL_FLOW_NODE_TYPE_STRING_COMPARE__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_STRING_COMPARE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_STRING_COMPARE__OUT__EQUAL (1)
#define SOL_FLOW_NODE_TYPE_STRING_COMPARE__OUT_LAST (1)

#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_STRING_CONCATENATE;

struct sol_flow_node_type_string_concatenate_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE_OPTIONS_API_VERSION (1)
    const char * separator; /**< Separator string to be used between the concatenated strings. It's set to null by default (no separator). (required) */
};

#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_STRING_CONCATENATE_OPTIONS_API_VERSION) \
    }, \
    .separator = NULL, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_0 (0)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_1 (1)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_2 (2)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_3 (3)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_4 (4)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_5 (5)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_6 (6)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_7 (7)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_8 (8)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_9 (9)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_10 (10)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_11 (11)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_12 (12)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_13 (13)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_14 (14)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_15 (15)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_16 (16)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_17 (17)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_18 (18)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_19 (19)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_20 (20)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_21 (21)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_22 (22)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_23 (23)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_24 (24)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_25 (25)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_26 (26)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_27 (27)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_28 (28)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_29 (29)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_30 (30)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_31 (31)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN__IN_LAST (31)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__IN_LAST (31)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_STRING_CONCATENATE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_STRING_LENGTH_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_STRING_LENGTH;

struct sol_flow_node_type_string_length_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_STRING_LENGTH_OPTIONS_API_VERSION (1)
    int32_t maxlen; /**< Maximum length to be checked. If a string is greater than that, maxlen value will be sent. If zero, no limit is applied. (default: 0) */
};

#define SOL_FLOW_NODE_TYPE_STRING_LENGTH_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_STRING_LENGTH_OPTIONS_API_VERSION) \
    }, \
    .maxlen = 0, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_STRING_LENGTH__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_STRING_LENGTH__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_STRING_LENGTH__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_STRING_LENGTH__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_STRING_SLICE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_STRING_SLICE;

struct sol_flow_node_type_string_slice_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_STRING_SLICE_OPTIONS_API_VERSION (1)
    int32_t start; /**< Start index of the slice (counting starts from 0). Negative values are relative to the end of the input string. If the given indexes are not valid for the input string, an empty string output is produced. It can be overriden by values received on 'START' port. (default: 0) */
    int32_t end; /**< End index of the slice (counting starts from 0). Negative values are relative to the end of the input string. If the given indexes are not valid for the input string, an empty string output is produced. It can be overriden by values received on 'END' port. (default: 0) */
};

#define SOL_FLOW_NODE_TYPE_STRING_SLICE_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_STRING_SLICE_OPTIONS_API_VERSION) \
    }, \
    .start = 0, \
    .end = 0, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_STRING_SLICE__IN__START (0)
#define SOL_FLOW_NODE_TYPE_STRING_SLICE__IN__END (1)
#define SOL_FLOW_NODE_TYPE_STRING_SLICE__IN__IN (2)
#define SOL_FLOW_NODE_TYPE_STRING_SLICE__IN_LAST (2)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_STRING_SLICE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_STRING_SLICE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_STRING_SPLIT_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_STRING_SPLIT;

struct sol_flow_node_type_string_split_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_STRING_SPLIT_OPTIONS_API_VERSION (1)
    int32_t index; /**< A string can be split in many substrings. This value defines which substring should be sent. It must be non-negative. It can be overriden by values received on 'INDEX' port. (default: 0) */
    int32_t max_split; /**< A string can be split in many substrings. This value defines the maximum number of splits (separated by the separator option) to generate, and must be non-negative. The default value of zero means to generate all substrings between the given separator. This option can be overriden by values received on the 'MAX_SPLIT' port. (default: 0) */
    const char * separator; /**< String received on 'IN' port will be split using these delimiters chars. It can be overriden by values received on 'SEPARATOR' port. (default: ' ') */
};

#define SOL_FLOW_NODE_TYPE_STRING_SPLIT_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_STRING_SPLIT_OPTIONS_API_VERSION) \
    }, \
    .index = 0, \
    .max_split = 0, \
    .separator = " ", \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_STRING_SPLIT__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_STRING_SPLIT__IN__SEPARATOR (1)
#define SOL_FLOW_NODE_TYPE_STRING_SPLIT__IN__INDEX (2)
#define SOL_FLOW_NODE_TYPE_STRING_SPLIT__IN__MAX_SPLIT (3)
#define SOL_FLOW_NODE_TYPE_STRING_SPLIT__IN_LAST (3)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_STRING_SPLIT__OUT__LENGTH (0)
#define SOL_FLOW_NODE_TYPE_STRING_SPLIT__OUT__OUT (1)
#define SOL_FLOW_NODE_TYPE_STRING_SPLIT__OUT_LAST (1)

#define SOL_FLOW_NODE_TYPE_STRING_LOWERCASE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_STRING_LOWERCASE;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_STRING_LOWERCASE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_STRING_LOWERCASE__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_STRING_LOWERCASE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_STRING_LOWERCASE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_STRING_UPPERCASE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_STRING_UPPERCASE;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_STRING_UPPERCASE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_STRING_UPPERCASE__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_STRING_UPPERCASE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_STRING_UPPERCASE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_STRING_STARTS_WITH_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_STRING_STARTS_WITH;

struct sol_flow_node_type_string_starts_with_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_STRING_STARTS_WITH_OPTIONS_API_VERSION (1)
    int32_t start; /**< Index where to start the prefix matching. Any negative value means it's not set, i.e. start the matching from the input's start. It must not be greater than the value set for the end index (if that one is non-negative). This value may be overriden by the string received on the 'START' port. (default: 0) */
    int32_t end; /**< Index where to end the prefix matching. Any negative value means it's not set, i.e. do the matching until the end of the input string. It must not be less than the value set for the start index. This value may be overriden by the string received on the 'END' port. (default: -1) */
    const char * prefix; /**< Prefix string to be searched on the one received on the 'IN' port. It can be overriden by values received on 'PREFIX' port. (required) */
};

#define SOL_FLOW_NODE_TYPE_STRING_STARTS_WITH_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_STRING_STARTS_WITH_OPTIONS_API_VERSION) \
    }, \
    .start = 0, \
    .end = -1, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_STRING_STARTS_WITH__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_STRING_STARTS_WITH__IN__PREFIX (1)
#define SOL_FLOW_NODE_TYPE_STRING_STARTS_WITH__IN__START (2)
#define SOL_FLOW_NODE_TYPE_STRING_STARTS_WITH__IN__END (3)
#define SOL_FLOW_NODE_TYPE_STRING_STARTS_WITH__IN_LAST (3)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_STRING_STARTS_WITH__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_STRING_STARTS_WITH__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_STRING_ENDS_WITH_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_STRING_ENDS_WITH;

struct sol_flow_node_type_string_ends_with_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_STRING_ENDS_WITH_OPTIONS_API_VERSION (1)
    int32_t start; /**< Index where to start the suffix matching. Any negative value means it's not set, i.e. start the matching from the input's end minus the size of the suffix. It must not be greater than the value set for the end index (if that one is non-negative). This value may be overriden by the string received on the 'START' port. (default: -1) */
    int32_t end; /**< Index where to end the suffix matching. Any negative value means it's not set, i.e. end the matching at the input's string end. It must not be less than the value set for the start index (if that one is non-negative). This value may be overriden by the string received on the 'END' port. (default: -1) */
    const char * suffix; /**< Suffix string to be searched on the one received on the 'IN' port. It can be overriden by values received on 'SUFFIX' port. (required) */
};

#define SOL_FLOW_NODE_TYPE_STRING_ENDS_WITH_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_STRING_ENDS_WITH_OPTIONS_API_VERSION) \
    }, \
    .start = -1, \
    .end = -1, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_STRING_ENDS_WITH__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_STRING_ENDS_WITH__IN__SUFFIX (1)
#define SOL_FLOW_NODE_TYPE_STRING_ENDS_WITH__IN__START (2)
#define SOL_FLOW_NODE_TYPE_STRING_ENDS_WITH__IN__END (3)
#define SOL_FLOW_NODE_TYPE_STRING_ENDS_WITH__IN_LAST (3)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_STRING_ENDS_WITH__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_STRING_ENDS_WITH__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_STRING_REPLACE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_STRING_REPLACE;

struct sol_flow_node_type_string_replace_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_STRING_REPLACE_OPTIONS_API_VERSION (1)
    int32_t max_replace; /**< A string can have a substring replaced in many points. This value defines the maximum number of replacements to attempt, and must be non-negative. The default value of zero means to replace all possible substrings. This option can be overriden by values received on the 'MAX_REPLACE' port. (default: 0) */
    const char * from_string; /**< The string received on the 'IN' port will have substrings defined by this option replaced by the ones defined by the 'to_string' one. It can be overriden by values received on 'FROM' port. (default: '') */
    bool forward_on_no_match; /**< Whether to only forward the input string as is to the output port when no matches occur (true) or to generate error packets (false) (default: True) */
    const char * to_string; /**< The string received on the 'IN' port will have substrings defined by the 'from_string' option replaced by the ones defined by this one. It can be overriden by values received on 'TO' port. (default: '') */
};

#define SOL_FLOW_NODE_TYPE_STRING_REPLACE_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_STRING_REPLACE_OPTIONS_API_VERSION) \
    }, \
    .max_replace = 0, \
    .from_string = "", \
    .forward_on_no_match = true, \
    .to_string = "", \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_STRING_REPLACE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_STRING_REPLACE__IN__FROM (1)
#define SOL_FLOW_NODE_TYPE_STRING_REPLACE__IN__TO (2)
#define SOL_FLOW_NODE_TYPE_STRING_REPLACE__IN__MAX_REPLACE (3)
#define SOL_FLOW_NODE_TYPE_STRING_REPLACE__IN_LAST (3)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_STRING_REPLACE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_STRING_REPLACE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_STRING_UUID_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_STRING_UUID;

struct sol_flow_node_type_string_uuid_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_STRING_UUID_OPTIONS_API_VERSION (1)
    bool with_hyphens; /**< Whether to put UUID hyphens in the resulting string. (default: False) */
    bool upcase; /**< Whether to output the UUID string in uppercase (default: False) */
};

#define SOL_FLOW_NODE_TYPE_STRING_UUID_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_STRING_UUID_OPTIONS_API_VERSION) \
    }, \
    .with_hyphens = false, \
    .upcase = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_STRING_UUID__IN__GENERATE (0)
#define SOL_FLOW_NODE_TYPE_STRING_UUID__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_STRING_UUID__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_STRING_UUID__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_STRING_IS_EMPTY_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_STRING_IS_EMPTY;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_STRING_IS_EMPTY__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_STRING_IS_EMPTY__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_STRING_IS_EMPTY__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_STRING_IS_EMPTY__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_STRING_B64ENCODE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_STRING_B64ENCODE;

struct sol_flow_node_type_string_b64encode_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_STRING_B64ENCODE_OPTIONS_API_VERSION (1)
    const char * base64_map; /**< If non-null must be a map with exactly 65 characters, the first 64 are the map for the 6-bits numbers and the last (position 64) is the padding if input string is not multiple of 3 bytes. (default: 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=') */
};

#define SOL_FLOW_NODE_TYPE_STRING_B64ENCODE_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_STRING_B64ENCODE_OPTIONS_API_VERSION) \
    }, \
    .base64_map = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=", \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_STRING_B64ENCODE__IN__STRING (0)
#define SOL_FLOW_NODE_TYPE_STRING_B64ENCODE__IN__BLOB (1)
#define SOL_FLOW_NODE_TYPE_STRING_B64ENCODE__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_STRING_B64ENCODE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_STRING_B64ENCODE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_STRING_B64DECODE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_STRING_B64DECODE;

struct sol_flow_node_type_string_b64decode_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_STRING_B64DECODE_OPTIONS_API_VERSION (1)
    const char * base64_map; /**< If non-null must be a map with exactly 65 characters, the first 64 are the map for the 6-bits numbers and the last (position 64) is the padding if input string is not multiple of 3 bytes. (default: 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=') */
};

#define SOL_FLOW_NODE_TYPE_STRING_B64DECODE_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_STRING_B64DECODE_OPTIONS_API_VERSION) \
    }, \
    .base64_map = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=", \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_STRING_B64DECODE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_STRING_B64DECODE__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_STRING_B64DECODE__OUT__STRING (0)
#define SOL_FLOW_NODE_TYPE_STRING_B64DECODE__OUT__BLOB (1)
#define SOL_FLOW_NODE_TYPE_STRING_B64DECODE__OUT_LAST (1)

#define SOL_FLOW_NODE_TYPE_STRING_B16ENCODE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_STRING_B16ENCODE;

struct sol_flow_node_type_string_b16encode_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_STRING_B16ENCODE_OPTIONS_API_VERSION (1)
    bool uppercase; /**< If the letters (abcdef) should be uppercase. (default: False) */
};

#define SOL_FLOW_NODE_TYPE_STRING_B16ENCODE_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_STRING_B16ENCODE_OPTIONS_API_VERSION) \
    }, \
    .uppercase = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_STRING_B16ENCODE__IN__STRING (0)
#define SOL_FLOW_NODE_TYPE_STRING_B16ENCODE__IN__BLOB (1)
#define SOL_FLOW_NODE_TYPE_STRING_B16ENCODE__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_STRING_B16ENCODE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_STRING_B16ENCODE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_STRING_B16DECODE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_STRING_B16DECODE;

struct sol_flow_node_type_string_b16decode_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_STRING_B16DECODE_OPTIONS_API_VERSION (1)
    bool uppercase; /**< If the letters (abcdef) should be uppercase. (default: False) */
};

#define SOL_FLOW_NODE_TYPE_STRING_B16DECODE_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_STRING_B16DECODE_OPTIONS_API_VERSION) \
    }, \
    .uppercase = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_STRING_B16DECODE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_STRING_B16DECODE__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_STRING_B16DECODE__OUT__STRING (0)
#define SOL_FLOW_NODE_TYPE_STRING_B16DECODE__OUT__BLOB (1)
#define SOL_FLOW_NODE_TYPE_STRING_B16DECODE__OUT_LAST (1)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-string");

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
