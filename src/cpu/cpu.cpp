#include "include/cpu.hpp"

namespace hboy {
    CPU::CPU() : af(Register()), bc(Register()), de(Register()), hl(Register()), sp(Register()), pc(Register()) {
        bc.set(0x0013);
        de.set(0x00D8);
        hl.set(0x014D);
        sp.set(0xFFFE);
        pc.set(0x0100);
    }
}