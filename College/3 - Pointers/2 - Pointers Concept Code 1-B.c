#include<stdio.h>

int main(){
    int age = 18;

    printf("Content of age is %d\n", age);
    printf("Address of age is %lu\n", (unsigned long) &age);
    printf("Content of age using De-Reference Opertator is %d\n\n", *(&age));

    int *ptr ;
    ptr = &age;

    printf("Address OF ptr is %lu \n", (unsigned long) &ptr);
    printf("Address(of age) stored IN ptr is %lu \n", (unsigned long) ptr);
    printf("Content/Value referred/pointed by ptr = %d", *ptr);
    // Above Exression (*ptr) is equivalent to => *(&age)

    return 0;
}