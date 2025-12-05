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

typedef struct REGISTERS{
     u16 AX;
     u16 BX;
     u16 CX;
     u16 DX;
     u16 SP;
     u16 IP;
};

typedef struct CPU{
   REGISTERS Registers;

};

typedef struct VM{
    CPU cpu;
     
};




#endif