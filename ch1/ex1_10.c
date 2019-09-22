#include <stdio.h>

int main(void){
   
   int c;
   while((c = getchar()) != EOF){
      if(c == '\t'){
         putchar('\\');
         putchar('t');
      }
      else if(c == '\b'){
         putchar('\\'); /*to put a backspace use ctrl + h to input backspace since it is "eaten" by the line editing in my OS*/
         putchar('b');
      }
      else if(c == '\\'){
         putchar('\\');
         putchar('\\');
      }
      else{
         putchar(c);
      }
   }
   return 0;
}
