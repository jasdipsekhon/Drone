/**
 * @file        bmi088.c
 * @brief       Driver for BMI088 IMU sensor
 * @author      Jasdip Sekhon
 * @date        2025
 * @license     SPDX-License-Identifier: MIT
 */

#include "bmi088.h"

extern SPI_HandleTypeDef hspi1;

static void bmi088_cs_accel_low(void)  { HAL_GPIO_WritePin(BMI088_ACCEL_CS_GPIO, BMI088_ACCEL_CS_PIN, GPIO_PIN_RESET); }
static void bmi088_cs_accel_high(void) { HAL_GPIO_WritePin(BMI088_ACCEL_CS_GPIO, BMI088_ACCEL_CS_PIN, GPIO_PIN_SET); }

static void bmi088_cs_gyro_low(void)   { HAL_GPIO_WritePin(BMI088_GYRO_CS_GPIO, BMI088_GYRO_CS_PIN, GPIO_PIN_RESET); }
static void bmi088_cs_gyro_high(void)  { HAL_GPIO_WritePin(BMI088_GYRO_CS_GPIO, BMI088_GYRO_CS_PIN, GPIO_PIN_SET); }

bool bmi088_init(void) {
}

bool bmi088_read_data(bmi088_data_t *data) {
}