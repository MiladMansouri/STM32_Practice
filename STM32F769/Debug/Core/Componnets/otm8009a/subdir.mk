################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Componnets/otm8009a/otm8009a.c 

OBJS += \
./Core/Componnets/otm8009a/otm8009a.o 

C_DEPS += \
./Core/Componnets/otm8009a/otm8009a.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Componnets/otm8009a/%.o Core/Componnets/otm8009a/%.su: ../Core/Componnets/otm8009a/%.c Core/Componnets/otm8009a/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F769xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"E:/Practical-Project/STM32_Workspase/STM32F769/Core/Componnets" -I"E:/Practical-Project/STM32_Workspase/STM32F769/Core/Componnets/otm8009a" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@"  -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Componnets-2f-otm8009a

clean-Core-2f-Componnets-2f-otm8009a:
	-$(RM) ./Core/Componnets/otm8009a/otm8009a.d ./Core/Componnets/otm8009a/otm8009a.o ./Core/Componnets/otm8009a/otm8009a.su

.PHONY: clean-Core-2f-Componnets-2f-otm8009a

