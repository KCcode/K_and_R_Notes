
/*
if(expression)
    statement
else if(expression)
    statement
else if(expression)
    statement
else
    statement

think of the last else as a default case
*/

#include <stdio.h>

int binarySearch(int x, int vector[], int n);

int main(void){


    return 0;
}

int binarySearch(int x, int vector[], int n){
    int low, high, mid;
    low = 0;
    high = n - 1;
    while(low <= high){
        mid = (low + high) / 2;
        if(x < v[mid]){ high = mid - 1; }
        else if (x > v[mid]){low = mid + 1;}
        else{ return mid;}
    }
    return -1; 
}

/*
switch(expression){
    case const-expr: statements
                     break;
    case const-expr: statements
                     break;
    default: statements
             break; //defensive programming 
}
*/

#include <stdio.h>
int main(void){
    int c, i, nwhite, nother, ndigit[10];
    nwhite = nother = 0;

    for(i = 0; i < 10; i++){
        ndigit[i] = 0; //initializing the array
    } 

    while((c = getchar()) != EOF){
        switch (c){
            case '0': 
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                ndigit[c - '0']++;
                break;
            case ' ':
            case '\n':
            case '\t':
                nwhite++;
                break;
            default: 
                nother++;
                break;
        }
    }

    printf("digits =");
    for(i = 0; i < 10; i++){
        printf(" %d", ndigit[i]);
    }
    printf(", white speace = %d, other = %d\n", nwhite, nother);

    return 0;
}