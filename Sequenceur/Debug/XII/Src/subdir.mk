################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../XII/Src/XII_interupt.cpp \
../XII/Src/XII_mainloop.cpp 

OBJS += \
./XII/Src/XII_interupt.o \
./XII/Src/XII_mainloop.o 

CPP_DEPS += \
./XII/Src/XII_interupt.d \
./XII/Src/XII_mainloop.d 


# Each subdirectory must supply rules for building sources it contributes
XII/Src/%.o XII/Src/%.su XII/Src/%.cyclo: ../XII/Src/%.cpp XII/Src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../XII/Inc -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-XII-2f-Src

clean-XII-2f-Src:
	-$(RM) ./XII/Src/XII_interupt.cyclo ./XII/Src/XII_interupt.d ./XII/Src/XII_interupt.o ./XII/Src/XII_interupt.su ./XII/Src/XII_mainloop.cyclo ./XII/Src/XII_mainloop.d ./XII/Src/XII_mainloop.o ./XII/Src/XII_mainloop.su

.PHONY: clean-XII-2f-Src

