#include "vm.h"
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <assert.h>


VM *create_virtual_machine(Program *p ,u16 program_size){
    VM *machine=malloc(sizeof(struct VM));


   assert((p)&& (program_size));

   // if(p && program_size){
   //      //what do we do??
   // }

    if(!machine){
        fprintf(stderr,"Failed to allocate memory for the virtual machine :%s",strerror(errno));
        return NULL;
    }

    memset(machine,0,sizeof(VM));

    Program *program_pointer=malloc(program_size);
    if(!program_size){
        fprintf(stderr,"Failed to allocate memory for the program pointer: %s ",strerror(errno));
        free(machine);
        return NULL;
    }

    memcpy(program_pointer,p,program_size);
    
    return machine;
}