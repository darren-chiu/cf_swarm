cmd_vendor/FreeRTOS/queue.o := arm-none-eabi-gcc -Wp,-MD,vendor/FreeRTOS/.queue.o.d    -I../vendor -Ivendor -D__firmware__ -fno-exceptions -Wall -Wmissing-braces -fno-strict-aliasing -ffunction-sections -fdata-sections -Wdouble-promotion -std=gnu11 -DCRAZYFLIE_FW  -I../../vendor/CMSIS/CMSIS/Core/Include -I../vendor/CMSIS/CMSIS/Core/Include  -I../../vendor/CMSIS/CMSIS/DSP/Include -I../vendor/CMSIS/CMSIS/DSP/Include  -I../../vendor/libdw1000/inc -I../vendor/libdw1000/inc  -I../../vendor/FreeRTOS/include -I../vendor/FreeRTOS/include  -I../../vendor/FreeRTOS/portable/GCC/ARM_CM4F -I../vendor/FreeRTOS/portable/GCC/ARM_CM4F  -I../../src/config -I../src/config  -I../../src/platform/interface -I../src/platform/interface  -I../../src/deck/interface -I../src/deck/interface  -I../../src/deck/drivers/interface -I../src/deck/drivers/interface  -I../../src/drivers/interface -I../src/drivers/interface  -I../../src/drivers/bosch/interface -I../src/drivers/bosch/interface  -I../../src/drivers/esp32/interface -I../src/drivers/esp32/interface  -I../../src/hal/interface -I../src/hal/interface  -I../../src/modules/interface -I../src/modules/interface  -I../../src/modules/interface/kalman_core -I../src/modules/interface/kalman_core  -I../../src/modules/interface/lighthouse -I../src/modules/interface/lighthouse  -I../../src/modules/interface/outlierfilter -I../src/modules/interface/outlierfilter  -I../../src/modules/interface/cpx -I../src/modules/interface/cpx  -I../../src/modules/interface/p2pDTR -I../src/modules/interface/p2pDTR  -I../../src/modules/interface/controller -I../src/modules/interface/controller  -I../../src/modules/interface/estimator -I../src/modules/interface/estimator  -I../../src/utils/interface -I../src/utils/interface  -I../../src/utils/interface/kve -I../src/utils/interface/kve  -I../../src/utils/interface/lighthouse -I../src/utils/interface/lighthouse  -I../../src/utils/interface/tdoa -I../src/utils/interface/tdoa  -I../../src/lib/FatFS -I../src/lib/FatFS  -I../../src/lib/CMSIS/STM32F4xx/Include -I../src/lib/CMSIS/STM32F4xx/Include  -I../../src/lib/STM32_USB_Device_Library/Core/inc -I../src/lib/STM32_USB_Device_Library/Core/inc  -I../../src/lib/STM32_USB_OTG_Driver/inc -I../src/lib/STM32_USB_OTG_Driver/inc  -I../../src/lib/STM32F4xx_StdPeriph_Driver/inc -I../src/lib/STM32F4xx_StdPeriph_Driver/inc  -I../../src/lib/vl53l1 -I../src/lib/vl53l1  -I../../src/lib/vl53l1/core/inc -I../src/lib/vl53l1/core/inc  -I../build/include/generated -Ibuild/include/generated -fno-delete-null-pointer-checks -Wno-unused-but-set-variable -Wno-unused-const-variable -fomit-frame-pointer -fno-var-tracking-assignments -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=date-time -DCC_HAVE_ASM_GOTO -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -g3 -fno-math-errno -DARM_MATH_CM4 -D__FPU_PRESENT=1 -mfp16-format=ieee -Wno-array-bounds -Wno-stringop-overread -Wno-stringop-overflow -DSTM32F4XX -DSTM32F40_41xxx -DHSE_VALUE=8000000 -DUSE_STDPERIPH_DRIVER -Os -Werror   -c -o vendor/FreeRTOS/queue.o ../vendor/FreeRTOS/queue.c

source_vendor/FreeRTOS/queue.o := ../vendor/FreeRTOS/queue.c

deps_vendor/FreeRTOS/queue.o := \
  /usr/include/newlib/stdlib.h \
  /usr/include/newlib/machine/ieeefp.h \
  /usr/include/newlib/_ansi.h \
  /usr/include/newlib/newlib.h \
  /usr/include/newlib/_newlib_version.h \
  /usr/include/newlib/sys/config.h \
    $(wildcard include/config/h//.h) \
  /usr/include/newlib/sys/features.h \
  /usr/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h \
  /usr/include/newlib/sys/reent.h \
  /usr/include/newlib/_ansi.h \
  /usr/include/newlib/sys/_types.h \
  /usr/include/newlib/machine/_types.h \
  /usr/include/newlib/machine/_default_types.h \
  /usr/include/newlib/sys/lock.h \
  /usr/include/newlib/sys/cdefs.h \
  /usr/include/newlib/machine/stdlib.h \
  /usr/include/newlib/alloca.h \
  /usr/include/newlib/string.h \
  /usr/include/newlib/sys/_locale.h \
  /usr/include/newlib/strings.h \
  /usr/include/newlib/sys/string.h \
  ../vendor/FreeRTOS/include/FreeRTOS.h \
  /usr/lib/gcc/arm-none-eabi/10.3.1/include/stdint.h \
  ../src/config/FreeRTOSConfig.h \
    $(wildcard include/config/h.h) \
    $(wildcard include/config/debug/queue/monitor.h) \
  ../src/config/config.h \
    $(wildcard include/config/h/.h) \
    $(wildcard include/config/block/address.h) \
  ../src/drivers/interface/nrf24l01.h \
  /usr/lib/gcc/arm-none-eabi/10.3.1/include/stdbool.h \
  ../src/drivers/interface/nRF24L01reg.h \
  ../src/config/trace.h \
  ../src/hal/interface/usec_time.h \
  ../src/utils/interface/cfassert.h \
  ../vendor/FreeRTOS/include/projdefs.h \
  ../vendor/FreeRTOS/include/portable.h \
  ../vendor/FreeRTOS/include/deprecated_definitions.h \
  ../vendor/FreeRTOS/portable/GCC/ARM_CM4F/portmacro.h \
  ../vendor/FreeRTOS/include/mpu_wrappers.h \
  ../vendor/FreeRTOS/include/task.h \
  ../vendor/FreeRTOS/include/list.h \
  ../vendor/FreeRTOS/include/queue.h \
  ../vendor/FreeRTOS/include/task.h \

vendor/FreeRTOS/queue.o: $(deps_vendor/FreeRTOS/queue.o)

$(deps_vendor/FreeRTOS/queue.o):
