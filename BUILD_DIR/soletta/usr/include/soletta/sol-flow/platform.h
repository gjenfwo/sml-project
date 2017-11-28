#pragma once
/* this file was auto-generated from ./src/modules/flow/platform/platform.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_PLATFORM_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_PLATFORM;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_PLATFORM__IN__TRIGGER (0)
#define SOL_FLOW_NODE_TYPE_PLATFORM__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_PLATFORM__OUT__READY (0)
#define SOL_FLOW_NODE_TYPE_PLATFORM__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_PLATFORM_SET_TARGET_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_PLATFORM_SET_TARGET;

/* Input Ports */
#define SOL_FLOW_NODE_TYPE_PLATFORM_SET_TARGET__IN__TARGET (0)
#define SOL_FLOW_NODE_TYPE_PLATFORM_SET_TARGET__IN_LAST (0)

#define SOL_FLOW_NODE_TYPE_PLATFORM_HOSTNAME_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_PLATFORM_HOSTNAME;

struct sol_flow_node_type_platform_hostname_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_PLATFORM_HOSTNAME_OPTIONS_API_VERSION (1)
    bool send_initial_packet; /**< An initial packet with the current hostname will be sent (default: True) */
};

#define SOL_FLOW_NODE_TYPE_PLATFORM_HOSTNAME_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_PLATFORM_HOSTNAME_OPTIONS_API_VERSION) \
    }, \
    .send_initial_packet = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_PLATFORM_HOSTNAME__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_PLATFORM_HOSTNAME__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_PLATFORM_HOSTNAME__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_PLATFORM_HOSTNAME__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_PLATFORM_SYSTEM_CLOCK_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_PLATFORM_SYSTEM_CLOCK;

struct sol_flow_node_type_platform_system_clock_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_PLATFORM_SYSTEM_CLOCK_OPTIONS_API_VERSION (1)
    bool send_initial_packet; /**< An initial packet with the current timestamp will be sent (default: True) */
};

#define SOL_FLOW_NODE_TYPE_PLATFORM_SYSTEM_CLOCK_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_PLATFORM_SYSTEM_CLOCK_OPTIONS_API_VERSION) \
    }, \
    .send_initial_packet = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_PLATFORM_SYSTEM_CLOCK__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_PLATFORM_SYSTEM_CLOCK__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_PLATFORM_SYSTEM_CLOCK__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_PLATFORM_SYSTEM_CLOCK__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_PLATFORM_TIMEZONE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_PLATFORM_TIMEZONE;

struct sol_flow_node_type_platform_timezone_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_PLATFORM_TIMEZONE_OPTIONS_API_VERSION (1)
    bool send_initial_packet; /**< An initial packet with the current timezone will be sent (default: True) */
};

#define SOL_FLOW_NODE_TYPE_PLATFORM_TIMEZONE_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_PLATFORM_TIMEZONE_OPTIONS_API_VERSION) \
    }, \
    .send_initial_packet = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_PLATFORM_TIMEZONE__IN__IN (0)
#define SOL_FLOW_NODE_TYPE_PLATFORM_TIMEZONE__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_PLATFORM_TIMEZONE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_PLATFORM_TIMEZONE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE;

struct sol_flow_node_type_platform_locale_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE_OPTIONS_API_VERSION (1)
    bool send_initial_packet; /**< An initial packet with the current locales will be sent (default: True) */
};

#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE_OPTIONS_API_VERSION) \
    }, \
    .send_initial_packet = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__IN_LANG (0)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__IN_ADDRESS (1)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__IN_COLLATE (2)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__IN_CTYPE (3)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__IN_IDENTIFICATION (4)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__IN_MEASUREMENT (5)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__IN_MESSAGES (6)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__IN_MONETARY (7)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__IN_NAME (8)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__IN_NUMERIC (9)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__IN_PAPER (10)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__IN_TELEPHONE (11)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__IN_TIME (12)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__APPLY_LANG (13)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__APPLY_ADDRESS (14)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__APPLY_COLLATE (15)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__APPLY_CTYPE (16)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__APPLY_IDENTIFICATION (17)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__APPLY_MEASUREMENT (18)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__APPLY_MONETARY (19)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__APPLY_MESSAGES (20)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__APPLY_NAME (21)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__APPLY_NUMERIC (22)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__APPLY_PAPER (23)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__APPLY_TELEPHONE (24)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN__APPLY_TIME (25)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__IN_LAST (25)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__OUT__OUT_LANG (0)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__OUT__OUT_ADDRESS (1)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__OUT__OUT_COLLATE (2)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__OUT__OUT_CTYPE (3)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__OUT__OUT_IDENTIFICATION (4)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__OUT__OUT_MEASUREMENT (5)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__OUT__OUT_MESSAGES (6)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__OUT__OUT_MONETARY (7)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__OUT__OUT_NAME (8)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__OUT__OUT_NUMERIC (9)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__OUT__OUT_PAPER (10)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__OUT__OUT_TELEPHONE (11)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__OUT__OUT_TIME (12)
#define SOL_FLOW_NODE_TYPE_PLATFORM_LOCALE__OUT_LAST (12)

#define SOL_FLOW_NODE_TYPE_PLATFORM_SERVICE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_PLATFORM_SERVICE;

struct sol_flow_node_type_platform_service_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_PLATFORM_SERVICE_OPTIONS_API_VERSION (1)
    const char * name; /**< The platform service name (required) */
};

#define SOL_FLOW_NODE_TYPE_PLATFORM_SERVICE_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_PLATFORM_SERVICE_OPTIONS_API_VERSION) \
    }, \
    .name = NULL, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_PLATFORM_SERVICE__IN__TRIGGER (0)
#define SOL_FLOW_NODE_TYPE_PLATFORM_SERVICE__IN__START (1)
#define SOL_FLOW_NODE_TYPE_PLATFORM_SERVICE__IN__STOP (2)
#define SOL_FLOW_NODE_TYPE_PLATFORM_SERVICE__IN__NAME (3)
#define SOL_FLOW_NODE_TYPE_PLATFORM_SERVICE__IN_LAST (3)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_PLATFORM_SERVICE__OUT__ACTIVE (0)
#define SOL_FLOW_NODE_TYPE_PLATFORM_SERVICE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_PLATFORM_MACHINE_ID_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_PLATFORM_MACHINE_ID;

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_PLATFORM_MACHINE_ID__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_PLATFORM_MACHINE_ID__OUT_LAST (0)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-platform");

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
