#ifndef DEFINITIONS_H
#define DEFINITIONS_H

#include <stdio.h>
#include <stdint.h>



typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned int u32;
typedef unsigned long int u64;

typedef char i8;
typedef short int i16;
typedef  int i32;
typedef long int i64;

typedef i8 Stack[1];

typedef enum Opcode{
    MOV=0x01,
    NOP=0x02
};

typedef struct  Instruction{
   Opcode opcode;
   Args a[];
   
}Program;


typedef struct instruction_map{
     Opcode op;
     i8 size;
};


typedef struct REGISTERS{
     u16 AX;
     u16 BX;
     u16 CX;
     u16 DX;
     u16 SP;
     u16 IP;
};

// typedef struct Program{
//     Instruction *instructions;
// };

typedef struct CPU{
   REGISTERS Registers;

};

typedef struct VM{
    CPU cpu;
    Stack stack;
    Program *program;//sequence of instructions????????
     
};




#endif