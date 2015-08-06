################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/GPIO.c" \
"../Sources/PLL.c" \
"../Sources/SCI.c" \
"../Sources/TIM.c" \
"../Sources/app.c" \
"../Sources/main.c" \

C_SRCS += \
../Sources/GPIO.c \
../Sources/PLL.c \
../Sources/SCI.c \
../Sources/TIM.c \
../Sources/app.c \
../Sources/main.c \

OBJS += \
./Sources/GPIO_c.obj \
./Sources/PLL_c.obj \
./Sources/SCI_c.obj \
./Sources/TIM_c.obj \
./Sources/app_c.obj \
./Sources/main_c.obj \

OBJS_QUOTED += \
"./Sources/GPIO_c.obj" \
"./Sources/PLL_c.obj" \
"./Sources/SCI_c.obj" \
"./Sources/TIM_c.obj" \
"./Sources/app_c.obj" \
"./Sources/main_c.obj" \

C_DEPS += \
./Sources/GPIO_c.d \
./Sources/PLL_c.d \
./Sources/SCI_c.d \
./Sources/TIM_c.d \
./Sources/app_c.d \
./Sources/main_c.d \

C_DEPS_QUOTED += \
"./Sources/GPIO_c.d" \
"./Sources/PLL_c.d" \
"./Sources/SCI_c.d" \
"./Sources/TIM_c.d" \
"./Sources/app_c.d" \
"./Sources/main_c.d" \

OBJS_OS_FORMAT += \
./Sources/GPIO_c.obj \
./Sources/PLL_c.obj \
./Sources/SCI_c.obj \
./Sources/TIM_c.obj \
./Sources/app_c.obj \
./Sources/main_c.obj \


# Each subdirectory must supply rules for building sources it contributes
Sources/GPIO_c.obj: ../Sources/GPIO.c
	@echo 'Building file: $<'
	@echo 'Executing target #1 $<'
	@echo 'Invoking: S12Z Compiler'
	"$(S12Z_ToolsDirEnv)/mwccs12lisa" -c @@"Sources/GPIO.args" -o "Sources/GPIO_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/%.d: ../Sources/%.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/PLL_c.obj: ../Sources/PLL.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: S12Z Compiler'
	"$(S12Z_ToolsDirEnv)/mwccs12lisa" -c @@"Sources/PLL.args" -o "Sources/PLL_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/SCI_c.obj: ../Sources/SCI.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: S12Z Compiler'
	"$(S12Z_ToolsDirEnv)/mwccs12lisa" -c @@"Sources/SCI.args" -o "Sources/SCI_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/TIM_c.obj: ../Sources/TIM.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: S12Z Compiler'
	"$(S12Z_ToolsDirEnv)/mwccs12lisa" -c @@"Sources/TIM.args" -o "Sources/TIM_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/app_c.obj: ../Sources/app.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: S12Z Compiler'
	"$(S12Z_ToolsDirEnv)/mwccs12lisa" -c @@"Sources/app.args" -o "Sources/app_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/main_c.obj: ../Sources/main.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: S12Z Compiler'
	"$(S12Z_ToolsDirEnv)/mwccs12lisa" -c @@"Sources/main.args" -o "Sources/main_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '


