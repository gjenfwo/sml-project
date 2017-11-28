#pragma once
/* this file was auto-generated from ./src/modules/flow/iio/iio.json */
#include <stdbool.h>
#include <stdint.h>
#include <sol-flow.h>
#include <float.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SOL_FLOW_NODE_TYPE_IIO_GYROSCOPE_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_IIO_GYROSCOPE;

struct sol_flow_node_type_iio_gyroscope_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_IIO_GYROSCOPE_OPTIONS_API_VERSION (1)
    const char * iio_device; /**< IIO device identifier. It's a space separated list of commands. For commands, if it's an integer value, will be interpreted as IIO device id. If it's a string starting with '/', will be interpreted as absolute path of IIO device on sysfs. If it's on the form 'i2c/X-YYYY', will evaluate to an i2c device on sysfs, where X is the bus number and YYYY is the device number, eg, 7-0069, for device 0x69 on bus 7. If it's on the form 'create,i2c,<rel_path>,<devnumber>,<devname>', where rel_path is the path of bus relative to '/sys/devices', them it will attempt to create an IIO device on that i2c bus and use it. (required) */
    int32_t buffer_size; /**< IIO buffer size. If -1, buffering is disabled. If 0, will use default buffer size. If enabled (> 0), a trigger is necessary to perform readings. Set it using 'iio_trigger_name'; if no trigger name is set, it will attempt to create a default one, which is activated via TICK port. (default: 0) */
    const char * iio_trigger_name; /**< IIO trigger name. Name of IIO trigger that should be associated to this device for buffered readings. Set to hrtimer:<trigger name> if want to use hrtimer trigger. If not set and buffer enabled, will try to use device current trigger, if any. If none, will attempt to create a sysfs or hrtimer trigger (required) */
    bool use_device_default_scale; /**< If should use device own default scale. If false, it will attempt to use scale option. (default: True) */
    struct sol_direction_vector scale; /**< Scale to applied to device raw readings (default: {}) */
    bool use_device_default_offset; /**< If should use device own default offset. If false, it will attempt to use offset_x, offset_y and offset_z options. (default: True) */
    struct sol_direction_vector offset; /**< Offset to be added to device raw readings (default: {}) */
    int32_t sampling_frequency; /**< Sampling frequency of the sensor. If -1, use device default (default: -1) */
    struct sol_drange_spec out_range; /**< Range of output packet. Usually, is the output range of used sensor. It'll be the 'min' and 'max' fields of direction-vector packets sent on OUT port. (default: {'max': 'DBL_MAX', 'min': '-DBL_MAX'}) */
};

#define SOL_FLOW_NODE_TYPE_IIO_GYROSCOPE_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_IIO_GYROSCOPE_OPTIONS_API_VERSION) \
    }, \
    .buffer_size = 0, \
    .iio_trigger_name = NULL, \
    .use_device_default_scale = true, \
    .scale = {.max=DBL_MAX, .min=-DBL_MAX, .x=0, .y=0, .z=0}, \
    .use_device_default_offset = true, \
    .offset = {.max=DBL_MAX, .min=-DBL_MAX, .x=0, .y=0, .z=0}, \
    .sampling_frequency = -1, \
    .out_range = {.max=DBL_MAX, .min=-DBL_MAX, .step=DBL_MIN}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_IIO_GYROSCOPE__IN__TICK (0)
#define SOL_FLOW_NODE_TYPE_IIO_GYROSCOPE__IN__TRIGGER (1)
#define SOL_FLOW_NODE_TYPE_IIO_GYROSCOPE__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_IIO_GYROSCOPE__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_IIO_GYROSCOPE__OUT__SCALE (1)
#define SOL_FLOW_NODE_TYPE_IIO_GYROSCOPE__OUT__OFFSET (2)
#define SOL_FLOW_NODE_TYPE_IIO_GYROSCOPE__OUT__SAMPLING_FREQUENCY (3)
#define SOL_FLOW_NODE_TYPE_IIO_GYROSCOPE__OUT_LAST (3)

#define SOL_FLOW_NODE_TYPE_IIO_MAGNETOMETER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_IIO_MAGNETOMETER;

struct sol_flow_node_type_iio_magnetometer_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_IIO_MAGNETOMETER_OPTIONS_API_VERSION (1)
    const char * iio_device; /**< IIO device identifier. It's a space separated list of commands. For commands, if it's an integer value, will be interpreted as IIO device id. If it's a string starting with '/', will be interpreted as absolute path of IIO device on sysfs. If it's on the form 'i2c/X-YYYY', will evaluate to an i2c device on sysfs, where X is the bus number and YYYY is the device number, eg, 7-0069, for device 0x69 on bus 7. If it's on the form 'create,i2c,<rel_path>,<devnumber>,<devname>', where rel_path is the path of bus relative to '/sys/devices', them it will attempt to create an IIO device on that i2c bus and use it. (required) */
    int32_t buffer_size; /**< IIO buffer size. If -1, buffering is disabled. If 0, will use default buffer size. If enabled (> 0), a trigger is necessary to perform readings. Set it using 'iio_trigger_name'; if no trigger name is set, it will attempt to create a default one, which is activated via TICK port. (default: 0) */
    const char * iio_trigger_name; /**< IIO trigger name. Name of IIO trigger that should be associated to this device for buffered readings. Set to hrtimer:<trigger name> if want to use hrtimer trigger. If not set and buffer enabled, will try to use device current trigger, if any. If none, will attempt to create a sysfs or hrtimer trigger (required) */
    bool use_device_default_scale; /**< If should use device own default scale. If false, it will attempt to use scale option. (default: True) */
    struct sol_direction_vector scale; /**< Scale to applied to device raw readings (default: {}) */
    bool use_device_default_offset; /**< If should use device own default offset. If false, it will attempt to use offset_x, offset_y and offset_z options. (default: True) */
    struct sol_direction_vector offset; /**< Offset to be added to device raw readings (default: {}) */
    struct sol_direction_vector oversampling_ratio; /**< Oversampling ratio measurement of the sensor (default: {}) */
    int32_t sampling_frequency; /**< Sampling frequency of the sensor. If -1, use device default (default: -1) */
    struct sol_drange_spec out_range; /**< Range of output packet. Usually, is the output range of used sensor. It'll be the 'min' and 'max' fields of drange packets sent on OUT port. (default: {'step': 'DBL_MIN', 'max': 'DBL_MAX', 'min': '-DBL_MAX'}) */
};

