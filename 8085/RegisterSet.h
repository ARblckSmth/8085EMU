#pragma once

#include<cinttypes>

using REG_8  = std::uint8_t;
using REG_16 = std::uint16_t;

class RegisterSet
{
public:
    REG_8 A;
    REG_8 FLAG;

    union
    {
        struct
        {
#ifdef BIG_ENDIAN
            REG_8 B;
            REG_8 C;
#else
            REG_8 C;
            REG_8 B;
#endif
        };
        REG_16 BC;
    };

    union
    {
        struct
        {
#ifdef BIG_ENDIAN
            REG_8 D;
            REG_8 E;
#else
            REG_8 E;
            REG_8 D;
#endif
        };
        REG_16 DE;
    };

    union
    {
        struct
        {
#ifdef BIG_ENDIAN
            REG_8 H;
            REG_8 L;
#else
            REG_8 L;
            REG_8 H;
#endif
        };
        REG_16 HL;
    };

    REG_16 PC;
    REG_16 SP;
    REG_8 TEMP;
    
private:
    RegisterSet()
    {
        A = 0;
        FLAG = 0;
        BC = 0;
        DE = 0;
        HL = 0;
        SP = 0;
        PC = 0;
        TEMP = 0;
    }

public:
    static RegisterSet * Instance();
};
