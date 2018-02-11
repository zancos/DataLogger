cmake_minimum_required(VERSION 3.6)
project(DataLogger)

SET(MCU "AVR_ATxmega32A4")
SET(F_CPU "16000000")
SET(CMAKE_SYSTEM_NAME Generic)

# For some reason, these paths have to be absolute, otherwise
# CLion won't be able to find headers etc.
SET(CMAKE_C_COMPILER /usr/bin/avr-gcc)
SET(CMAKE_CXX_COMPILER /usr/bin/avr-g++)

SET(CMAKE_C_FLAGS "-mmcu=${MCU} -DF_CPU=${F_CPU} -Os")
SET(CMAKE_C_LINK_FLAGS "-mmcu=${MCU}")

SET(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
SET(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
SET(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)

set(SOURCE_FILES main.cpp SIM808.h SIM808.cpp)
add_executable(datalogger ${SOURCE_FILES})