/*Multidimensional arrays*/

func(int daytab[2][13]);
func(int daytab[][13]);
func(int (*daytab)[13]);

int *daytab[13]; /*array of 13 int pointers, [] higher precedence than * */

/*command line arguments*/
/* int argc, char *argv[] */

#include <stdio.h>
int main(int argc, char *argv[]){

    /* argv[0] = program name so argc at least 1
    print argments in the vector*/
    int i;

    for(i = 1; i < argc; i++){
        printf("%s%s", argv[i], (i < argc - 1) ? " " : " ");
        printf("\n");
    }
    return 0;
}

/* UNIX arguments flags:
    - can be in any order
    - Used with minus( - ) before paramater
    - Example: -except
    - program should be able to run independent of number of flags
*/

