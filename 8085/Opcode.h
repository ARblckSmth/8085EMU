#pragma once

enum Opcode
{
    NOP = 0, // 00
    LXI_B,
    STAX_B,
    INX_B,
    INR_B,
    DCR_B,
    MVI_B,
    RLC = 7, // 07
    
    DAD_B = 9, // 09
    LDAX_B,
    DCX_B,
    INR_C,
    DCR_C,
    MVI_C,
    RRC = 15, // 0F
    
    LXI_D = 17, // 11
    STAX_D,
    INX_D,
    INR_D,
    DCR_D,
    MVI_D,
    RAL = 23, // 17
    
    DAD_D = 25, // 19
    LDAX_D,
    DCX_D,
    INR_E,
    DCR_E,
    MVI_E,
    RAR = 31, // 1F

    RIM = 32, // 20
    LXI_H,
    SHLD,
    INX_H,
    INR_H,
    DCR_H,
    MVI_H,
    DAA = 39, // 27

    DAD_H = 41, // 29
    LHLD,
    DCX_H,
    INR_L,
    DCR_L,
    MVI_L,
    CMA = 47, // 2F

    SIM = 48, // 30
    LXI_SP,
    STA,
    INX_SP,
    INR_M,
    DCR_M,
    MVI_M,
    STC = 55, // 37

    DAD_SP = 57, // 39
    LDA,
    DCX_SP,
    INR_A,
    DCR_A,
    MVI_A,
    CMC = 63, // 3F

    MOV_B_B = 64, // 40
    MOV_B_C,
    MOV_B_D,
    MOV_B_E,
    MOV_B_H,
    MOV_B_L,
    MOV_B_M,
    MOV_B_A = 71, // 47

    MOV_C_B = 72, // 48
    MOV_C_C,
    MOV_C_D,
    MOV_C_E,
    MOV_C_H,
    MOV_C_L,
    MOV_C_M,
    MOV_C_A = 79, // 4F

    MOV_D_B = 80, // 50
    MOV_D_C,
    MOV_D_D,
    MOV_D_E,
    MOV_D_H,
    MOV_D_L,
    MOV_D_M,
    MOV_D_A = 87, // 57

    MOV_E_B = 88, // 58
    MOV_E_C,
    MOV_E_D,
    MOV_E_E,
    MOV_E_H,
    MOV_E_L,
    MOV_E_M,
    MOV_E_A = 95, // 5F

    MOV_H_B = 96, // 60
    MOV_H_C,
    MOV_H_D,
    MOV_H_E,
    MOV_H_H,
    MOV_H_L,
    MOV_H_M,
    MOV_H_A = 103, // 67

    MOV_L_B = 104, // 68
    MOV_L_C,
    MOV_L_D,
    MOV_L_E,
    MOV_L_H,
    MOV_L_L,
    MOV_L_M,
    MOV_L_A = 111, // 6F

    MOV_M_B = 112, // 70
    MOV_M_C,
    MOV_M_D,
    MOV_M_E,
    MOV_M_H,
    MOV_M_L,
    HLT,
    MOV_M_A = 119, // 77

    MOV_A_B = 120, // 78
    MOV_A_C,
    MOV_A_D,
    MOV_A_E,
    MOV_A_H,
    MOV_A_L,
    MOV_A_M,
    MOV_A_A = 127, // 7F

    ADD_B = 128, // 80
    ADD_C,
    ADD_D,
    ADD_E,
    ADD_H,
    ADD_L,
    ADD_M,
    ADD_A = 135, // 87

    ADC_B = 136, // 88
    ADC_C,
    ADC_D,
    ADC_E,
    ADC_H,
    ADC_L,
    ADC_M,
    ADC_A = 143, // 8F

    SUB_B = 144, // 90
    SUB_C,
    SUB_D,
    SUB_E,
    SUB_H,
    SUB_L,
    SUB_M,
    SUB_A = 151, // 97

    SBB_B = 152, // 98
    SBB_C,
    SBB_D,
    SBB_E,
    SBB_H,
    SBB_L,
    SBB_M,
    SBB_A = 159, // 9F

    ANA_B = 160, // A0
    ANA_C,
    ANA_D,
    ANA_E,
    ANA_H,
    ANA_L,
    ANA_M,
    ANA_A = 167, // A7

    XRA_B = 168, // A8
    XRA_C,
    XRA_D,
    XRA_E,
    XRA_H,
    XRA_L,
    XRA_M,
    XRA_A = 175, // AF

    ORA_B = 176, // B0
    ORA_C,
    ORA_D,
    ORA_E,
    ORA_H,
    ORA_L,
    ORA_M,
    ORA_A = 183, // B7

    CMP_B = 184, // B8
    CMP_C,
    CMP_D,
    CMP_E,
    CMP_H,
    CMP_L,
    CMP_M,
    CMP_A = 191, // BF

    RNZ = 192, // C0
    POP_B,
    JNZ,
    JMP,
    CNZ,
    PUSH_B,
    ADI,
    RST_0,
    RZ,
    RET,
    JZ = 202, // CA

    CZ = 204, // CC
    CALL,
    ACI,
    RST_1 = 207, // CF

    RNC = 208, // D0
    POP_D,
    JNC,
    OUT,
    CNC,
    PUSH_D,
    SUI,
    RST_2,
    RC = 216, // D8

    JC = 218, // DA
    IN,
    CC = 220, // DC

    SBI = 222, // DE
    RST_3 = 223, // DF

    RPO = 224, // E0
    POP_H,
    JPO,
    XTHL,
    CPO,
    PUSH_H,
    ANI,
    RST_4,
    RPE,
    PCHL,
    JPE,
    XCHG,
    CPE = 236, // EC

    XRI = 238, // EE
    RST_5 = 239, // EF

    RP = 240, // F0
    POP_PSW,
    JP,
    DI,
    CP,
    PUSH_PSW,
    ORI,
    RST_6,
    RM,
    SPHL,
    JM,
    EI,
    CM = 252, // FC

    CPI = 254, // FE
    RST_7 = 255, // FF
};