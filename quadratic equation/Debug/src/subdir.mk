################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/quadratic\ equation.c 

OBJS += \
./src/quadratic\ equation.o 

C_DEPS += \
./src/quadratic\ equation.d 


# Each subdirectory must supply rules for building sources it contributes
src/quadratic\ equation.o: ../src/quadratic\ equation.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/quadratic equation.d" -MT"src/quadratic\ equation.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


