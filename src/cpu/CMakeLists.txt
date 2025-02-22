add_library(cpu
    "register.cpp"
    "cpu.cpp"
    "mmu.cpp"
)

target_include_directories(cpu INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)

