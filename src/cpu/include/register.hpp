#ifndef REGISTER_HEADER_H
#define REGISTER_HEADER_H

#include "stdint.h"

namespace hboy {
    class Register {
        public:
            static constexpr uint8_t FLAG_ZERO = 1 << 7;
            static constexpr uint8_t FLAG_SUBTRACTION = 1 << 6;
            static constexpr uint8_t FLAG_HALF_CARRY = 1 << 5;
            static constexpr uint8_t FLAG_CARRY = 1 << 4;

        public: 
            Register();
            ~Register() = default;

            void set(uint16_t value);
            void set_low(uint8_t value);
            void set_high(uint8_t value);
            uint16_t get();
            uint8_t get_low();
            uint8_t get_high();
            
        private:
            uint16_t data;
    };
}
#endif