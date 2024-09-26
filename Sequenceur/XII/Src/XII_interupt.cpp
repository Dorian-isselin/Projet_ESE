/*
 * XII_interupt.cpp
 *
 *  Created on: Sep 26, 2024
 *      Author: doria
 */

#include "main.h"
#include "XII.hpp"
#include "tim.h"


void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{

	int A = HAL_GPIO_ReadPin(IN_A_GPIO_Port, IN_A_Pin);
	int B = HAL_GPIO_ReadPin(IN_B_GPIO_Port, IN_B_Pin);
	int C = HAL_GPIO_ReadPin(IN_C_GPIO_Port, IN_C_Pin);

	if (A && B && C)
	{

	}
	else if(A && B && C)
	{

	}
	else if(A && B && C)
	{

	}
	else if(A && B && C)
	{

	}
	else if(A && B && C)
	{

	}
	else if(A && B && C)
	{

	}


	if(A)
	{
		set_bridge(1, 1, 0, 0, 0, 0);
	}
	if(B)
	{
		set_bridge(0, 0, 1, 1, 0, 0);
	}
	if(C)
	{
		set_bridge(0, 0, 0, 0, 1, 1);
	}

	//HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
}

void set_bridge(int la, int ha, int lb, int hb, int lc, int hc)
{
	HAL_GPIO_WritePin(L_A_GPIO_Port, L_A_Pin, ha ? GPIO_PIN_RESET : GPIO_PIN_SET);
	HAL_GPIO_WritePin(L_B_GPIO_Port, L_B_Pin, hb ? GPIO_PIN_RESET : GPIO_PIN_SET);
	HAL_GPIO_WritePin(L_C_GPIO_Port, L_C_Pin, hc ? GPIO_PIN_RESET : GPIO_PIN_SET);

	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, ha ? 1000 : 0);
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_2, hb ? 1000 : 0);
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_3, hc ? 1000 : 0);
}
