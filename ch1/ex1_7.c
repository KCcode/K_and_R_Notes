#include <stdio.h>

int main(void){
   int c;
   while((c = getchar()) != EOF){
      putchar(c);
   }

   if(c == EOF){
      printf("Value of EOF: %d\n",EOF); /*press ctrl + d to EOF in stdin*/
   }

   return 0;
}