#define SOL_FLOW_NODE_TYPE_IIO_MAGNETOMETER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_IIO_MAGNETOMETER_OPTIONS_API_VERSION) \
    }, \
    .buffer_size = 0, \
    .iio_trigger_name = NULL, \
    .use_device_default_scale = true, \
    .scale = {.max=DBL_MAX, .min=-DBL_MAX, .x=0, .y=0, .z=0}, \
    .use_device_default_offset = true, \
    .offset = {.max=DBL_MAX, .min=-DBL_MAX, .x=0, .y=0, .z=0}, \
    .oversampling_ratio = {.max=DBL_MAX, .min=-DBL_MAX, .x=0, .y=0, .z=0}, \
    .sampling_frequency = -1, \
    .out_range = {.max=DBL_MAX, .min=-DBL_MAX, .step=DBL_MIN}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_IIO_MAGNETOMETER__IN__TICK (0)
#define SOL_FLOW_NODE_TYPE_IIO_MAGNETOMETER__IN__TRIGGER (1)
#define SOL_FLOW_NODE_TYPE_IIO_MAGNETOMETER__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_IIO_MAGNETOMETER__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_IIO_MAGNETOMETER__OUT__SCALE (1)
#define SOL_FLOW_NODE_TYPE_IIO_MAGNETOMETER__OUT__OFFSET (2)
#define SOL_FLOW_NODE_TYPE_IIO_MAGNETOMETER__OUT__SAMPLING_FREQUENCY (3)
#define SOL_FLOW_NODE_TYPE_IIO_MAGNETOMETER__OUT_LAST (3)

#define SOL_FLOW_NODE_TYPE_IIO_THERMOMETER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_IIO_THERMOMETER;

struct sol_flow_node_type_iio_thermometer_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_IIO_THERMOMETER_OPTIONS_API_VERSION (1)
    const char * iio_device; /**< IIO device identifier. It's a space separated list of commands. For commands, if it's an integer value, will be interpreted as IIO device id. If it's a string starting with '/', will be interpreted as absolute path of IIO device on sysfs. If it's on the form 'i2c/X-YYYY', will evaluate to an i2c device on sysfs, where X is the bus number and YYYY is the device number, eg, 7-0069, for device 0x69 on bus 7. If it's on the form 'create,i2c,<rel_path>,<devnumber>,<devname>', where rel_path is the path of bus relative to '/sys/devices', them it will attempt to create an IIO device on that i2c bus and use it. (required) */
    int32_t buffer_size; /**< IIO buffer size. If -1, buffering is disabled. If 0, will use default buffer size. If enabled (> 0), a trigger is necessary to perform readings. Set it using 'iio_trigger_name'; if no trigger name is set, it will attempt to create a default one, which is activated via TICK port. (default: 0) */
    const char * iio_trigger_name; /**< IIO trigger name. Name of IIO trigger that should be associated to this device for buffered readings. Set to hrtimer:<trigger name> if want to use hrtimer trigger. If not set and buffer enabled, will try to use device current trigger, if any. If none, will attempt to create a sysfs or hrtimer trigger (required) */
    bool use_device_default_scale; /**< If should use device own default scale. If false, it will attempt to use scale option. (default: True) */
    double scale; /**< Scale to applied to device raw readings (default: 0) */
    bool use_device_default_offset; /**< If should use device own default offset. If false, it will attempt to use offset option. (default: True) */
    double offset; /**< Offset to be added to device raw readings (default: 0) */
    int32_t oversampling_ratio; /**< Oversampling ratio measurement of the sensor (default: 0) */
    int32_t sampling_frequency; /**< Sampling frequency of the sensor. If -1, use device default (default: -1) */
    struct sol_drange_spec out_range; /**< Range of output packet. Usually, is the output range of used sensor. It'll be the 'min' and 'max' fields of drange packets sent on OUT port. (default: {'step': 'DBL_MIN', 'max': 'DBL_MAX', 'min': '-DBL_MAX'}) */
};

#define SOL_FLOW_NODE_TYPE_IIO_THERMOMETER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_IIO_THERMOMETER_OPTIONS_API_VERSION) \
    }, \
    .buffer_size = 0, \
    .iio_trigger_name = NULL, \
    .use_device_default_scale = true, \
    .scale = 0, \
    .use_device_default_offset = true, \
    .offset = 0, \
    .oversampling_ratio = 0, \
    .sampling_frequency = -1, \
    .out_range = {.max=DBL_MAX, .min=-DBL_MAX, .step=DBL_MIN}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_IIO_THERMOMETER__IN__TICK (0)
#define SOL_FLOW_NODE_TYPE_IIO_THERMOMETER__IN__TRIGGER (1)
#define SOL_FLOW_NODE_TYPE_IIO_THERMOMETER__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_IIO_THERMOMETER__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_IIO_THERMOMETER__OUT__SCALE (1)
#define SOL_FLOW_NODE_TYPE_IIO_THERMOMETER__OUT__OFFSET (2)
#define SOL_FLOW_NODE_TYPE_IIO_THERMOMETER__OUT__SAMPLING_FREQUENCY (3)
#define SOL_FLOW_NODE_TYPE_IIO_THERMOMETER__OUT_LAST (3)

#define SOL_FLOW_NODE_TYPE_IIO_PRESSURE_SENSOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_IIO_PRESSURE_SENSOR;

