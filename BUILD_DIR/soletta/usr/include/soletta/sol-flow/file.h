#pragma once
/* this file was auto-generated from ./src/modules/flow/file/file.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_FILE_READER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FILE_READER;

struct sol_flow_node_type_file_reader_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_FILE_READER_OPTIONS_API_VERSION (1)
    const char * path; /**< file name to read. (required) */
};

#define SOL_FLOW_NODE_TYPE_FILE_READER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_FILE_READER_OPTIONS_API_VERSION) \
    }, \
    .path = NULL, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FILE_READER__IN__PATH (0)
#define SOL_FLOW_NODE_TYPE_FILE_READER__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FILE_READER__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_FILE_READER__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_FILE_WRITER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_FILE_WRITER;

struct sol_flow_node_type_file_writer_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_FILE_WRITER_OPTIONS_API_VERSION (1)
    const char * path; /**< file name to write. (required) */
    int32_t permissions; /**< file permissions in POSIX mode such as 0644. (default: 420) */
};

#define SOL_FLOW_NODE_TYPE_FILE_WRITER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_FILE_WRITER_OPTIONS_API_VERSION) \
    }, \
    .path = NULL, \
    .permissions = 420, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_FILE_WRITER__IN__PATH (0)
#define SOL_FLOW_NODE_TYPE_FILE_WRITER__IN__PERMISSIONS (1)
#define SOL_FLOW_NODE_TYPE_FILE_WRITER__IN__IN (2)
#define SOL_FLOW_NODE_TYPE_FILE_WRITER__IN_LAST (2)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_FILE_WRITER__OUT__BUSY (0)
#define SOL_FLOW_NODE_TYPE_FILE_WRITER__OUT__SIZE (1)
#define SOL_FLOW_NODE_TYPE_FILE_WRITER__OUT__DONE (2)
#define SOL_FLOW_NODE_TYPE_FILE_WRITER__OUT_LAST (2)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-file");

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
