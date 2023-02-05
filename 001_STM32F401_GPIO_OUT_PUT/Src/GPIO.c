#include "GPIO.h"

uint8_t gpio_port_init(GPIO_TypeDef *GPIO, Ts_GPIO_Handel *handel)
{

	for (uint32_t index = 0; index < 16u; index++)
	{
		if (handel->pin & (1 << index))
		{
			REG_SET_VAL(GPIO->MODER, handel->mode, GPIO_MODE_MASK, index * 2);
			REG_SET_VAL(GPIO->OSPEEDR, handel->speed, GPIO_SPEED_MASK,
					index * 2);
			REG_SET_VAL(GPIO->OTYPER, handel->output_mode, GPIO_OUTPUT_MASK,
					index);
			REG_SET_VAL(GPIO->PUPDR, handel->pupdr, GPIO_PUPDR_PULL_Mask,
					index * 2);
			if (index > 7)
				REG_SET_VAL(GPIO->AFR[1], handel->af, GPIO_PUPDR_PULL_Mask,
						index * 4);
			else
				REG_SET_VAL(GPIO->AFR[0], handel->af, GPIO_AF_MASK, index * 4);
		}
	}
	return 1;
}

void gpio_write_pin(GPIO_TypeDef *GPIO, uint32_t pin, Te_Pin_State state)
{
	if (state == PIN_RESET)
	{
		GPIO->BSRR |= (pin << 16);
	}
	else
	{
		GPIO->BSRR |= (pin);
	}
}

Te_Pin_State gpio_read_pin(GPIO_TypeDef *GPIO, uint32_t pin)
{
	return (Te_Pin_State) REG_READ_BIT(GPIO->IDR, pin);
}
