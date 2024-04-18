file(GLOB FILES *.c *.h)

add_library(temperature ${FILES})

target_link_libraries(temperature pico_stdlib)
