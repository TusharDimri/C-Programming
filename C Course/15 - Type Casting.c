#include<stdio.h>

int main(){
    /*
    Type Casting Syntax:-
    (type) value;
    For example:-
    float x;
    x = (int) x
    x is now an integer
    */

   int a = 2;
   float b = 54.2;
   float c = 54/5; // Impilicit Type Casting
   float d = 54/5.0; // Explicit Type Casting
   int e = (int) d / 5; // Explicit Type Casting

   printf("The value of a  = %d\n", a);
   printf("The value of b  = %0.2f\n", b);
   printf("The value of c  = %0.2f\n", c);
   printf("The value of d  = %0.2f\n", d);
   printf("The value of e  = %d\n", e);

    return 0;
}