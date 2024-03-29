/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_BUILTIN_Pin GPIO_PIN_13
#define LED_BUILTIN_GPIO_Port GPIOC
#define PB_Cancel_Pin GPIO_PIN_14
#define PB_Cancel_GPIO_Port GPIOC
#define PB_Process_Pin GPIO_PIN_15
#define PB_Process_GPIO_Port GPIOC
#define Koin_500_Pin GPIO_PIN_0
#define Koin_500_GPIO_Port GPIOA
#define Koin_1000_Pin GPIO_PIN_1
#define Koin_1000_GPIO_Port GPIOA
#define LED_1_Pin GPIO_PIN_6
#define LED_1_GPIO_Port GPIOA
#define LED_2_Pin GPIO_PIN_7
#define LED_2_GPIO_Port GPIOA
#define LED_3_Pin GPIO_PIN_0
#define LED_3_GPIO_Port GPIOB
#define LED_4_Pin GPIO_PIN_1
#define LED_4_GPIO_Port GPIOB
#define LED_5_Pin GPIO_PIN_10
#define LED_5_GPIO_Port GPIOB
#define LED_6_Pin GPIO_PIN_11
#define LED_6_GPIO_Port GPIOB
#define LCD_RS_Pin GPIO_PIN_12
#define LCD_RS_GPIO_Port GPIOB
#define LCD_RW_Pin GPIO_PIN_13
#define LCD_RW_GPIO_Port GPIOB
#define LCD_EN_Pin GPIO_PIN_14
#define LCD_EN_GPIO_Port GPIOB
#define LCD_D4_Pin GPIO_PIN_15
#define LCD_D4_GPIO_Port GPIOB
#define LCD_D5_Pin GPIO_PIN_8
#define LCD_D5_GPIO_Port GPIOA
#define LCD_D6_Pin GPIO_PIN_11
#define LCD_D6_GPIO_Port GPIOA
#define LCD_D7_Pin GPIO_PIN_12
#define LCD_D7_GPIO_Port GPIOA
#define Buzzer_Pin GPIO_PIN_7
#define Buzzer_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
