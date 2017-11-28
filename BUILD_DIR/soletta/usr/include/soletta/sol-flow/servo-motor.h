#pragma once
/* this file was auto-generated from ./src/modules/flow/servo-motor/servo-motor.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_SERVO_MOTOR_CONTROLLER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_SERVO_MOTOR_CONTROLLER;

struct sol_flow_node_type_servo_motor_controller_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_SERVO_MOTOR_CONTROLLER_OPTIONS_API_VERSION (1)
    struct sol_irange_spec duty_cycle_range; /**< Pulse width range, in microseconds, corresponding to the minimum (0-degree) angle on the servo until the maximum (180-degree) angle. (default: {'min': 544, 'max': 2400}) */
    int32_t period; /**< Period, in microseconds. A pulse repetition rate of 50 Hz should work with most servos. (default: 22000) */
    const char * pin; /**< Label of the desired pin on the board. If raw is set to true, this should be "<device> <channel>" pair, e.g. "0 3". (required) */
    bool raw; /**< Change 'pin' meaning to be the system parameters needed to address the desired pin. Use it if you know what you are doing. (default: False) */
};

#define SOL_FLOW_NODE_TYPE_SERVO_MOTOR_CONTROLLER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_SERVO_MOTOR_CONTROLLER_OPTIONS_API_VERSION) \
    }, \
    .duty_cycle_range = {.max=2400, .min=544, .step=1}, \
    .period = 22000, \
    .raw = false, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_SERVO_MOTOR_CONTROLLER__IN__ANGLE (0)
#define SOL_FLOW_NODE_TYPE_SERVO_MOTOR_CONTROLLER__IN__DUTY_CYCLE (1)
#define SOL_FLOW_NODE_TYPE_SERVO_MOTOR_CONTROLLER__IN_LAST (1)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-servo_motor");

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
