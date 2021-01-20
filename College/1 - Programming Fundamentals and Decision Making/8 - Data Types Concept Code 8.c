#include<stdio.h>

int main(){
    // Explicit Type Casting
    short int sh;
    int it ; float ft = 8.9;
    sh = it = ( ft = (int)ft / 3.0 ) * 3.3;
    printf("short int = %d, int = %d, float = %0.2f", sh, it, ft);
    return 0;
}