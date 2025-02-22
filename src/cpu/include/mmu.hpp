#ifndef MMU_HEADER_H
#define MMU_HEADER_H

#include "stdint.h"

namespace hboy {
    // Memory Management unit
    class MMU {
        public:
            uint16_t read(uint16_t address);
            void write(uint16_t address, uint16_t value);
    };
}

#endif