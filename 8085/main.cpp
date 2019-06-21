#include "InstructionDecoder.h"

using namespace std;

int main()
{
    B = 3;
    C = 1;

    printRegisterContents(B);
    printRegisterContents(C);
    printRegisterContents(BC);

    InstructionDecoder::Instance()->PerformInstruction(Opcode::MOV_B_C);

    printRegisterContents(B);
    printRegisterContents(C);
    printRegisterContents(BC);

    getchar();

    return 0;
}