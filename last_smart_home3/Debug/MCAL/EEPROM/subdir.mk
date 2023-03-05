################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/EEPROM/EEPROM.c 

OBJS += \
./MCAL/EEPROM/EEPROM.o 

C_DEPS += \
./MCAL/EEPROM/EEPROM.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/EEPROM/%.o: ../MCAL/EEPROM/%.c MCAL/EEPROM/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\mohamed\eclipse-workspace\last_smart_home3\MCAL\EEPROM" -I"C:\Users\mohamed\eclipse-workspace\last_smart_home3\HAL\motor" -I"C:\Users\mohamed\eclipse-workspace\last_smart_home3\HAL\LM35" -I"C:\Users\mohamed\eclipse-workspace\last_smart_home3\HAL\LED" -I"C:\Users\mohamed\eclipse-workspace\last_smart_home3\HAL\ULTRA_SONIC" -I"C:\Users\mohamed\eclipse-workspace\last_smart_home3\MCAL\ADC" -I"C:\Users\mohamed\eclipse-workspace\last_smart_home3\HAL\KEYPAD" -I"C:\Users\mohamed\eclipse-workspace\last_smart_home3\HAL\LCD" -I"C:\Users\mohamed\eclipse-workspace\last_smart_home3\LIB" -I"C:\Users\mohamed\eclipse-workspace\last_smart_home3\MCAL\DIO" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


