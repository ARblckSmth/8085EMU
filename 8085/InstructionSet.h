#pragma once

enum Instruction
{
    // Control Instructions
    NOP, // No operation
    HLT, // Halt and enter wait state
    DI,  // Disable interrupts
    EI,  // Enable interrupts
    RIM, // Read interrupt mask
    SIM, // Set interrupt mask

    // Logical Instructions
    CMP, // Compare the register/memory with accumulator
    CPI, // Compare immediate with accumulator
    ANA, // Logical AND register/memory with accumulator
    ANI, // Logical AND immediate with accumulator
    XRA, // Exclusive OR register/memory with accumulator
    XRI, // Exclusive OR immediate with accumulator
    ORA, // Logical OR register/memory with accmulator
    ORI, // Logical OR immediate with accumulator
    RLC, // Rotate the accumulator left
    RRC, // Rotate the accumulator right
    RAL, // Rotate the accumulator left through the carry
    RAR, // Rotate the accumulator right through the carry
    CMA, // Complement accumulator
    CMC, // Complement carry flag
    STC, // Set carry flag

    // Branching Instructions
    JMP, // Jump unconditionally
    JC,  // Jump on carry       (CY = 1)
    JNC, // Jump on no carry    (CY = 0)
    JZ,  // Jump on zero        (Z = 1)
    JNZ, // Jump on no zero     (Z = 0)
    JPE, // Jump on parity even (P = 1)
    JPO, // Jump on parity odd  (P = 0)
    JM,  // Jump on minus       (S = 1)
    JP,  // Jump on positive    (S = 0)
    
    CALL, // Call unconditionally
    CC,   // Call on carry       (CY = 1)
    CNC,  // Call on no carry    (CY = 0)
    CZ,   // Call on zero        (Z = 1)
    CNZ,  // Call on no zero     (Z = 0)
    CPE,  // Call on parity even (P = 1)
    CPO,  // Call on parity odd  (P = 0)
    CM,   // Call on minus       (S = 1)
    CP,   // Call on positive    (S = 0)

    RET, // Return unconditionally
    RC,  // Return in carry (CY = 0) 
    RNC, // Return on no carry (CY = 0)
    RZ,  // Return on zero (Z = 1)
    RNZ, // Return on no zero (Z = 0)
    RPE, // Return on parity even (P = 1)
    RPO, // Return on parity odd (P = 0)
    RM,  // Return on minus (S = 1)
    RP,  // Return on positive (S = 0)

    // Arithmetic Instructions
    ADD, // Add register/memory to the accumulator
    ADC, // Add register/memory to the accumulator with carry
    ADI, // Add immedite to accumulator
    ACI, // Add immedite to accumulator with carry
    DAD, // Add register pair to HL register
    SUB, // Subtract register/memory from accumulator
    SBB, // Subtract register/memory from accumulator using borrow (previous carry)
    SUI, // Subtract immediate from accumulator
    SBI, // Subtract immediate form accumulator using borrow (previous carry)
    INR, // Increment register/memory by 1
    INX, // Increment register pair by 1
    DCR, // Decrement register/memory by 1
    DCX, // Decrement register pair by 1
    DAA, // Decimal adjust accumulator

    // Data Transfer Instructions
    MOV,
    MVI,
    LDA,
    STA,
    LHLD,
    SHLD,
    LXI, // Load the register pair with immediate
    LDAX,
    STAX,
    XCHG,
    PUSH,
    POP,
    IN,
    OUT

};