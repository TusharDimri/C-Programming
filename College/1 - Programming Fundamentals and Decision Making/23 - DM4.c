// Smallest of 3 numbers
#include<stdio.h>

int main(){
    int a, b, c;
    int small;
    
    printf("Enter 3 numbers\n");
    scanf("%d%d%d", &a, &b, &c);


    if (a == b && b == c){
        printf("Given numbers are equal\n");
    }
    else
    {
        small = a;

        if (b < small){
            small = b;
        }
        if (c < small){
            small = c;
        }

    printf("%d is the samallest number\n", small);
    }
    
    return 0;
}