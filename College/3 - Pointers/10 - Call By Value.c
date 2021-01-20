#include<stdio.h>

int main(){
    void add(int, int); // Function add is local to main so we cannot call it oustide main

    int a = 25;    int b = 10;

    //  Before Function Call :-
    printf("Before Function call, a = %d and b = %d\n", a, b);

    add(a, b);

    // After Function Call:-
    printf("After Function call, a = %d and b = %d\n", a, b);

    return 0;
}

void add(int a, int b){
    a = a + 10;
    b = b + 25;

    printf("Inside Function, a = %d and b = %d\n", a, b);
}