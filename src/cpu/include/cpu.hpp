#ifndef CPU_HEADER_H
#define CPU_HEADER_H

#include "register.hpp"

namespace hboy {

    class CPU {
        public:
            CPU();
            ~CPU() = default;

            
        private:
            Register af;
            Register bc;
            Register de;
            Register hl;
            Register sp;
            Register pc;
    }

}

#endif