//  print count of +ve and -ve numbers.
//  On entering zero stop the loop and give the count.
#include<stdio.h>

int main(){
    int n;
    int pCount = 0 ;
    int nCount = 0 ;

    do
    {
        printf("Enter any number and enter 0 to quit: ");
        scanf("%d", &n);
        if (n > 0)
        {
            pCount ++ ;
        }
        else if(n < 0)
        {
            nCount ++ ;
        }
        
        
    } while (n != 0);
    
    printf("You entered %d +ve numbers and %d -ve numbers", pCount, nCount);

    return 0;
}