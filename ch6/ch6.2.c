/*Structures and functions*/

struct point makepoint(int x, int y){
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}


/*addpoint: add two points*/
struct point addpoint(struct point p1, struct point p2){
    p1.x += p2.x;
    p1.y += p2.y
    return p1;
}

/* Pointer to structure
Used when passing large structs to a function
*/
struct point origin;
struct point *pp;
pp = &origin;

/*Equivalent forms to access members in struct pointers*/
(*pp).x
pp->x

/*DO NOT assume struct size is == to the sum of all its members 
use sizeof() they can differ because of != alignment requirements
*/

/*choose 1 style for program clarity*/
struct key *binSearch(char *word, struct key *tab, int n);

struct key *
binSearch(char *word, struct key *tab, int n);

/*self referencing structures
Illegal for a structure to contain a instance of itself
but a pointer to the structure is fine
*/
struct node{
    char *word;
    int count;
    struct node *left;
    struct node *right;
;}