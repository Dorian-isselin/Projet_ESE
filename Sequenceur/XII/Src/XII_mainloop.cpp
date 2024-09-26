/*
 * XII_mainloop.cpp
 *
 *  Created on: Sep 26, 2024
 *      Author: Dorian ISSELIN
 */

#include "main.h"
#include "XII.hpp"


void mainloop()
{
	if (HAL_GPIO_ReadPin(B1_GPIO_Port, B1_Pin))
	{
		HAL_GPIO_WritePin(L_A_GPIO_Port, L_A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(L_B_GPIO_Port, L_B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(L_C_GPIO_Port, L_C_Pin, GPIO_PIN_RESET);
	}
	else
	{
		HAL_GPIO_WritePin(L_A_GPIO_Port, L_A_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(L_B_GPIO_Port, L_B_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(L_C_GPIO_Port, L_C_Pin, GPIO_PIN_SET);
	}
}
