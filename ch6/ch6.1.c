/*declaring structures*/

/*1.*/
struct Distance{
    int feet;
    float inch;
} /*d1, d2 can declare Distance structs here as well*/ 

int main(){
    structure Distance d1, d2;
    d1.feet;
    d1.inch;
}

/*2.*/
typedef struct Distance{
    int feet;
    float inch;
} distances;

int main(){
    distances d1, d2;
    d1.feet;
    d1.inch;
}

/*
Legal operations on a structure
Copying it
Assigning it as a unit
taking its address & 
accessing its members

DO NOT COMPARE THEM
Can only be done comparing member by member
*/