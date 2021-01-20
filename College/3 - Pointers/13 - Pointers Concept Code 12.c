// Returning Address of a variable using a function
#include<stdio.h>

int *sum(int *, int *, int *);

int main(){
    int a = 30, b = 20, add;
    int *result;

    result = sum(&a, &b, &add);

    printf("Sum = %d", *result);

    return 0;
}

int *sum(int *x, int *y, int *ans){
    
    *ans = *x + *y;

    return ans;

}