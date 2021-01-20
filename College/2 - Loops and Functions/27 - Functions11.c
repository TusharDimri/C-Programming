// Automatic, Statis and Global Variables Concept Code

#include<stdio.h>

int i = 10; // This is a Global Variable

void test();
void gbl();

int main(){
    for (int i = 1; i < 2; i++) // Scope of this i is limited to the for loop block
    {
        printf("Value of i in main = %d\n", i);
    }

    test();
    test();

    i = 90; // Here we modified the global variable i
    gbl();

    return 0;
}

void test(){
    static int i = 0; // Scope of this varibale is limited to this block(test function)
    // Above variable is allocated for lifetime as it is static so it does not get dealocated after we exit this function
    i = i + 10;

    printf("Value of i inside test = %d\n", i);
    /*
    The value of i is not reinitialized on every function call as it is a static varibale.
    So, the value of the variable is retained on every function exit. 
    */
}

void gbl(){
    printf("Value of global i = %d\n", i);
}