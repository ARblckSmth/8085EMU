#pragma once

#include <iostream>
#include "RegisterSet.h"

extern REG_8& A;    // Accumulator register of 8 bits
extern REG_8& FLAG; // Flag register of 8 bits
extern REG_8& B;    // B register of 8 bits
extern REG_8& C;    // C register of 8 bits
extern REG_8& D;    // D register of 8 bits
extern REG_8& E;    // E register of 8 bits
extern REG_8& H;    // H register of 8 bits
extern REG_8& L;    // L register of 8 bits
extern REG_8& TEMP; // Temporary register of 8 bits

extern REG_16& BC; // BC register (B + C, referenced as pair) of 16 (8 + 8) bits
extern REG_16& DE; // DE register (D + E, referenced as pair) of 16 (8 + 8) bits
extern REG_16& HL; // HL register (H + L, referenced as pair) of 16 (8 + 8) bits
extern REG_16& PC; // PC register of 16 bits
extern REG_16& SP; // SP register of 16 bits

// Flag
//extern uint8_t FLAG_SIGN_SET;
//extern uint8_t FLAG_ZERO_SET;
//extern uint8_t FLAG_AUXILIARY_CARRY_SET;

void printRegisterContents(REG_8 reg);
void printRegisterContents(REG_16 reg);