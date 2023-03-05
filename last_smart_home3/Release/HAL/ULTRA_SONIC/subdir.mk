################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/ULTRA_SONIC/ultrasonic.c 

OBJS += \
./HAL/ULTRA_SONIC/ultrasonic.o 

C_DEPS += \
./HAL/ULTRA_SONIC/ultrasonic.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/ULTRA_SONIC/%.o: ../HAL/ULTRA_SONIC/%.c HAL/ULTRA_SONIC/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


