add_executable(hboy hboy.cpp)

add_subdirectory(cpu)

target_link_libraries(hboy PRIVATE cpu)

