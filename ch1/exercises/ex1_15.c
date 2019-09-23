#include <stdio.h>
#define UPPER 300
#define STEP 20

float fahrToCel(float fahrenheit);

int main(void){
   float i, answer;
   for(i = 0.0; i <= UPPER; i = i + STEP){
      answer = fahrToCel(i);
      printf("Fahr: %5.1f Cel: %5.1f\n", i, answer);
   }
   return 0;
}  

float fahrToCel(float fahrenheit){
   float celsius;
   celsius = (((5.0)/(9.0)) * fahrenheit) + 32.0;
   return celsius;
}
