#pragma once
/* this file was auto-generated from ./src/modules/flow/piezo-speaker/piezo-speaker.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_PIEZO_SPEAKER_SOUND_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_PIEZO_SPEAKER_SOUND;

struct sol_flow_node_type_piezo_speaker_sound_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_PIEZO_SPEAKER_SOUND_OPTIONS_API_VERSION (1)
    const char * tune; /**< Pre-set tune to buzz with (default: '') */
    const char * pin; /**< Label of the desired pin on the board. If raw is set to true, this should be "<device> <channel>" pair, e.g. "0 3". (required) */
    bool raw; /**< Change 'pin' meaning to be the system parameters needed to address the desired pin. Use it if you know what you are doing. (default: False) */
    bool loop; /**< Whether to loop indefinetely on the input tune (default: True) */
};

#define SOL_FLOW_NODE_TYPE_PIEZO_SPEAKER_SOUND_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_PIEZO_SPEAKER_SOUND_OPTIONS_API_VERSION) \
    }, \
    .tune = "", \
    .raw = false, \
    .loop = true, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_PIEZO_SPEAKER_SOUND__IN__TUNE (0)
#define SOL_FLOW_NODE_TYPE_PIEZO_SPEAKER_SOUND__IN__ENABLED (1)
#define SOL_FLOW_NODE_TYPE_PIEZO_SPEAKER_SOUND__IN_LAST (1)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-piezo_speaker");

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
