#include <stdio.h>
/*Declaring simbolic constants
#define varaible_name text_replaced
*/
//#define STEP 20 //simbolic constant write in uppercase by convention 

int main(void){

    /*use this format for comments in C
    avoid the double "//
    final line
    "*/
    
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while(fahr <= upper){
        celsius = (5.0/9.0) * (fahr -32.0);
        /* 3.0 print with 3 characters wide and 0 decimals
           6.1 print with 6 characters wide and 1 decimal
        */
        printf("%3.0f, 6.1%f\n", fahr, celsius);
        fahr += step;
    }

    //int i; // have to declare outside of for loop
    //for(i = 0; i < 300; i = i + 20){
        //print something
    //}
    return 0;
}
