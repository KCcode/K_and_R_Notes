#include <stdio.h>

int main(void){

    int x = 1; y = 2, z[10];
    int *ip;

    ip = &x; // ip point to x, has the value of the address of x
    y = *ip; // y is assigned the value 1
    *ip = 0; // x now contains the value 0
    ip = &z[0]; // ip points to z[0]

    return 0;
}

//Pointers and function arguments
void swap(int x, int y){ /*WRONG - this is only swapping copies*/
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swap(int *px, int *py){ /* interchange *px and *py*/
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}

char message[] = "now is the time"; /* an array of exactly the size of the message*/
char *ptrMessage = "now is the time"; /* a pointer to the first elements in the string */
/* array name is a pointer to the first element of the array*/


