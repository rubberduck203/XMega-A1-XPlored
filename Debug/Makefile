################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS :=  \
../src/ \
../src/ASF/ \
../src/ASF/common/ \
../src/ASF/common/boards/ \
../src/ASF/common/services/ \
../src/ASF/common/services/clock/ \
../src/ASF/common/services/clock/xmega/ \
../src/ASF/common/services/delay/ \
../src/ASF/common/services/delay/xmega/ \
../src/ASF/common/services/gpio/ \
../src/ASF/common/services/gpio/xmega_gpio/ \
../src/ASF/common/services/ioport/ \
../src/ASF/common/services/ioport/xmega/ \
../src/ASF/common/utils/ \
../src/ASF/common/utils/interrupt/ \
../src/ASF/common/utils/make/ \
../src/ASF/xmega/ \
../src/ASF/xmega/boards/ \
../src/ASF/xmega/boards/xmega_a1_xplained/ \
../src/ASF/xmega/drivers/ \
../src/ASF/xmega/drivers/cpu/ \
../src/ASF/xmega/utils/ \
../src/ASF/xmega/utils/assembler/ \
../src/ASF/xmega/utils/bit_handling/ \
../src/ASF/xmega/utils/preprocessor/ \
../src/config/


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../src/ASF/common/services/clock/xmega/sysclk.c \
../src/ASF/common/services/ioport/xmega/ioport_compat.c \
../src/ASF/xmega/boards/xmega_a1_xplained/init.c \
../src/main.c


PREPROCESSING_SRCS +=  \
../src/ASF/xmega/drivers/cpu/ccp.s


ASM_SRCS += 


OBJS +=  \
src/ASF/common/services/clock/xmega/sysclk.o \
src/ASF/xmega/drivers/cpu/ccp.o \
src/ASF/common/services/ioport/xmega/ioport_compat.o \
src/ASF/xmega/boards/xmega_a1_xplained/init.o \
src/main.o

OBJS_AS_ARGS +=  \
src/ASF/common/services/clock/xmega/sysclk.o \
src/ASF/xmega/drivers/cpu/ccp.o \
src/ASF/common/services/ioport/xmega/ioport_compat.o \
src/ASF/xmega/boards/xmega_a1_xplained/init.o \
src/main.o

C_DEPS +=  \
src/ASF/common/services/clock/xmega/sysclk.d \
src/ASF/xmega/drivers/cpu/ccp.d \
src/ASF/common/services/ioport/xmega/ioport_compat.d \
src/ASF/xmega/boards/xmega_a1_xplained/init.d \
src/main.d

C_DEPS_AS_ARGS +=  \
src/ASF/common/services/clock/xmega/sysclk.d \
src/ASF/xmega/drivers/cpu/ccp.d \
src/ASF/common/services/ioport/xmega/ioport_compat.d \
src/ASF/xmega/boards/xmega_a1_xplained/init.d \
src/main.d

OUTPUT_FILE_PATH +=XMega-A1-XPlored.elf

OUTPUT_FILE_PATH_AS_ARGS +=XMega-A1-XPlored.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler









src/ASF/common/services/clock/xmega/%.o: ../src/ASF/common/services/clock/xmega/%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -DDEBUG -DIOPORT_XMEGA_COMPAT -DBOARD=XMEGA_A1_XPLAINED  -I"../common/applications/user_application/atxmega128a1_xmega_a1_xplained/config" -I"../src/ASF/xmega/utils" -I"../src/ASF/xmega/boards/xmega_a1_xplained" -I"../src/ASF/common/boards" -I"../src/ASF/xmega/boards" -I"../src/config" -I"../src/ASF/xmega/utils/preprocessor" -I"../src/ASF/common/utils" -I"../src/ASF/common/services/ioport" -I"../src" -I"../src/ASF/common/services/gpio" -I"../src/ASF/xmega/drivers/cpu" -I"../src/ASF/common/services/clock" -I"../src/ASF/common/services/delay"  -O1 -fdata-sections -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -mrelax -g3 -Wall -mmcu=atxmega128a1 -c -std=gnu99 -fno-strict-aliasing -Wstrict-prototypes -Wmissing-prototypes -Werror-implicit-function-declaration -Wpointer-arith -mrelax -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

src/ASF/common/services/ioport/xmega/%.o: ../src/ASF/common/services/ioport/xmega/%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -DDEBUG -DIOPORT_XMEGA_COMPAT -DBOARD=XMEGA_A1_XPLAINED  -I"../common/applications/user_application/atxmega128a1_xmega_a1_xplained/config" -I"../src/ASF/xmega/utils" -I"../src/ASF/xmega/boards/xmega_a1_xplained" -I"../src/ASF/common/boards" -I"../src/ASF/xmega/boards" -I"../src/config" -I"../src/ASF/xmega/utils/preprocessor" -I"../src/ASF/common/utils" -I"../src/ASF/common/services/ioport" -I"../src" -I"../src/ASF/common/services/gpio" -I"../src/ASF/xmega/drivers/cpu" -I"../src/ASF/common/services/clock" -I"../src/ASF/common/services/delay"  -O1 -fdata-sections -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -mrelax -g3 -Wall -mmcu=atxmega128a1 -c -std=gnu99 -fno-strict-aliasing -Wstrict-prototypes -Wmissing-prototypes -Werror-implicit-function-declaration -Wpointer-arith -mrelax -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

