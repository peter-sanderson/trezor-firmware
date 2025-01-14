#ifndef STM32U5A9J_DK_H_
#define STM32U5A9J_DK_H_

#define HSE_16MHZ
#define VDD_1V8 1

#define USE_I2C 1
#define USE_RGB_COLORS 1
#define USE_TOUCH 1
// #define USE_SBU 1
// #define USE_DISP_I8080_8BIT_DW 1
#define USE_HASH_PROCESSOR 1

#include "displays/dsi.h"

#define I2C_COUNT 1
#define I2C_INSTANCE_0 I2C5
#define I2C_INSTANCE_0_CLK_EN __HAL_RCC_I2C5_CLK_ENABLE
#define I2C_INSTANCE_0_CLK_DIS __HAL_RCC_I2C5_CLK_DISABLE
#define I2C_INSTANCE_0_PIN_AF GPIO_AF2_I2C5
#define I2C_INSTANCE_0_SDA_PORT GPIOH
#define I2C_INSTANCE_0_SDA_PIN GPIO_PIN_4
#define I2C_INSTANCE_0_SDA_CLK_EN __HAL_RCC_GPIOH_CLK_ENABLE
#define I2C_INSTANCE_0_SCL_PORT GPIOH
#define I2C_INSTANCE_0_SCL_PIN GPIO_PIN_5
#define I2C_INSTANCE_0_SCL_CLK_EN __HAL_RCC_GPIOH_CLK_ENABLE
#define I2C_INSTANCE_0_RESET_REG &RCC->APB1RSTR2
#define I2C_INSTANCE_0_RESET_BIT RCC_APB1RSTR2_I2C5RST

#define TOUCH_I2C_INSTANCE 0

#endif  // STM32U5A9J_DK_H_
