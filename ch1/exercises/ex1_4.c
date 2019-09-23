#include <stdio.h>

/*celsius to fahr*/

int main(void){

   float fahr, celsius;
   int lower, upper, step;

   lower = 0;
   upper = 300;
   step = 20;
   celsius = lower;

   printf("%7s%6s\n", "fahr", "cel"); /*right justify text by x amount of characters*/
   while(celsius <= upper){
      fahr = (celsius * (9.0/5.0)) + 32.0;
      printf("%7.0f%6.1f\n", fahr, celsius);
      celsius += step;
   }
   return 0;
}
