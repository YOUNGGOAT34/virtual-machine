#ifndef DEFINITIONS_H
#define DEFINITIONS_H



#define OP_COUNT 3

typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned int u32;
typedef unsigned long int u64;

typedef char i8;
typedef short int i16;
typedef  int i32;
typedef long int i64;

typedef i8 Stack[((u32)(-1))];

typedef enum {
    MOV=0x01,
    NOP=0x02,
    
}Opcode;

typedef struct {
   Opcode opcode;
   u8 a[];
   
}Instruction;


typedef struct {
     u16 AX;
     u16 BX;
     u16 CX;
     u16 DX;
     u16 SP;
     u16 IP;
}REGISTERS;


typedef Instruction* Program;


typedef struct{
   REGISTERS Registers;

}CPU;

typedef struct VM{
    CPU cpu;
    Stack stack;
    Program program;
     
}VM;


extern const u8 instruction_map[];

#endif