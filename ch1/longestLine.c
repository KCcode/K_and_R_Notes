#include <stdio.h>
#define MAXLINE 1000 /*max input line size*/

int getLine(char line[], int limit);
void copy(char to[], char from[]);

int main(void){

   int len;
   int max;
   char line[MAXLINE];
   char longest[MAXLINE];
   max = 0;
   while( (len = getLine(line, MAXLINE)) > 0){
      if(len > max){
         max = len;
         copy(longest, line);
      }
   }

   if(max > 0){ /*there was a line*/
      printf("%s", longest);
   }
   return 0;
}

int getLine(char line[], int limit){
   int c, i;
   for(i = 0; i < limit-1 && (c = getchar()) != EOF && c != '\n'; i++){
      line[i] = c;
   }
   if(c == '\n'){
      line[i] = c;
      i++;
   }
   line[i] = '\0';
   return i;
}

void copy(char to[], char from[]){
   int i;
   i = 0;
   while(from[i] != '\0'){
      to[i] = from[i];
      i++;
   }
}
