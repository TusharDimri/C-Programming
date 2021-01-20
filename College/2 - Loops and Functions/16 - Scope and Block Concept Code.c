#include<stdio.h>

int i = 0; // Global Variable

void test(int i){
    printf("In test %d \n", i);
}

void gbl(){
    printf("In gbl %d \n", i); // Here i refers to the global variable i
}

int main(){
    int i = 10; // This i has nothing to do with global variale i.
    // The scope of above varible is limited to the main block.

    printf("In Main %d \n", i);
    {
        int i = -2; 
        // Above variable has nothing to do with global i and ither i in main blovk.]
        // The scope of this i is limited to this block ( i.e inside {} )
        printf("In main Sub-Block %d \n", i);
    }

    test(i); // i inside main block
    gbl();

    return 0;
}