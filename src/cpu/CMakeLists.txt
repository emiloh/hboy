add_library(cpu
    "register.cpp" 
)

target_include_directories(cpu INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)

