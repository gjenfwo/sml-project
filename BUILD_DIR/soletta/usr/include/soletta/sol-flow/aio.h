#pragma once
/* this file was auto-generated from ./src/modules/flow/aio/aio.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_AIO_READER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_AIO_READER;

struct sol_flow_node_type_aio_reader_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_AIO_READER_OPTIONS_API_VERSION (1)
    const char * pin; /**< Label of the desired pin on the board. If raw is set to true, this should be "<device> <pin>" pair, e.g. "0 3". (required) */
    bool raw; /**< Change 'pin' meaning to be the system parameters needed to address the desired pin. Use it if you know what you are doing. (default: False) */
    int32_t mask; /**< Number of valid bits. This number is used to filter data received from hardware (which is manufacturer dependent), therefore should not be used as a way to change the output range because the mask is applied to the least significant bits. (default: 12) */
    int32_t poll_timeout; /**< Polling time in milliseconds. This option will take no effect if hardware interruptions for GPIO is supported by the underlying system. Use it if you know that you don't have those interruptions available. (default: 1000) */
};

#define SOL_FLOW_NODE_TYPE_AIO_READER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_AIO_READER_OPTIONS_API_VERSION) \
    }, \
    .raw = false, \
    .mask = 12, \
    .poll_timeout = 1000, \
    __VA_ARGS__ \
}
/* Output Ports */
#define SOL_FLOW_NODE_TYPE_AIO_READER__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_AIO_READER__OUT_LAST (0)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-aio");

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
