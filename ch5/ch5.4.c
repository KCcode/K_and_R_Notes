/*Pointers to functions*/
void (*pf)(int); /* function pointer, returns void and receives int*/
char* (*pf)(int*)

#include <stdio.h>
void someFunction(int arg){
    printf("print something");
}

int main(){
    void (*pf)(int);
    pf = &someFunction;
    (pf)(5);
    return 0;
}

/* 
int (*comp)(void *, void *) 
generic data types for the function this allows for any data type into it
*/