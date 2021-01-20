#include<stdio.h>

int main(){
    /*
    What is a Pointer?
    1. Variable that stores the address of another varible.
    2. Can be of type int, char, array, function, or any other pointer.
    3. Size depends on the architecture. For Example :- 4 bytes or 32 bit.
    4. Pointer in C is denoted using * (asterisk symbol).
    */

    int a = 13;
    printf("The value of a = %d\n", a);

    int *aptr = &a; // aptr is a pointer
    // aptr is a pointer that points to variable a
    printf("The value of a = %d\n", *aptr);

    printf("Address of a = %p\n", (void *) aptr);
    printf("Address of a = %p\n", (void *) &a);

    printf("Address of aptr(Pointer to a) = %p\n", (void *) &aptr);

    /*
    NULL Pointer:-
    1. A pointer which is not assigned any value but NULL is called as NULL Pointer.
    2. In Computer Programming, a null pointer is a pointer that does not point to any object or function.
    3. We can use it to initiate a pointer variable when that pointer variable isn't assigned any valid memory address.
    4. int *ptr = NULL;

    Note:- 
    int *ptr;
    Here, ptr is not a null pointer as it will contain garbage value.    
    */

    int *ptr1 = NULL;  // ptr1 is a NULL pointer
    printf("Value stored in ptr1 = %p\n", (void *) ptr1);

    int *ptr2;  // ptr2 will contain garbage value. This implies that ptr2 is not a null pointer.
    printf("Value stored in ptr2 = %p\n", (void *) ptr2);

    /*
    Uses of Pointer:-
    1. Dynamic Momory Allocation.
    2. Arrays, Functions, and Structures.
    3. Return Multiple Values from a function.
    4. Pointer reduces the code and improves the performance.
    */

    return 0;
}