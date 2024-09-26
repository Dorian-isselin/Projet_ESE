/*
 * XII.hpp
 *
 *  Created on: Sep 26, 2024
 *      Author: Dorian ISSELIN
 */

#ifndef INC_XII_HPP_
#define INC_XII_HPP_
#ifdef __cplusplus
extern "C"
{
#endif



void mainloop();
void set_bridge(int la, int ha, int lb, int hb, int lc, int hc);
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);


#ifdef __cplusplus
}
#endif
#endif /* INC_XII_HPP_ */
