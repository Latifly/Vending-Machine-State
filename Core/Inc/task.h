/*
 * task.h
 *
 *  Created on: Nov 23, 2019
 *      Author: Alatif
 */

#ifndef INC_TASK_H_
#define INC_TASK_H_


#include "main.h"
#include "LCD.h"

#define led_minuman_ON 		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_RESET)
#define led_minuman_OFF 	HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_SET)

#define led_koinOut_ON		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_RESET)
#define led_koinOut_OFF		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_SET)

#define led_proses_ON		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_RESET)
#define led_proses_OFF		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_SET)

void task_init();
void task_run();


#endif /* INC_TASK_H_ */
