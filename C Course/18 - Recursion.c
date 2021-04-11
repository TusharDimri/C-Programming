#include<stdio.h>

void fact(int a){
    if (a == 1){
        printf(a);    
    }
    else
    {
        return fact(a - 1);
    }
    
}

int main(){
    /*
    What is  a Funtion?
    1. Functions are ued to divide a large program into smaller parts.
    2. A function can be called multiple times to provide reusability and modularity to the program code.
    3. Also called procedure or subroutine.

    What is a Recursive Function?
    1. Recursion is the process in which a function calls a copy of itself to work on a smaller problem.
    2. Any function which calls itself is calleed recursive function.
    3. This makes the life of a programmer easy by dividing a given problem into small steps.
    4. A termination condition is imposed on such functions to stop them from executing copies of themselves forever.
    4. Any problem that can be solved recursively can be solved iteratively.

    Why Recursion?
    Any problem that can be solved recursively can be solved iteratively.However, some problems are best suited to be solved by Recursion.For example:- Fibonacci Series, Factorial Finding, Tower of Hanoi, etc.
    */

    // Example 1 - Factorial Probelem
    int a = 5;
    fact(a);

    return 0;
}