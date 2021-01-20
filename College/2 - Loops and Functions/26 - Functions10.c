/*
Variable DATA TYPE and STORAGE CLASSES
auto, global, static and register
SCOPE and LIFETIME

Automatic Variables:-
1. All local variables are automatic by default.
2. auto keyword is optional.

*/
#include<stdio.h>


void test();

int main(){
    auto int i = 10; // The scope of this varibale is limited to this function(main) block
    printf("Address of i in main = %lu \n", (unsigned long)(&i));
    /*We used unsigned long beacuse address of a variable is a large +ve number*/

    for (int j = 0; j < 2; j++)
    {
        printf("Hello World\n");
    }
    
    // printf("Value of j is %d \n", j);
    // Above line will give an error as the scope of variable j is limited to the for loop in which it is defined

    test();

    return 0;
}

void test(){
    auto int i = 100; // The scope of this variable is limited to this function(test) block
    printf("Address of i inside test = %lu \n", (unsigned long)(&i));
}
