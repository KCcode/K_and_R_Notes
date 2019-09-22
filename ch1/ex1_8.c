#include <stdio.h>

int main(void){
   /*program to count blanks, tabs, and newlines*/
   long blanks, tabs, newlines;
   blanks = 0;
   tabs = 0;
   newlines = 0;

   int c;
   while((c = getchar()) != EOF){
      if(c == ' '){
         blanks++;
      }

      else if( c == '\t'){
         tabs++;
      }

      else if( c == '\n'){
         newlines++;
      }
   }
   
   printf("blanks: %ld, tabs: %ld, newlines: %ld\n", blanks, tabs, newlines);

   return 0;
}
