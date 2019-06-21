#include "RegisterHelper.h"

REG_8&    A = RegisterSet::Instance()->A;
REG_8& FLAG = RegisterSet::Instance()->FLAG;
REG_8&    B = RegisterSet::Instance()->B;
REG_8&    C = RegisterSet::Instance()->C;
REG_8&    D = RegisterSet::Instance()->D;
REG_8&    E = RegisterSet::Instance()->E;
REG_8&    H = RegisterSet::Instance()->H;
REG_8&    L = RegisterSet::Instance()->L;
REG_8& TEMP = RegisterSet::Instance()->TEMP;

REG_16&  BC = RegisterSet::Instance()->BC;
REG_16&  DE = RegisterSet::Instance()->DE;
REG_16&  HL = RegisterSet::Instance()->HL;
REG_16&  PC = RegisterSet::Instance()->PC;
REG_16&  SP = RegisterSet::Instance()->SP;

void printRegisterContents(REG_8 reg)
{
    std::cout << (REG_16)reg << std::endl;
}

void printRegisterContents(REG_16 reg)
{
    std::cout << reg << std::endl;
}