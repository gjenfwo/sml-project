#pragma once
/* this file was auto-generated from ./src/modules/flow/wallclock/wallclock.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_WALLCLOCK_HOUR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_WALLCLOCK_HOUR;

struct sol_flow_node_type_wallclock_hour_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_HOUR_OPTIONS_API_VERSION (1)
    bool send_initial_packet; /**< If true, a packet containing the current hour will be sent during initialization (default: False) */
};

#define SOL_FLOW_NODE_TYPE_WALLCLOCK_HOUR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_WALLCLOCK_HOUR_OPTIONS_API_VERSION) \
    }, \
    .send_initial_packet = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_HOUR__IN__ENABLED (0)
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_HOUR__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_HOUR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_HOUR__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_WALLCLOCK_MINUTE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_WALLCLOCK_MINUTE;

struct sol_flow_node_type_wallclock_minute_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_MINUTE_OPTIONS_API_VERSION (1)
    bool send_initial_packet; /**< If true, a packet containing the current minute will be sent during initialization (default: False) */
};

#define SOL_FLOW_NODE_TYPE_WALLCLOCK_MINUTE_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_WALLCLOCK_MINUTE_OPTIONS_API_VERSION) \
    }, \
    .send_initial_packet = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_MINUTE__IN__ENABLED (0)
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_MINUTE__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_MINUTE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_MINUTE__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_WALLCLOCK_MONTH_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_WALLCLOCK_MONTH;

struct sol_flow_node_type_wallclock_month_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_MONTH_OPTIONS_API_VERSION (1)
    bool send_initial_packet; /**< If true, a packet containing the current month will be sent during initialization (default: False) */
};

#define SOL_FLOW_NODE_TYPE_WALLCLOCK_MONTH_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_WALLCLOCK_MONTH_OPTIONS_API_VERSION) \
    }, \
    .send_initial_packet = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_MONTH__IN__ENABLED (0)
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_MONTH__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_MONTH__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_MONTH__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_WALLCLOCK_MONTHDAY_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_WALLCLOCK_MONTHDAY;

struct sol_flow_node_type_wallclock_monthday_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_MONTHDAY_OPTIONS_API_VERSION (1)
    bool send_initial_packet; /**< If true, a packet containing the current monthday will be sent during initialization (default: False) */
};

#define SOL_FLOW_NODE_TYPE_WALLCLOCK_MONTHDAY_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_WALLCLOCK_MONTHDAY_OPTIONS_API_VERSION) \
    }, \
    .send_initial_packet = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_MONTHDAY__IN__ENABLED (0)
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_MONTHDAY__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_MONTHDAY__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_MONTHDAY__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_WALLCLOCK_SECOND_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_WALLCLOCK_SECOND;

struct sol_flow_node_type_wallclock_second_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_SECOND_OPTIONS_API_VERSION (1)
    bool send_initial_packet; /**< If true, a packet containing the current second will be sent during initialization (default: False) */
};

#define SOL_FLOW_NODE_TYPE_WALLCLOCK_SECOND_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_WALLCLOCK_SECOND_OPTIONS_API_VERSION) \
    }, \
    .send_initial_packet = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_SECOND__IN__ENABLED (0)
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_SECOND__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_SECOND__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_SECOND__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_WALLCLOCK_WEEKDAY_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_WALLCLOCK_WEEKDAY;

struct sol_flow_node_type_wallclock_weekday_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_WEEKDAY_OPTIONS_API_VERSION (1)
    bool send_initial_packet; /**< If true, a packet containing the current weekday will be sent durinng initialization (default: False) */
};

#define SOL_FLOW_NODE_TYPE_WALLCLOCK_WEEKDAY_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_WALLCLOCK_WEEKDAY_OPTIONS_API_VERSION) \
    }, \
    .send_initial_packet = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_WEEKDAY__IN__ENABLED (0)
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_WEEKDAY__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_WEEKDAY__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_WEEKDAY__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_WALLCLOCK_TIMEBLOCK_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_WALLCLOCK_TIMEBLOCK;

struct sol_flow_node_type_wallclock_timeblock_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_TIMEBLOCK_OPTIONS_API_VERSION (1)
    int32_t interval; /**< Time block interval. Defines the length of a frame in minutes. Last block may be smaller than others. For example, if interval is set to 50 minutes, it would tick 29 times a day, but interval for last one is just 48 minutes. (required) */
    bool send_initial_packet; /**< If true, a packet containing the current timeblock will be sent durinng initialization (default: False) */
};

#define SOL_FLOW_NODE_TYPE_WALLCLOCK_TIMEBLOCK_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_WALLCLOCK_TIMEBLOCK_OPTIONS_API_VERSION) \
    }, \
    .send_initial_packet = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_TIMEBLOCK__IN__ENABLED (0)
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_TIMEBLOCK__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_TIMEBLOCK__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_TIMEBLOCK__OUT_LAST (0)

#define SOL_FLOW_NODE_TYPE_WALLCLOCK_YEAR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_WALLCLOCK_YEAR;

struct sol_flow_node_type_wallclock_year_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_YEAR_OPTIONS_API_VERSION (1)
    bool send_initial_packet; /**< If true, a packet containing the current year will be sent during initialization (default: False) */
};

#define SOL_FLOW_NODE_TYPE_WALLCLOCK_YEAR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_WALLCLOCK_YEAR_OPTIONS_API_VERSION) \
    }, \
    .send_initial_packet = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_YEAR__IN__ENABLED (0)
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_YEAR__IN_LAST (0)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_YEAR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_WALLCLOCK_YEAR__OUT_LAST (0)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-wallclock");

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
