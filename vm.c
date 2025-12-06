#include "vm.h"

VM *create_virtual_machine(void){
    VM *machine=malloc(sizeof(struct VM));

    if(!machine){
        fprintf(stderr,"Failed to allocate memory for the virtual machine :%s",strerror(errno));
        return NULL;
    }

    memset(machine,0,sizeof(VM));

    return machine;
}