struct sol_flow_node_type_iio_pressure_sensor_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_IIO_PRESSURE_SENSOR_OPTIONS_API_VERSION (1)
    const char * iio_device; /**< IIO device identifier. It's a space separated list of commands. For commands, if it's an integer value, will be interpreted as IIO device id. If it's a string starting with '/', will be interpreted as absolute path of IIO device on sysfs. If it's on the form 'i2c/X-YYYY', will evaluate to an i2c device on sysfs, where X is the bus number and YYYY is the device number, eg, 7-0069, for device 0x69 on bus 7. If it's on the form 'create,i2c,<rel_path>,<devnumber>,<devname>', where rel_path is the path of bus relative to '/sys/devices', them it will attempt to create an IIO device on that i2c bus and use it. (required) */
    int32_t buffer_size; /**< IIO buffer size. If -1, buffering is disabled. If 0, will use default buffer size. If enabled (> 0), a trigger is necessary to perform readings. Set it using 'iio_trigger_name'; if no trigger name is set, it will attempt to create a default one, which is activated via TICK port. (default: 0) */
    const char * iio_trigger_name; /**< IIO trigger name. Name of IIO trigger that should be associated to this device for buffered readings. Set to hrtimer:<trigger name> if want to use hrtimer trigger. If not set and buffer enabled, will try to use device current trigger, if any. If none, will attempt to create a sysfs or hrtimer trigger (required) */
    bool use_device_default_scale; /**< If should use device own default scale. If false, it will attempt to use scale option. (default: True) */
    double scale; /**< Scale to applied to device raw readings (default: 0) */
    bool use_device_default_offset; /**< If should use device own default offset. If false, it will attempt to use offset_x, offset_y and offset_z options. (default: True) */
    double offset; /**< Offset to be added to device raw readings (default: 0) */
    int32_t oversampling_ratio; /**< Oversampling ratio measurement of the sensor (default: 0) */
    int32_t sampling_frequency; /**< Sampling frequency of the sensor. If -1, use device default (default: -1) */
    struct sol_drange_spec out_range; /**< Range of output packet. Usually, is the output range of used sensor. It'll be the 'min' and 'max' fields of drange packets sent on OUT port. (default: {'step': 'DBL_MIN', 'max': 'DBL_MAX', 'min': '-DBL_MAX'}) */
};

#define SOL_FLOW_NODE_TYPE_IIO_PRESSURE_SENSOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_IIO_PRESSURE_SENSOR_OPTIONS_API_VERSION) \
    }, \
    .buffer_size = 0, \
    .iio_trigger_name = NULL, \
    .use_device_default_scale = true, \
    .scale = 0, \
    .use_device_default_offset = true, \
    .offset = 0, \
    .oversampling_ratio = 0, \
    .sampling_frequency = -1, \
    .out_range = {.max=DBL_MAX, .min=-DBL_MAX, .step=DBL_MIN}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_IIO_PRESSURE_SENSOR__IN__TICK (0)
#define SOL_FLOW_NODE_TYPE_IIO_PRESSURE_SENSOR__IN__TRIGGER (1)
#define SOL_FLOW_NODE_TYPE_IIO_PRESSURE_SENSOR__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_IIO_PRESSURE_SENSOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_IIO_PRESSURE_SENSOR__OUT__SCALE (1)
#define SOL_FLOW_NODE_TYPE_IIO_PRESSURE_SENSOR__OUT__OFFSET (2)
#define SOL_FLOW_NODE_TYPE_IIO_PRESSURE_SENSOR__OUT__SAMPLING_FREQUENCY (3)
#define SOL_FLOW_NODE_TYPE_IIO_PRESSURE_SENSOR__OUT_LAST (3)

#define SOL_FLOW_NODE_TYPE_IIO_COLOR_SENSOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_IIO_COLOR_SENSOR;

struct sol_flow_node_type_iio_color_sensor_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_IIO_COLOR_SENSOR_OPTIONS_API_VERSION (1)
    const char * iio_device; /**< IIO device identifier. It's a space separated list of commands. For commands, if it's an integer value, will be interpreted as IIO device id. If it's a string starting with '/', will be interpreted as absolute path of IIO device on sysfs. If it's on the form 'i2c/X-YYYY', will evaluate to an i2c device on sysfs, where X is the bus number and YYYY is the device number, eg, 7-0069, for device 0x69 on bus 7. If it's on the form 'create,i2c,<rel_path>,<devnumber>,<devname>', where rel_path is the path of bus relative to '/sys/devices', them it will attempt to create an IIO device on that i2c bus and use it. (required) */
    int32_t buffer_size; /**< IIO buffer size. If -1, buffering is disabled. If 0, will use default buffer size. If enabled (> 0), a trigger is necessary to perform readings. Set it using 'iio_trigger_name'; if no trigger name is set, it will attempt to create a default one, which is activated via TICK port. (default: 0) */
    const char * iio_trigger_name; /**< IIO trigger name. Name of IIO trigger that should be associated to this device for buffered readings. Set to hrtimer:<trigger name> if want to use hrtimer trigger. If not set and buffer enabled, will try to use device current trigger, if any. If none, will attempt to create a sysfs or hrtimer trigger (required) */
    bool use_device_default_scale; /**< If should use device own default scale. If false, it will attempt to use scale option. (default: True) */
    double scale_red; /**< Scale to applied to device Red raw readings (default: 0) */
    double scale_green; /**< Scale to applied to device Green raw readings (default: 0) */
    double scale_blue; /**< Scale to applied to device Blue raw readings (default: 0) */
    bool use_device_default_offset; /**< If should use device own default offset. If false, it will attempt to use offset_x, offset_y and offset_z options. (default: True) */
    double offset_red; /**< Offset to be added to device Red raw readings (default: 0) */
    double offset_green; /**< Offset to be added to device Green raw readings (default: 0) */
    double offset_blue; /**< Offset to be added to device Blue raw readings (default: 0) */
    int32_t sampling_frequency; /**< Sampling frequency of the sensor. If -1, use device default (default: -1) */
    struct sol_drange_spec out_range; /**< Range of output packet. Usually, is the output range of used sensor. It'll be the 'min' and 'max' fields of direction-vector packets sent on OUT port. (default: {'max': 'DBL_MAX'}) */
};

