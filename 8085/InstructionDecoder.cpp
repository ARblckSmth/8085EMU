#include "InstructionDecoder.h"

InstructionDecoder* InstructionDecoder::Instance()
{
    static InstructionDecoder* instance = new InstructionDecoder();
    return instance;
}

InstructionDecoder::InstructionDecoder()
{

}

void InstructionDecoder::PerformInstruction(Opcode instruction)
{
    switch (instruction)
    {
    case MOV_B_B:
        Move(B, B);
        break;
    case MOV_B_C:
        Move(B, C);
        break;
    case MOV_B_D:
        Move(B, D);
        break;
    case MOV_B_E:
        Move(B, E);
        break;
    case MOV_B_H:
        Move(B, H);
        break;
    case MOV_B_L:
        Move(B, L);
        break;
    default:
        break;
    }
}

void InstructionDecoder::Move(REG_8& Reg1, REG_8& Reg2)
{
    Reg1 = Reg2;
}