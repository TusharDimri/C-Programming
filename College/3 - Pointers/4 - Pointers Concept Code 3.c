#include<stdio.h>

int main(){
    short si, sj, prod;

    short *iptr = &si; // iptr is a pointer to si i.e it stores the address of si
    short *jptr = &sj; // jptr is a pointer to sj i.e. it stores the address of sj

    printf("Enter 2 numbers\n");
    // scanf("%hi%hi", &si, &sj);
    scanf("%hi%hi", iptr, jptr);

    prod = *iptr * *jptr; // Multiplication of *iptr(si) and *jptr(sj)

    printf("Product = %hi\n", prod);


    return 0;
}