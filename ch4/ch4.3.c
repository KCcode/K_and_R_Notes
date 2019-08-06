C Preprocessor -> at compile time

File inclusion

#include "filename.h" // library
#inlcude <filename.h> // user made

Macro substitution
#define name replacement text

Conditional inclusion examples

Example #1 

#if SYSTEM == SYSV
    #define HDR "sysv.h"
#elif SYSTEM == BSD
    #define HDR "bsd.h"
#elif SYSTEM == MSDOS
    #define HDR "msdos.h"
#else
    #define HDR "default.h"
#endif
#include HDR

Example #2

#ifndef HDR
#define HDR

/*contents of hdr.h go here*/

#endif

Example #3
#include <stdio.h>
#include <string.h>
 
#define SIZE 100
 
#define US 0
#define ENGLAND 1
#define FRANCE 2
#define ACTIVE_COUNTRY US
 
int main(void)
{
  #if SIZE > 99
    printf("For 100 plus elements\n");
  #else
    printf("For less than 100 elements\n");
  #endif
 
  #if ACTIVE_COUNTRY == US
    char currency[] = "dollar";
  #elif ACTIVE_COUNTRY == ENGLAND
    char currency[] = "pound";
  #else
    char currency[] = "franc";
  #endif
  printf("Currency: %s\n", currency);
 
  #ifndef PI //#ifndef PI is equivalent to #if ! defined (PI)
    #define PI 3.14
  #else
    printf("PI defined\n", currency);
  #endif
 
  #ifdef PI //#ifdef PI is equivalent to #if defined (PI)
    printf("PI defined\n", currency);
  #else
    #define PI 3.14
  #endif
}
 
OUTPUT
======
For 100 plus elements
Currency: dollar
PI defined