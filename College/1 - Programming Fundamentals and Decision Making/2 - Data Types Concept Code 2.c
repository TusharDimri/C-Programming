#include<stdio.h>

int main(){
    short int sh;
    long int lg;
    int it;
    float ft;
    double db;
    
    sh = 1 / 3.0;
    printf("short int stores= %d\n", sh);

    sh = lg = it = ft = db = 1 / 3.0;
    printf("short int stores = %d, int stores = %d and long int stores = %d\n", sh, it, lg);
    printf("float stores = %6.2f, double stores = %6.3f\n", ft, db);

    return 0;
}