#define SOL_FLOW_NODE_TYPE_IIO_COLOR_SENSOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_IIO_COLOR_SENSOR_OPTIONS_API_VERSION) \
    }, \
    .buffer_size = 0, \
    .iio_trigger_name = NULL, \
    .use_device_default_scale = true, \
    .scale_red = 0, \
    .scale_green = 0, \
    .scale_blue = 0, \
    .use_device_default_offset = true, \
    .offset_red = 0, \
    .offset_green = 0, \
    .offset_blue = 0, \
    .sampling_frequency = -1, \
    .out_range = {.max=DBL_MAX, .min=-DBL_MAX, .step=DBL_MIN}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_IIO_COLOR_SENSOR__IN__TICK (0)
#define SOL_FLOW_NODE_TYPE_IIO_COLOR_SENSOR__IN__TRIGGER (1)
#define SOL_FLOW_NODE_TYPE_IIO_COLOR_SENSOR__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_IIO_COLOR_SENSOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_IIO_COLOR_SENSOR__OUT__SCALE_RED (1)
#define SOL_FLOW_NODE_TYPE_IIO_COLOR_SENSOR__OUT__SCALE_GREEN (2)
#define SOL_FLOW_NODE_TYPE_IIO_COLOR_SENSOR__OUT__SCALE_BLUE (3)
#define SOL_FLOW_NODE_TYPE_IIO_COLOR_SENSOR__OUT__OFFSET_RED (4)
#define SOL_FLOW_NODE_TYPE_IIO_COLOR_SENSOR__OUT__OFFSET_GREEN (5)
#define SOL_FLOW_NODE_TYPE_IIO_COLOR_SENSOR__OUT__OFFSET_BLUE (6)
#define SOL_FLOW_NODE_TYPE_IIO_COLOR_SENSOR__OUT__SAMPLING_FREQUENCY (7)
#define SOL_FLOW_NODE_TYPE_IIO_COLOR_SENSOR__OUT_LAST (7)

#define SOL_FLOW_NODE_TYPE_IIO_ACCELEROMETER_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_IIO_ACCELEROMETER;

struct sol_flow_node_type_iio_accelerometer_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_IIO_ACCELEROMETER_OPTIONS_API_VERSION (1)
    const char * iio_device; /**< IIO device identifier. It's a space separated list of commands. For commands, if it's an integer value, will be interpreted as IIO device id. If it's a string starting with '/', will be interpreted as absolute path of IIO device on sysfs. If it's on the form 'i2c/X-YYYY', will evaluate to an i2c device on sysfs, where X is the bus number and YYYY is the device number, eg, 7-0069, for device 0x69 on bus 7. If it's on the form 'create,i2c,<rel_path>,<devnumber>,<devname>', where rel_path is the path of bus relative to '/sys/devices', them it will attempt to create an IIO device on that i2c bus and use it. (required) */
    int32_t buffer_size; /**< IIO buffer size. If -1, buffering is disabled. If 0, will use default buffer size. If enabled (> 0), a trigger is necessary to perform readings. Set it using 'iio_trigger_name'; if no trigger name is set, it will attempt to create a default one, which is activated via TICK port. (default: 0) */
    const char * iio_trigger_name; /**< IIO trigger name. Name of IIO trigger that should be associated to this device for buffered readings. Set to hrtimer:<trigger name> if want to use hrtimer trigger. If not set and buffer enabled, will try to use device current trigger, if any. If none, will attempt to create a sysfs or hrtimer trigger (required) */
    bool use_device_default_scale; /**< If should use device own default scale. If false, it will attempt to use scale option. (default: True) */
    struct sol_direction_vector scale; /**< Scale to applied to device raw readings (default: {}) */
    bool use_device_default_offset; /**< If should use device own default offset. If false, it will attempt to use offset_x, offset_y and offset_z options. (default: True) */
    struct sol_direction_vector offset; /**< Offset to be added to device raw readings (default: {}) */
    int32_t sampling_frequency; /**< Sampling frequency of the sensor. If -1, use device default (default: -1) */
    struct sol_drange_spec out_range; /**< Range of output packet. Usually, is the output range of used sensor. It'll be the 'min' and 'max' fields of direction-vector packets sent on OUT port. (default: {'max': 'DBL_MAX', 'min': '-DBL_MAX'}) */
};

#define SOL_FLOW_NODE_TYPE_IIO_ACCELEROMETER_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_IIO_ACCELEROMETER_OPTIONS_API_VERSION) \
    }, \
    .buffer_size = 0, \
    .iio_trigger_name = NULL, \
    .use_device_default_scale = true, \
    .scale = {.max=DBL_MAX, .min=-DBL_MAX, .x=0, .y=0, .z=0}, \
    .use_device_default_offset = true, \
    .offset = {.max=DBL_MAX, .min=-DBL_MAX, .x=0, .y=0, .z=0}, \
    .sampling_frequency = -1, \
    .out_range = {.max=DBL_MAX, .min=-DBL_MAX, .step=DBL_MIN}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_IIO_ACCELEROMETER__IN__TICK (0)
#define SOL_FLOW_NODE_TYPE_IIO_ACCELEROMETER__IN__TRIGGER (1)
#define SOL_FLOW_NODE_TYPE_IIO_ACCELEROMETER__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_IIO_ACCELEROMETER__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_IIO_ACCELEROMETER__OUT__SCALE (1)
#define SOL_FLOW_NODE_TYPE_IIO_ACCELEROMETER__OUT__OFFSET (2)
#define SOL_FLOW_NODE_TYPE_IIO_ACCELEROMETER__OUT__SAMPLING_FREQUENCY (3)
#define SOL_FLOW_NODE_TYPE_IIO_ACCELEROMETER__OUT_LAST (3)

