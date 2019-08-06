//Dynamic memory allocation

/*malloc:"memory allocation" return pointer to void that can be cast to another type; null if memory not allocated
ptr = (cast-type*) malloc(byte-size)
*/
ptr = (int *) malloc(100 * sizeof(int));

/*calloc:"contiguous allocation" dynamically allocate the specified number of blocks of memory 
initializes to default value 0
return pointer to void that can be cast to another type; null if memory not allocated
ptr = (cast-type*) calloc(n, element_size)
*/
ptr = (float *) calloc(25, sizeof(float));

//realloc: dynamically change the memory allocation of a previously allocated memory
ptr = realloc(ptr, newSize);

//free: dynamically de-allocate memory
free(ptr);

//Typedef
typedef struct node *treePtr;
typedef struct node{
    char *word;
    int count;
    treePtr left;
    treePtr right;
}treenode;

// this creates two keywords one for a struct and another one for a pointer
//Example
treePtr talloc(void){
    return (treePtr) malloc(sizeof(treenode));
}

/*Unions and bitfields */