cmake_minimum_required(VERSION 3.13)

# initialize the SDK directly
include(pico_sdk_import.cmake)

project(RASPBERRY_PI_PICO_TEMPERATURE)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

add_compile_options(-Wall
    -Werror
)

# rest of your project
add_executable(main
    main.c
)

add_subdirectory(temperature)
add_subdirectory(uart)

# Add pico_stdlib library which aggregates commonly used features
target_link_libraries(main pico_stdlib hardware_adc temperature uart)


# create map/bin/hex/uf2 file in addition to ELF.
pico_add_extra_outputs(main)