#define SOL_FLOW_NODE_TYPE_IIO_HUMIDITY_SENSOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_IIO_HUMIDITY_SENSOR;

struct sol_flow_node_type_iio_humidity_sensor_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_IIO_HUMIDITY_SENSOR_OPTIONS_API_VERSION (1)
    const char * iio_device; /**< IIO device identifier. It's a space separated list of commands. For commands, if it's an integer value, will be interpreted as IIO device id. If it's a string starting with '/', will be interpreted as absolute path of IIO device on sysfs. If it's on the form 'i2c/X-YYYY', will evaluate to an i2c device on sysfs, where X is the bus number and YYYY is the device number, eg, 7-0069, for device 0x69 on bus 7. If it's on the form 'create,i2c,<rel_path>,<devnumber>,<devname>', where rel_path is the path of bus relative to '/sys/devices', them it will attempt to create an IIO device on that i2c bus and use it. (required) */
    int32_t buffer_size; /**< IIO buffer size. If -1, buffering is disabled. If 0, will use default buffer size. If enabled (> 0), a trigger is necessary to perform readings. Set it using 'iio_trigger_name'; if no trigger name is set, it will attempt to create a default one, which is activated via TICK port. (default: 0) */
    const char * iio_trigger_name; /**< IIO trigger name. Name of IIO trigger that should be associated to this device for buffered readings. Set to hrtimer:<trigger name> if want to use hrtimer trigger. If not set and buffer enabled, will try to use device current trigger, if any. If none, will attempt to create a sysfs or hrtimer trigger (required) */
    bool use_device_default_scale; /**< If should use device own default scale. If false, it will attempt to use scale option. (default: True) */
    double scale; /**< Scale to applied to device raw readings (default: 0) */
    bool use_device_default_offset; /**< If should use device own default offset. If false, it will attempt to use offset_x, offset_y and offset_z options. (default: True) */
    double offset; /**< Offset to be added to device raw readings (default: 0) */
    int32_t sampling_frequency; /**< Sampling frequency of the sensor. If -1, use device default (default: -1) */
    struct sol_drange_spec out_range; /**< Range of output packet. Usually, is the output range of used sensor. It'll be the 'min' and 'max' fields of drange packets sent on OUT port. (default: {'step': 'DBL_MIN', 'max': 'DBL_MAX', 'min': '-DBL_MAX'}) */
};

#define SOL_FLOW_NODE_TYPE_IIO_HUMIDITY_SENSOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_IIO_HUMIDITY_SENSOR_OPTIONS_API_VERSION) \
    }, \
    .buffer_size = 0, \
    .iio_trigger_name = NULL, \
    .use_device_default_scale = true, \
    .scale = 0, \
    .use_device_default_offset = true, \
    .offset = 0, \
    .sampling_frequency = -1, \
    .out_range = {.max=DBL_MAX, .min=-DBL_MAX, .step=DBL_MIN}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_IIO_HUMIDITY_SENSOR__IN__TICK (0)
#define SOL_FLOW_NODE_TYPE_IIO_HUMIDITY_SENSOR__IN__TRIGGER (1)
#define SOL_FLOW_NODE_TYPE_IIO_HUMIDITY_SENSOR__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_IIO_HUMIDITY_SENSOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_IIO_HUMIDITY_SENSOR__OUT__SCALE (1)
#define SOL_FLOW_NODE_TYPE_IIO_HUMIDITY_SENSOR__OUT__OFFSET (2)
#define SOL_FLOW_NODE_TYPE_IIO_HUMIDITY_SENSOR__OUT__SAMPLING_FREQUENCY (3)
#define SOL_FLOW_NODE_TYPE_IIO_HUMIDITY_SENSOR__OUT_LAST (3)

#define SOL_FLOW_NODE_TYPE_IIO_ADC_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_IIO_ADC;

struct sol_flow_node_type_iio_adc_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_IIO_ADC_OPTIONS_API_VERSION (1)
    const char * iio_device; /**< IIO device identifier. It's a space separated list of commands. For commands, if it's an integer value, will be interpreted as IIO device id. If it's a string starting with '/', will be interpreted as absolute path of IIO device on sysfs. If it's on the form 'i2c/X-YYYY', will evaluate to an i2c device on sysfs, where X is the bus number and YYYY is the device number, eg, 7-0069, for device 0x69 on bus 7. If it's on the form 'create,i2c,<rel_path>,<devnumber>,<devname>', where rel_path is the path of bus relative to '/sys/devices', them it will attempt to create an IIO device on that i2c bus and use it. (required) */
    int32_t buffer_size; /**< IIO buffer size. If -1, buffering is disabled. If 0, will use default buffer size. If enabled (> 0), a trigger is necessary to perform readings. Set it using 'iio_trigger_name'; if no trigger name is set, it will attempt to create a default one, which is activated via TICK port. (default: 0) */
    const char * iio_trigger_name; /**< IIO trigger name. Name of IIO trigger that should be associated to this device for buffered readings. Set to hrtimer:<trigger name> if want to use hrtimer trigger. If not set and buffer enabled, will try to use device current trigger, if any. If none, will attempt to create a sysfs or hrtimer trigger (required) */
    bool use_device_default_scale; /**< If should use device own default scale. If false, it will attempt to use scale option. (default: True) */
    double scale; /**< Scale to applied to device raw readings (default: 0) */
    bool use_device_default_offset; /**< If should use device own default offset. If false, it will attempt to use offset_x, offset_y and offset_z options. (default: True) */
    double offset; /**< Offset to be added to device raw readings (default: 0) */
    int32_t sampling_frequency; /**< Sampling frequency of the sensor. If -1, use device default (default: -1) */
    int32_t channel_id; /**< Channel id. If -1, use the default channel (default: -1) */
    struct sol_drange_spec out_range; /**< Range of output packet. Usually, is the output range of used sensor. It'll be the 'min' and 'max' fields of drange packets sent on OUT port. (default: {'step': 'DBL_MIN', 'max': 'DBL_MAX', 'min': '-DBL_MAX'}) */
};

