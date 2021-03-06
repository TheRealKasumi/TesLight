/**
 * @file SystemConfiguration.h
 * @author TheRealKasumi
 * @brief Contains the (static) system configuration.
 * @version 0.0.1
 * @date 2022-06-22
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef SYSTEM_CONFIGURATION_H
#define SYSTEM_CONFIGURATION_H

// SD configuration
#define SD_CS_PIN 5

// Logging configuration
#define SERIAL_BAUD_RATE 115200
#define LOG_FILE_NAME "/system_log.txt"

// Configuration of the runtime configuration
#define CONFIGURATION_FILE_NAME "/config.txt"

// LED driver and animator configuration
// When changing the driver number make sure
// to also adjust the default values in {@link TesLight::Configuration}
#define NUM_LED_DRIVERS 6

// I2C configuration
#define SDA_PIN 32
#define SCL_PIN 33

// Motion sensor configuration
#define MOTION_SENSOR_I2C_ADDRESS 0x68
#define MOTION_SENSOR_BUFFER_SIZE 5

// Webserver configuration
#define WEB_SERVER_PORT 80
#define WEB_SERVER_STATIC_CONTENT "/webapp"

// Timer configuration
#define LED_CYCLE_TIME 15
#define MOTION_SENSOR_CYCLE_TIME 15
#define FPS_CYCLE_TIME 10000

#endif