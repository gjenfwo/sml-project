#pragma once
/* this file was auto-generated from ./src/modules/flow/unix-socket/unix-socket.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BOOLEAN_WRITER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BOOLEAN_WRITER;

struct sol_flow_node_type_unix_socket_boolean_writer_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BOOLEAN_WRITER_OPTIONS_API_VERSION (1)
    const char * path; /**< Unix socket path (required) */
    bool server; /**< Act like a server (default: True) */
};

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BOOLEAN_WRITER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BOOLEAN_WRITER_OPTIONS_API_VERSION) \
    }, \
    .server = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BOOLEAN_WRITER__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BOOLEAN_WRITER__IN_LAST (0)

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BOOLEAN_READER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BOOLEAN_READER;

struct sol_flow_node_type_unix_socket_boolean_reader_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BOOLEAN_READER_OPTIONS_API_VERSION (1)
    bool server; /**< Act like a server (default: False) */
    const char * path; /**< Unix socket path (required) */
};

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BOOLEAN_READER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BOOLEAN_READER_OPTIONS_API_VERSION) \
    }, \
    .server = false, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BOOLEAN_READER__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BOOLEAN_READER__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_STRING_WRITER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_UNIX_SOCKET_STRING_WRITER;

struct sol_flow_node_type_unix_socket_string_writer_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_STRING_WRITER_OPTIONS_API_VERSION (1)
    const char * path; /**< Unix socket path (required) */
    bool server; /**< Act like a server (default: True) */
};

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_STRING_WRITER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_UNIX_SOCKET_STRING_WRITER_OPTIONS_API_VERSION) \
    }, \
    .server = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_STRING_WRITER__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_STRING_WRITER__IN_LAST (0)

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_STRING_READER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_UNIX_SOCKET_STRING_READER;

struct sol_flow_node_type_unix_socket_string_reader_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_STRING_READER_OPTIONS_API_VERSION (1)
    bool server; /**< Act like a server (default: False) */
    const char * path; /**< Unix socket path (required) */
};

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_STRING_READER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_UNIX_SOCKET_STRING_READER_OPTIONS_API_VERSION) \
    }, \
    .server = false, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_STRING_READER__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_STRING_READER__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_RGB_WRITER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_UNIX_SOCKET_RGB_WRITER;

struct sol_flow_node_type_unix_socket_rgb_writer_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_RGB_WRITER_OPTIONS_API_VERSION (1)
    const char * path; /**< Unix socket path (required) */
    bool server; /**< Act like a server (default: True) */
};

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_RGB_WRITER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_UNIX_SOCKET_RGB_WRITER_OPTIONS_API_VERSION) \
    }, \
    .server = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_RGB_WRITER__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_RGB_WRITER__IN_LAST (0)

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_RGB_READER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_UNIX_SOCKET_RGB_READER;

struct sol_flow_node_type_unix_socket_rgb_reader_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_RGB_READER_OPTIONS_API_VERSION (1)
    bool server; /**< Act like a server (default: False) */
    const char * path; /**< Unix socket path (required) */
};

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_RGB_READER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_UNIX_SOCKET_RGB_READER_OPTIONS_API_VERSION) \
    }, \
    .server = false, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_RGB_READER__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_RGB_READER__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_DIRECTION_VECTOR_WRITER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_UNIX_SOCKET_DIRECTION_VECTOR_WRITER;

struct sol_flow_node_type_unix_socket_direction_vector_writer_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_DIRECTION_VECTOR_WRITER_OPTIONS_API_VERSION (1)
    const char * path; /**< Unix socket path (required) */
    bool server; /**< Act like a server (default: True) */
};

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_DIRECTION_VECTOR_WRITER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_UNIX_SOCKET_DIRECTION_VECTOR_WRITER_OPTIONS_API_VERSION) \
    }, \
    .server = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_DIRECTION_VECTOR_WRITER__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_DIRECTION_VECTOR_WRITER__IN_LAST (0)

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_DIRECTION_VECTOR_READER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_UNIX_SOCKET_DIRECTION_VECTOR_READER;

struct sol_flow_node_type_unix_socket_direction_vector_reader_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_DIRECTION_VECTOR_READER_OPTIONS_API_VERSION (1)
    bool server; /**< Act like a server (default: False) */
    const char * path; /**< Unix socket path (required) */
};

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_DIRECTION_VECTOR_READER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_UNIX_SOCKET_DIRECTION_VECTOR_READER_OPTIONS_API_VERSION) \
    }, \
    .server = false, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_DIRECTION_VECTOR_READER__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_DIRECTION_VECTOR_READER__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BYTE_WRITER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BYTE_WRITER;

struct sol_flow_node_type_unix_socket_byte_writer_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BYTE_WRITER_OPTIONS_API_VERSION (1)
    const char * path; /**< Unix socket path (required) */
    bool server; /**< Act like a server (default: True) */
};

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BYTE_WRITER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BYTE_WRITER_OPTIONS_API_VERSION) \
    }, \
    .server = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BYTE_WRITER__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BYTE_WRITER__IN_LAST (0)

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BYTE_READER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BYTE_READER;

struct sol_flow_node_type_unix_socket_byte_reader_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BYTE_READER_OPTIONS_API_VERSION (1)
    bool server; /**< Act like a server (default: False) */
    const char * path; /**< Unix socket path (required) */
};

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BYTE_READER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BYTE_READER_OPTIONS_API_VERSION) \
    }, \
    .server = false, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BYTE_READER__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_BYTE_READER__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_INT_WRITER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_UNIX_SOCKET_INT_WRITER;

struct sol_flow_node_type_unix_socket_int_writer_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_INT_WRITER_OPTIONS_API_VERSION (1)
    const char * path; /**< Unix socket path (required) */
    bool server; /**< Act like a server (default: True) */
};

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_INT_WRITER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_UNIX_SOCKET_INT_WRITER_OPTIONS_API_VERSION) \
    }, \
    .server = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_INT_WRITER__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_INT_WRITER__IN_LAST (0)

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_INT_READER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_UNIX_SOCKET_INT_READER;

struct sol_flow_node_type_unix_socket_int_reader_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_INT_READER_OPTIONS_API_VERSION (1)
    bool server; /**< Act like a server (default: False) */
    const char * path; /**< Unix socket path (required) */
};

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_INT_READER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_UNIX_SOCKET_INT_READER_OPTIONS_API_VERSION) \
    }, \
    .server = false, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_INT_READER__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_INT_READER__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_FLOAT_WRITER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_UNIX_SOCKET_FLOAT_WRITER;

struct sol_flow_node_type_unix_socket_float_writer_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_FLOAT_WRITER_OPTIONS_API_VERSION (1)
    const char * path; /**< Unix socket path (required) */
    bool server; /**< Act like a server (default: True) */
};

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_FLOAT_WRITER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_UNIX_SOCKET_FLOAT_WRITER_OPTIONS_API_VERSION) \
    }, \
    .server = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_FLOAT_WRITER__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_FLOAT_WRITER__IN_LAST (0)

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_FLOAT_READER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_UNIX_SOCKET_FLOAT_READER;

struct sol_flow_node_type_unix_socket_float_reader_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_FLOAT_READER_OPTIONS_API_VERSION (1)
    bool server; /**< Act like a server (default: False) */
    const char * path; /**< Unix socket path (required) */
};

#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_FLOAT_READER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_UNIX_SOCKET_FLOAT_READER_OPTIONS_API_VERSION) \
    }, \
    .server = false, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_FLOAT_READER__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_UNIX_SOCKET_FLOAT_READER__OUT_LAST (0)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-unix_socket");

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