#define SOL_FLOW_NODE_TYPE_IIO_ADC_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_IIO_ADC_OPTIONS_API_VERSION) \
    }, \
    .buffer_size = 0, \
    .iio_trigger_name = NULL, \
    .use_device_default_scale = true, \
    .scale = 0, \
    .use_device_default_offset = true, \
    .offset = 0, \
    .sampling_frequency = -1, \
    .channel_id = -1, \
    .out_range = {.max=DBL_MAX, .min=-DBL_MAX, .step=DBL_MIN}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_IIO_ADC__IN__TICK (0)
#define SOL_FLOW_NODE_TYPE_IIO_ADC__IN__TRIGGER (1)
#define SOL_FLOW_NODE_TYPE_IIO_ADC__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_IIO_ADC__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_IIO_ADC__OUT__SCALE (1)
#define SOL_FLOW_NODE_TYPE_IIO_ADC__OUT__OFFSET (2)
#define SOL_FLOW_NODE_TYPE_IIO_ADC__OUT__SAMPLING_FREQUENCY (3)
#define SOL_FLOW_NODE_TYPE_IIO_ADC__OUT_LAST (3)

#define SOL_FLOW_NODE_TYPE_IIO_LIGHT_SENSOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_IIO_LIGHT_SENSOR;

struct sol_flow_node_type_iio_light_sensor_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_IIO_LIGHT_SENSOR_OPTIONS_API_VERSION (1)
    const char * iio_device; /**< IIO device identifier. It's a space separated list of commands. For commands, if it's an integer value, will be interpreted as IIO device id. If it's a string starting with '/', will be interpreted as absolute path of IIO device on sysfs. If it's on the form 'i2c/X-YYYY', will evaluate to an i2c device on sysfs, where X is the bus number and YYYY is the device number, eg, 7-0069, for device 0x69 on bus 7. If it's on the form 'create,i2c,<rel_path>,<devnumber>,<devname>', where rel_path is the path of bus relative to '/sys/devices', them it will attempt to create an IIO device on that i2c bus and use it. (required) */
    int32_t buffer_size; /**< IIO buffer size. If -1, buffering is disabled. If 0, will use default buffer size. If enabled (> 0), a trigger is necessary to perform readings. Set it using 'iio_trigger_name'; if no trigger name is set, it will attempt to create a default one, which is activated via TICK port. (default: 0) */
    const char * iio_trigger_name; /**< IIO trigger name. Name of IIO trigger that should be associated to this device for buffered readings. Set to hrtimer:<trigger name> if want to use hrtimer trigger. If not set and buffer enabled, will try to use device current trigger, if any. If none, will attempt to create a sysfs or hrtimer trigger (required) */
    bool use_device_default_scale; /**< If should use device own default scale. If false, it will attempt to use scale option. (default: True) */
    double scale; /**< Scale to applied to device raw readings (default: 0) */
    bool use_device_default_offset; /**< If should use device own default offset. If false, it will attempt to use offset_x, offset_y and offset_z options. (default: True) */
    double offset; /**< Offset to be added to device raw readings (default: 0) */
    int32_t sampling_frequency; /**< Sampling frequency of the sensor. If -1, use device default (default: -1) */
    int32_t channel_id; /**< Channel id. If -1, use the default channel (default: -1) */
    struct sol_drange_spec out_range; /**< Range of output packet. Usually, is the output range of used sensor. It'll be the 'min' and 'max' fields of drange packets sent on OUT port. (default: {'step': 'DBL_MIN', 'max': 'DBL_MAX', 'min': '-DBL_MAX'}) */
};

#define SOL_FLOW_NODE_TYPE_IIO_LIGHT_SENSOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_IIO_LIGHT_SENSOR_OPTIONS_API_VERSION) \
    }, \
    .buffer_size = 0, \
    .iio_trigger_name = NULL, \
    .use_device_default_scale = true, \
    .scale = 0, \
    .use_device_default_offset = true, \
    .offset = 0, \
    .sampling_frequency = -1, \
    .channel_id = -1, \
    .out_range = {.max=DBL_MAX, .min=-DBL_MAX, .step=DBL_MIN}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_IIO_LIGHT_SENSOR__IN__TICK (0)
#define SOL_FLOW_NODE_TYPE_IIO_LIGHT_SENSOR__IN__TRIGGER (1)
#define SOL_FLOW_NODE_TYPE_IIO_LIGHT_SENSOR__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_IIO_LIGHT_SENSOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_IIO_LIGHT_SENSOR__OUT__SCALE (1)
#define SOL_FLOW_NODE_TYPE_IIO_LIGHT_SENSOR__OUT__OFFSET (2)
#define SOL_FLOW_NODE_TYPE_IIO_LIGHT_SENSOR__OUT__SAMPLING_FREQUENCY (3)
#define SOL_FLOW_NODE_TYPE_IIO_LIGHT_SENSOR__OUT_LAST (3)

#define SOL_FLOW_NODE_TYPE_IIO_INTENSITY_BOTH_SENSOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_IIO_INTENSITY_BOTH_SENSOR;

struct sol_flow_node_type_iio_intensity_both_sensor_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_IIO_INTENSITY_BOTH_SENSOR_OPTIONS_API_VERSION (1)
    const char * iio_device; /**< IIO device identifier. It's a space separated list of commands. For commands, if it's an integer value, will be interpreted as IIO device id. If it's a string starting with '/', will be interpreted as absolute path of IIO device on sysfs. If it's on the form 'i2c/X-YYYY', will evaluate to an i2c device on sysfs, where X is the bus number and YYYY is the device number, eg, 7-0069, for device 0x69 on bus 7. If it's on the form 'create,i2c,<rel_path>,<devnumber>,<devname>', where rel_path is the path of bus relative to '/sys/devices', them it will attempt to create an IIO device on that i2c bus and use it. (required) */
    int32_t buffer_size; /**< IIO buffer size. If -1, buffering is disabled. If 0, will use default buffer size. If enabled (> 0), a trigger is necessary to perform readings. Set it using 'iio_trigger_name'; if no trigger name is set, it will attempt to create a default one, which is activated via TICK port. (default: 0) */
    const char * iio_trigger_name; /**< IIO trigger name. Name of IIO trigger that should be associated to this device for buffered readings. If not set and buffer enabled, will try to use device current trigger, if any. If none, will attempt to create a sysfs trigger (required) */
    bool use_device_default_scale; /**< If should use device own default scale. If false, it will attempt to use scale option. (default: True) */
    double scale; /**< Scale to applied to device raw readings (default: 0) */
    bool use_device_default_offset; /**< If should use device own default offset. If false, it will attempt to use offset_x, offset_y and offset_z options. (default: True) */
    double offset; /**< Offset to be added to device raw readings (default: 0) */
    int32_t sampling_frequency; /**< Sampling frequency of the sensor. If -1, use device default (default: -1) */
    int32_t channel_id; /**< Channel id. If -1, use the default channel (default: -1) */
    struct sol_drange_spec out_range; /**< Range of output packet. Usually, is the output range of used sensor. It'll be the 'min' and 'max' fields of drange packets sent on OUT port. (default: {'step': 'DBL_MIN', 'max': 'DBL_MAX', 'min': '-DBL_MAX'}) */
};

#define SOL_FLOW_NODE_TYPE_IIO_INTENSITY_BOTH_SENSOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_IIO_INTENSITY_BOTH_SENSOR_OPTIONS_API_VERSION) \
    }, \
    .buffer_size = 0, \
    .iio_trigger_name = NULL, \
    .use_device_default_scale = true, \
    .scale = 0, \
    .use_device_default_offset = true, \
    .offset = 0, \
    .sampling_frequency = -1, \
    .channel_id = -1, \
    .out_range = {.max=DBL_MAX, .min=-DBL_MAX, .step=DBL_MIN}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_IIO_INTENSITY_BOTH_SENSOR__IN__TICK (0)
#define SOL_FLOW_NODE_TYPE_IIO_INTENSITY_BOTH_SENSOR__IN__TRIGGER (1)
#define SOL_FLOW_NODE_TYPE_IIO_INTENSITY_BOTH_SENSOR__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_IIO_INTENSITY_BOTH_SENSOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_IIO_INTENSITY_BOTH_SENSOR__OUT__SCALE (1)
#define SOL_FLOW_NODE_TYPE_IIO_INTENSITY_BOTH_SENSOR__OUT__OFFSET (2)
#define SOL_FLOW_NODE_TYPE_IIO_INTENSITY_BOTH_SENSOR__OUT__SAMPLING_FREQUENCY (3)
#define SOL_FLOW_NODE_TYPE_IIO_INTENSITY_BOTH_SENSOR__OUT_LAST (3)

#define SOL_FLOW_NODE_TYPE_IIO_INTENSITY_IR_SENSOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_IIO_INTENSITY_IR_SENSOR;

struct sol_flow_node_type_iio_intensity_ir_sensor_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_IIO_INTENSITY_IR_SENSOR_OPTIONS_API_VERSION (1)
    const char * iio_device; /**< IIO device identifier. It's a space separated list of commands. For commands, if it's an integer value, will be interpreted as IIO device id. If it's a string starting with '/', will be interpreted as absolute path of IIO device on sysfs. If it's on the form 'i2c/X-YYYY', will evaluate to an i2c device on sysfs, where X is the bus number and YYYY is the device number, eg, 7-0069, for device 0x69 on bus 7. If it's on the form 'create,i2c,<rel_path>,<devnumber>,<devname>', where rel_path is the path of bus relative to '/sys/devices', them it will attempt to create an IIO device on that i2c bus and use it. (required) */
    int32_t buffer_size; /**< IIO buffer size. If -1, buffering is disabled. If 0, will use default buffer size. If enabled (> 0), a trigger is necessary to perform readings. Set it using 'iio_trigger_name'; if no trigger name is set, it will attempt to create a default one, which is activated via TICK port. (default: 0) */
    const char * iio_trigger_name; /**< IIO trigger name. Name of IIO trigger that should be associated to this device for buffered readings. If not set and buffer enabled, will try to use device current trigger, if any. If none, will attempt to create a sysfs trigger (required) */
    bool use_device_default_scale; /**< If should use device own default scale. If false, it will attempt to use scale option. (default: True) */
    double scale; /**< Scale to applied to device raw readings (default: 0) */
    bool use_device_default_offset; /**< If should use device own default offset. If false, it will attempt to use offset_x, offset_y and offset_z options. (default: True) */
    double offset; /**< Offset to be added to device raw readings (default: 0) */
    int32_t sampling_frequency; /**< Sampling frequency of the sensor. If -1, use device default (default: -1) */
    int32_t channel_id; /**< Channel id. If -1, use the default channel (default: -1) */
    struct sol_drange_spec out_range; /**< Range of output packet. Usually, is the output range of used sensor. It'll be the 'min' and 'max' fields of drange packets sent on OUT port. (default: {'step': 'DBL_MIN', 'max': 'DBL_MAX', 'min': '-DBL_MAX'}) */
};

#define SOL_FLOW_NODE_TYPE_IIO_INTENSITY_IR_SENSOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_IIO_INTENSITY_IR_SENSOR_OPTIONS_API_VERSION) \
    }, \
    .buffer_size = 0, \
    .iio_trigger_name = NULL, \
    .use_device_default_scale = true, \
    .scale = 0, \
    .use_device_default_offset = true, \
    .offset = 0, \
    .sampling_frequency = -1, \
    .channel_id = -1, \
    .out_range = {.max=DBL_MAX, .min=-DBL_MAX, .step=DBL_MIN}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_IIO_INTENSITY_IR_SENSOR__IN__TICK (0)
