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

typedef i8 Stack[((u8)(-1))];

typedef enum Opcode{
    MOV=0x01,
    NOP=0x02
};

typedef struct {
   Opcode opcode;
   u8 a[];
   
}Program;


/*
    store the size of an opcode
*/
typedef struct {
     Opcode op;
     i8 size;
}instruction_map;


typedef struct {
     u16 AX;
     u16 BX;
     u16 CX;
     u16 DX;
     u16 SP;
     u16 IP;
}REGISTERS;



typedef struct{
   REGISTERS Registers;

}CPU;

typedef struct VM{
    CPU cpu;
    Stack stack;
    Program *program;
     
}VM;

static instruction_map _instruction_map[]={
           {MOV,0x03},
           {NOP,0x01}
};




#endif