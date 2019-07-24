#include <stdio.h>
#define MAXLINE 10000 /*maximum input line size*/

int getLineLen(char line[], int maxLine);
void copy(char to[], char from []);

/*while there is another line
if it's longer than the previous longest
save it
save its lenght
print longest line
*/

int main(void){

    int length;
    int maxLength;
    char line[MAXLINE];
    char longest[MAXLINE];

    maxLength = 0;
    while((length = getLineLen(line, MAXLINE)) > 0 ){
        if(length > maxLength){
            maxLength = length;
            copy(longest, line);
        }
    }
    if(maxLength > 0){
        printf("%s", longest);
    }
    return 0;
}

int getLineLen(char line[], int maxLine){
    int c, i;
    for( i = 0; i < maxLine && (c = getchar()) != EOF && c != '\n'; i++){
        line[i] = c;
    }
    if( c == '\n'){
        line[i] = c;
        ++i;
    }
    line[i] = '\0'; //marking end of the char array like a string with null terminator
    //char [] format 'hello\n\0'
    return i;
}

void copy(char to[], char from[]){
    int i;
    i = 0;
    while((to[i] = from[i]) != '\0'){
        ++i;
    }
}

// extern keyword refer to 1.10 from book