src/ASF/xmega/boards/xmega_a1_xplained/%.o: ../src/ASF/xmega/boards/xmega_a1_xplained/%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -DDEBUG -DIOPORT_XMEGA_COMPAT -DBOARD=XMEGA_A1_XPLAINED  -I"../common/applications/user_application/atxmega128a1_xmega_a1_xplained/config" -I"../src/ASF/xmega/utils" -I"../src/ASF/xmega/boards/xmega_a1_xplained" -I"../src/ASF/common/boards" -I"../src/ASF/xmega/boards" -I"../src/config" -I"../src/ASF/xmega/utils/preprocessor" -I"../src/ASF/common/utils" -I"../src/ASF/common/services/ioport" -I"../src" -I"../src/ASF/common/services/gpio" -I"../src/ASF/xmega/drivers/cpu" -I"../src/ASF/common/services/clock" -I"../src/ASF/common/services/delay"  -O1 -fdata-sections -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -mrelax -g3 -Wall -mmcu=atxmega128a1 -c -std=gnu99 -fno-strict-aliasing -Wstrict-prototypes -Wmissing-prototypes -Werror-implicit-function-declaration -Wpointer-arith -mrelax -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

src/%.o: ../src/%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -DDEBUG -DIOPORT_XMEGA_COMPAT -DBOARD=XMEGA_A1_XPLAINED  -I"../common/applications/user_application/atxmega128a1_xmega_a1_xplained/config" -I"../src/ASF/xmega/utils" -I"../src/ASF/xmega/boards/xmega_a1_xplained" -I"../src/ASF/common/boards" -I"../src/ASF/xmega/boards" -I"../src/config" -I"../src/ASF/xmega/utils/preprocessor" -I"../src/ASF/common/utils" -I"../src/ASF/common/services/ioport" -I"../src" -I"../src/ASF/common/services/gpio" -I"../src/ASF/xmega/drivers/cpu" -I"../src/ASF/common/services/clock" -I"../src/ASF/common/services/delay"  -O1 -fdata-sections -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -mrelax -g3 -Wall -mmcu=atxmega128a1 -c -std=gnu99 -fno-strict-aliasing -Wstrict-prototypes -Wmissing-prototypes -Werror-implicit-function-declaration -Wpointer-arith -mrelax -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	



# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler
src/ASF/xmega/drivers/cpu/ccp.o: ../src/ASF/xmega/drivers/cpu/ccp.s
	@echo Building file: $<
	@echo Invoking: AVR32/GNU Assembler : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE) -Wa,-gdwarf2 -x assembler-with-cpp -c -mmcu=atxmega128a1 -mrelax -DBOARD=XMEGA_A1_XPLAINED -DIOPORT_XMEGA_COMPAT -I "../common/applications/user_application/atxmega128a1_xmega_a1_xplained/config" -I "../src/ASF/xmega/utils" -I "../src/ASF/xmega/boards/xmega_a1_xplained" -I "../src/ASF/common/boards" -I "../src/ASF/xmega/boards" -I "../src/config" -I "../src/ASF/xmega/utils/preprocessor" -I "../src/ASF/common/utils" -I "../src/ASF/common/services/ioport" -I "../src" -I "../src/ASF/common/services/gpio" -I "../src/ASF/xmega/drivers/cpu" -I "../src/ASF/common/services/clock" -I "../src/ASF/common/services/delay"  -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -mrelax -Wa,-g   -o "$@" "$<" 
	@echo Finished building: $<
	


src/ASF/xmega/drivers/cpu/%.o: ../src/ASF/xmega/drivers/cpu/%.s
	@echo Building file: $<
	@echo Invoking: AVR32/GNU Assembler : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE) -Wa,-gdwarf2 -x assembler-with-cpp -c -mmcu=atxmega128a1 -mrelax -DBOARD=XMEGA_A1_XPLAINED -DIOPORT_XMEGA_COMPAT -I "../common/applications/user_application/atxmega128a1_xmega_a1_xplained/config" -I "../src/ASF/xmega/utils" -I "../src/ASF/xmega/boards/xmega_a1_xplained" -I "../src/ASF/common/boards" -I "../src/ASF/xmega/boards" -I "../src/config" -I "../src/ASF/xmega/utils/preprocessor" -I "../src/ASF/common/utils" -I "../src/ASF/common/services/ioport" -I "../src" -I "../src/ASF/common/services/gpio" -I "../src/ASF/xmega/drivers/cpu" -I "../src/ASF/common/services/clock" -I "../src/ASF/common/services/delay"  -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -mrelax -Wa,-g   -o "$@" "$<" 
	@echo Finished building: $<
	




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU Linker : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="XMega-A1-XPlored.map" -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -mrelax -mmcu=atxmega128a1 -Wl,--relax -Wl,--section-start=.BOOT=0x20000  
	@echo Finished building target: $@
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "XMega-A1-XPlored.elf" "XMega-A1-XPlored.hex"
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "XMega-A1-XPlored.elf" "XMega-A1-XPlored.eep" || exit 0
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-objdump.exe" -h -S "XMega-A1-XPlored.elf" > "XMega-A1-XPlored.lss"
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures "XMega-A1-XPlored.elf" "XMega-A1-XPlored.srec"
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-size.exe" "XMega-A1-XPlored.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "XMega-A1-XPlored.elf" "XMega-A1-XPlored.a" "XMega-A1-XPlored.hex" "XMega-A1-XPlored.lss" "XMega-A1-XPlored.eep" "XMega-A1-XPlored.map" "XMega-A1-XPlored.srec" "XMega-A1-XPlored.usersignatures"
	