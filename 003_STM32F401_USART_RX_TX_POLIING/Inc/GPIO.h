/*
 * GPIO.h
 *
 *  Created on: Feb 5, 2023
 *      Author: Mansouri.m
 */

#ifndef GPIO_H_
#define GPIO_H_

#include "main.h"

/* GPIO MODE Types*/
#define GPIO_MODE_INPUT 		0x00U
#define GPIO_MODE_OUTPUT 		0x01U
#define GPIO_MODE_AF 			0x02U
#define GPIO_MODE_ANALOG 		0x03U
#define GPIO_MODE_MASK			0x03u
/*GPIO Output Types*/
#define GPIO_OUTPUT_PP			0x00U
#define GPIO_OUTPUT_OD			0x01U
#define GPIO_OUTPUT_MASK		0x01U
/*GPIO SPEED*/
#define GPIO_SPEED_LOW			0x00U
#define GPIO_SPEED_MEDIUM		0x01U
#define GPIO_SPEED_HIGH			0x02U
#define GPIO_SPEED_VERY_HIGH	0x03U
#define GPIO_SPEED_MASK			0x03U
/*GPIO Pull up Pull down Resistor */
#define GPIO_PUPDR_NO_PU_PD			0x00U
#define GPIO_PUPDR_PULL_UP			0x01U
#define GPIO_PUPDR_PULL_DOWN		0x02U
#define GPIO_PUPDR_PULL_Mask		0x03U

/*GPIO AF */
#define GPIO_AF_00				0x00U
#define GPIO_AF_01				0x01U
#define GPIO_AF_02				0x02U
#define GPIO_AF_03				0x03U
#define GPIO_AF_04				0x04U
#define GPIO_AF_05				0x05U
#define GPIO_AF_06				0x06U
#define GPIO_AF_07				0x07U
#define GPIO_AF_08				0x08U
#define GPIO_AF_09				0x09U
#define GPIO_AF_10				0x0AU
#define GPIO_AF_11				0x0BU
#define GPIO_AF_12				0x0CU
#define GPIO_AF_13				0x0DU
#define GPIO_AF_14				0x0EU
#define GPIO_AF_15				0x0FU
#define GPIO_AF_MASK			0x0FU

#define GPIO_PIN_0                 ((uint16_t)0x0001)  /* Pin 0 selected    */
#define GPIO_PIN_1                 ((uint16_t)0x0002)  /* Pin 1 selected    */
#define GPIO_PIN_2                 ((uint16_t)0x0004)  /* Pin 2 selected    */
#define GPIO_PIN_3                 ((uint16_t)0x0008)  /* Pin 3 selected    */
#define GPIO_PIN_4                 ((uint16_t)0x0010)  /* Pin 4 selected    */
#define GPIO_PIN_5                 ((uint16_t)0x0020)  /* Pin 5 selected    */
#define GPIO_PIN_6                 ((uint16_t)0x0040)  /* Pin 6 selected    */
#define GPIO_PIN_7                 ((uint16_t)0x0080)  /* Pin 7 selected    */
#define GPIO_PIN_8                 ((uint16_t)0x0100)  /* Pin 8 selected    */
#define GPIO_PIN_9                 ((uint16_t)0x0200)  /* Pin 9 selected    */
#define GPIO_PIN_10                ((uint16_t)0x0400)  /* Pin 10 selected   */
#define GPIO_PIN_11                ((uint16_t)0x0800)  /* Pin 11 selected   */
#define GPIO_PIN_12                ((uint16_t)0x1000)  /* Pin 12 selected   */
#define GPIO_PIN_13                ((uint16_t)0x2000)  /* Pin 13 selected   */
#define GPIO_PIN_14                ((uint16_t)0x4000)  /* Pin 14 selected   */
#define GPIO_PIN_15                ((uint16_t)0x8000)  /* Pin 15 selected   */
#define GPIO_PIN_All               ((uint16_t)0xFFFF)  /* All pins selected */

typedef struct
{

	uint32_t mode;
	uint32_t output_mode;
	uint32_t speed;
	uint32_t pupdr;
	uint32_t af;
	uint32_t pin;
} Ts_GPIO_Handel;

typedef enum
{

	PIN_RESET = 0U, PIN_SET = 1U,
} Te_Pin_State;

uint8_t gpio_port_init(GPIO_TypeDef *GPIO, Ts_GPIO_Handel *handel);
void gpio_write_pin(GPIO_TypeDef *GPIO, uint32_t pin, Te_Pin_State state);
Te_Pin_State gpio_read_pin(GPIO_TypeDef *GPIO, uint32_t pin);

#endif /* GPIO_H_ */
