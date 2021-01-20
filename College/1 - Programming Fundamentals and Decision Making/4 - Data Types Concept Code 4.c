#include<stdio.h>

int main(){
    // Overflow:-

    unsigned int i;
    short int sh;
    int it;
    long int lg;
    float ft;
    double db;

    sh = i = it = lg = ft = db = 100000/3; // Overflow
    printf("short = %d, int = %d,  long = %d\n", sh, it, lg);
    printf("float - %6.2f, double = %6.3f\n", ft, db);
    printf("unsigned int = %u\n", i);


    return 0;
}