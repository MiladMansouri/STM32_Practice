################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../CMSIS/Src/system_stm32f4xx.c 

C_DEPS += \
./CMSIS/Src/system_stm32f4xx.d 

OBJS += \
./CMSIS/Src/system_stm32f4xx.o 


# Each subdirectory must supply rules for building sources it contributes
CMSIS/Src/%.o CMSIS/Src/%.su: ../CMSIS/Src/%.c CMSIS/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F401xC -DSTM32F401CCUx -DSTM32 -DSTM32F4 -c -I../Inc -I"E:/Practical-Project/STM32_Workspase/001_STM32F401_GPIO_OUT_PUT/CMSIS/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-CMSIS-2f-Src

clean-CMSIS-2f-Src:
	-$(RM) ./CMSIS/Src/system_stm32f4xx.d ./CMSIS/Src/system_stm32f4xx.o ./CMSIS/Src/system_stm32f4xx.su

.PHONY: clean-CMSIS-2f-Src

