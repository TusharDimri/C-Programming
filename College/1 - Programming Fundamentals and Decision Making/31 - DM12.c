// Second largest of 4 unequal numbers
#include<stdio.h>

int main(){
    int a, b, c, d;
    int l1, l2;

    printf("Enter 4 Numbers\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    
    l1 = a;
    l2 = a;

    if (b > l1)
    {
        l2 = l1;
        l1 = b;
    }
    else if (b < l1)
    {
        l2 = b;
    }
    

    if(c > l1){
        l2 = l1;
        l1 = c;
    }
    else if (c > l2)
    {
        l2 = c;
    }
    

    if (d > l1)
    {
        l2 = l1;
        l1 = d;
    }
    else if(d > l2){
        l2  =d;
    }
    
    
    printf("Largest Number = %d and Second Largest Number = %d\n", l1, l2);

    return 0;
}