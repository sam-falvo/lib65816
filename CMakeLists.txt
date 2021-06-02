cmake_minimum_required(VERSION 3.16)
include(CheckTypeSize)

project(lib65816 C)

check_type_size("long"  SIZEOF_LONG)
check_type_size("int"   SIZEOF_INT)
check_type_size("short" SIZEOF_SHORT)

option(DEBUG "Enables debugger support" ON)

configure_file(lib65816/config.h.in lib65816/config.h)

set(lib65816_srcs
	src/cpu.c
	src/cpuevent.c
	src/debugger.c
	src/dispatch.c
	src/opcodes1.c
	src/opcodes2.c
	src/opcodes3.c
	src/opcodes4.c
	src/opcodes5.c
	src/table.c
)
add_library(lib65816so SHARED ${lib65816_srcs})
set_target_properties(lib65816so PROPERTIES OUTPUT_NAME 65816)
target_include_directories(lib65816so PUBLIC
	${CMAKE_CURRENT_BINARY_DIR}	# for the lib65816/config.h header
	${CMAKE_CURRENT_SOURCE_DIR}	# for everything else in lib65816/*
)

add_library(lib65816a STATIC ${lib65816_srcs})
set_target_properties(lib65816a PROPERTIES OUTPUT_NAME 65816)
target_include_directories(lib65816a PUBLIC
	${CMAKE_CURRENT_BINARY_DIR}	# for the lib65816/config.h header
	${CMAKE_CURRENT_SOURCE_DIR}	# for everything else in lib65816/*
)

install(TARGETS lib65816so lib65816a)
install(DIRECTORY lib65816 DESTINATION include/lib65816 FILES_MATCHING PATTERN "*.h")
