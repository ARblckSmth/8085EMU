#pragma once

#include "RegisterHelper.h"
#include "Opcode.h"

class InstructionDecoder
{
public:
    static InstructionDecoder * Instance();

    void PerformInstruction(Opcode instruction);
private:
    InstructionDecoder();

    void Move(REG_8& Reg1, REG_8&);
};