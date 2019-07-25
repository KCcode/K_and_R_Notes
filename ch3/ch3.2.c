#include <stdio.h>
#include <ctype.h>

/*atoi: convert s to integer; version2*/

int atoi(char s[]);

int main(void){

    return 0;
}

int atoi(char s[]){
    int i, n , sign;
    for(i = 0; isSpace(s[i]); i++) /* skip white space */
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if(s[i] == '+' || s[i] == '-') /* skip sign */
        i++;
    for(n = 0; isDigit(s[i]; i++))
        n = 10 * n + (s[i] - '0');
    
    return sign * n;
}