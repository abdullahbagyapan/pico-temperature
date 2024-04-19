file(GLOB FILES *.c *.h)

add_library(uart ${FILES})

target_link_libraries(uart pico_stdlib)
