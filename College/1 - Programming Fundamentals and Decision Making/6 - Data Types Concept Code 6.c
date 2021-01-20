#include<stdio.h>

int main(){
    // Implicit Type Casting:-
    short int sh;
    int it ; float ft = 8.9;
    sh = it = (ft = ft / 3 ) * 3;
    printf("short int = %d, int = %d, float = %6.2f", sh, it, ft);

    return 0;
}