#pragma once

/**
 * @file        bmi088.h
 * @brief       Driver for BMI088 IMU sensor
 * @author      Jasdip Sekhon
 * @date        2025
 * @license     SPDX-License-Identifier: MIT
 */

#include <stdint.h>
#include <stdbool.h>
#include "stm32h7xx_hal.h"

typedef struct {
    int16_t x;
    int16_t y;
    int16_t z;
} bmi088_vector_t;
typedef struct {
    bmi088_vector_t accel;
    bmi088_vector_t gyro;
    float temperature;
} bmi088_data_t;

bool bmi088_init(void);
bool bmi088_read_accel(bmi088_vector_t *accel);
bool bmi088_read_gyro(bmi088_vector_t *gyro);
bool bmi088_read_temperature(float *temp);
