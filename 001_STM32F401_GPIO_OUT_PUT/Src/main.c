/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include "main.h"
#include "GPIO.h"

static volatile uint32_t tick;
void SysTick_Handler(void)
{
	tick++;
}

void delay_ms(uint32_t delay)
{
	tick = 0;
	while (tick < delay)
		;
}

int main(void)
{
	/* Loop forever */
	SysTick_Config(SystemCoreClock / 1000U);

	/*
	 * - PC 13
	 * - SET PORT MODE TO OUT PUT PUSH PULL
	 * - SET SPEED LOW
	 * - SET NO PULL UP PULL DOWN RESISTOR
	 * - USING ODR TO SET AND RESET PIN OR USING BSRR
	 * */

	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN;
	Ts_GPIO_Handel handel =
	{ 0 };
	handel.mode = GPIO_MODE_OUTPUT;
	handel.output_mode = GPIO_OUTPUT_PP;
	handel.speed = GPIO_SPEED_HIGH;
	handel.pupdr = GPIO_PUPDR_NO_PU_PD;
	handel.pin = GPIO_PIN_13;
	gpio_port_init(GPIOC, &handel);

	while (1)
	{
		gpio_write_pin(GPIOC, GPIO_PIN_13, PIN_SET);
		delay_ms(1000);
		gpio_write_pin(GPIOC, GPIO_PIN_13, PIN_RESET);
		delay_ms(1000);

	}

}