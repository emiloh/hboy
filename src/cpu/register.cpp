#include "include/register.hpp"

namespace hboy {
    Register::Register() {
        data = 0x0;
    }

    void Register::set(uint16_t value) {
        data = value;
    } 

    void Register::set_low(uint8_t value) {
        data |= value;
    }

    void Register::set_high(uint8_t value) {
        data |= ((uint16_t) value << 8);
    }

    uint16_t Register::get() {
        return data;
    }

    uint8_t Register::get_high() {
        return data >> 8;
    }

    uint8_t Register::get_low() {
        return data;
    }
}