#define SOL_FLOW_NODE_TYPE_IIO_INTENSITY_IR_SENSOR__IN__TRIGGER (1)
#define SOL_FLOW_NODE_TYPE_IIO_INTENSITY_IR_SENSOR__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_IIO_INTENSITY_IR_SENSOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_IIO_INTENSITY_IR_SENSOR__OUT__SCALE (1)
#define SOL_FLOW_NODE_TYPE_IIO_INTENSITY_IR_SENSOR__OUT__OFFSET (2)
#define SOL_FLOW_NODE_TYPE_IIO_INTENSITY_IR_SENSOR__OUT__SAMPLING_FREQUENCY (3)
#define SOL_FLOW_NODE_TYPE_IIO_INTENSITY_IR_SENSOR__OUT_LAST (3)

#define SOL_FLOW_NODE_TYPE_IIO_PROXIMITY_SENSOR_DEFINED 1
extern const struct sol_flow_node_type *SOL_FLOW_NODE_TYPE_IIO_PROXIMITY_SENSOR;

struct sol_flow_node_type_iio_proximity_sensor_options {
    struct sol_flow_node_options base;
#define SOL_FLOW_NODE_TYPE_IIO_PROXIMITY_SENSOR_OPTIONS_API_VERSION (1)
    const char * iio_device; /**< IIO device identifier. It's a space separated list of commands. For commands, if it's an integer value, will be interpreted as IIO device id. If it's a string starting with '/', will be interpreted as absolute path of IIO device on sysfs. If it's on the form 'i2c/X-YYYY', will evaluate to an i2c device on sysfs, where X is the bus number and YYYY is the device number, eg, 7-0069, for device 0x69 on bus 7. If it's on the form 'create,i2c,<rel_path>,<devnumber>,<devname>', where rel_path is the path of bus relative to '/sys/devices', them it will attempt to create an IIO device on that i2c bus and use it. (required) */
    int32_t buffer_size; /**< IIO buffer size. If -1, buffering is disabled. If 0, will use default buffer size. If enabled (> 0), a trigger is necessary to perform readings. Set it using 'iio_trigger_name'; if no trigger name is set, it will attempt to create a default one, which is activated via TICK port. (default: 0) */
    const char * iio_trigger_name; /**< IIO trigger name. Name of IIO trigger that should be associated to this device for buffered readings. Set to hrtimer:<trigger name> if want to use hrtimer trigger. If not set and buffer enabled, will try to use device current trigger, if any. If none, will attempt to create a sysfs or hrtimer trigger (required) */
    bool use_device_default_scale; /**< If should use device own default scale. If false, it will attempt to use scale option. (default: True) */
    double scale; /**< Scale to applied to device raw readings (default: 0) */
    bool use_device_default_offset; /**< If should use device own default offset. If false, it will attempt to use offset_x, offset_y and offset_z options. (default: True) */
    double offset; /**< Offset to be added to device raw readings (default: 0) */
    int32_t sampling_frequency; /**< Sampling frequency of the sensor. If -1, use device default (default: -1) */
    int32_t channel_id; /**< Channel id. If -1, use the default channel (default: -1) */
    struct sol_drange_spec out_range; /**< Range of output packet. Usually, is the output range of used sensor. It'll be the 'min' and 'max' fields of drange packets sent on OUT port. (default: {'step': 'DBL_MIN', 'max': 'DBL_MAX', 'min': '-DBL_MAX'}) */
};

#define SOL_FLOW_NODE_TYPE_IIO_PROXIMITY_SENSOR_OPTIONS_DEFAULTS(...) { \
    .base = { \
        SOL_SET_API_VERSION(.api_version = SOL_FLOW_NODE_OPTIONS_API_VERSION, ) \
        SOL_SET_API_VERSION(.sub_api = SOL_FLOW_NODE_TYPE_IIO_PROXIMITY_SENSOR_OPTIONS_API_VERSION) \
    }, \
    .buffer_size = 0, \
    .iio_trigger_name = NULL, \
    .use_device_default_scale = true, \
    .scale = 0, \
    .use_device_default_offset = true, \
    .offset = 0, \
    .sampling_frequency = -1, \
    .channel_id = -1, \
    .out_range = {.max=DBL_MAX, .min=-DBL_MAX, .step=DBL_MIN}, \
    __VA_ARGS__ \
}
/* Input Ports */
#define SOL_FLOW_NODE_TYPE_IIO_PROXIMITY_SENSOR__IN__TICK (0)
#define SOL_FLOW_NODE_TYPE_IIO_PROXIMITY_SENSOR__IN__TRIGGER (1)
#define SOL_FLOW_NODE_TYPE_IIO_PROXIMITY_SENSOR__IN_LAST (1)

/* Output Ports */
#define SOL_FLOW_NODE_TYPE_IIO_PROXIMITY_SENSOR__OUT__OUT (0)
#define SOL_FLOW_NODE_TYPE_IIO_PROXIMITY_SENSOR__OUT__SCALE (1)
#define SOL_FLOW_NODE_TYPE_IIO_PROXIMITY_SENSOR__OUT__OFFSET (2)
#define SOL_FLOW_NODE_TYPE_IIO_PROXIMITY_SENSOR__OUT__SAMPLING_FREQUENCY (3)
#define SOL_FLOW_NODE_TYPE_IIO_PROXIMITY_SENSOR__OUT_LAST (3)

#ifndef SOL_LOG_DOMAIN
#define SOL_LOG_DOMAIN &_log_domain
#include "sol-log.h"

#ifdef SOL_LOG_ENABLED
#define SOL_LOG_INTERNAL_DECLARE(_var, _name)     SOL_ATTR_UNUSED struct sol_log_domain _var = {         .name = "sol-" _name,         .color = SOL_LOG_COLOR_MAGENTA,         .level = SOL_LOG_LEVEL_WARNING     }

#define SOL_LOG_INTERNAL_DECLARE_STATIC(_var, _name)     static SOL_LOG_INTERNAL_DECLARE(_var, _name)

SOL_LOG_INTERNAL_DECLARE_STATIC(_log_domain, "flow-iio");

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
