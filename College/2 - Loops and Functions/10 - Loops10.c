//  Calculating Factorial of a number
#include<stdio.h>

int main(){
    int n;
    int i;
    long fac = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 1)
    {
        fac *= n ;
        n-- ;

    }

    printf("Factorial of %d = %ld\n", n, fac);
    

    return 0;
}
