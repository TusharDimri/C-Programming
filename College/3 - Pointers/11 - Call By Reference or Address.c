#include<stdio.h>

int main(){
    void swap(int *, int *); // Swap takes addresses of 2 integer varibles

    int a, b;

    printf("Enter Values of a and b\n");
    scanf("%d%d", &a, &b);

    printf("Before Swapping, a = %d and b = %d\n", a, b);

    swap(&a, &b);

    printf("After Swapping, a = %d and b = %d\n", a, b);

    return 0;
}

void swap(int *a, int *b){ // a(pointer) = &a(a in main) and b(pointer) = &b(b in main)
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}