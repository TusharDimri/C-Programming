/*
Pattern - 
    1  2  3  4  5
1         #
2      #     #
3   #     #     #

Logic -

I   J<=I
1   1
2   1
    2
3   1
    2
    3
4   1
    2
    3
    4

We can clearly see that I represents the number of rows and J<=I represents the number of elements per row 
*/

#include<stdio.h>
#define ROWS 3 // Number of rows of the pattern that we want

void hash_pattern(){
    int spaces = ROWS;
    int temp = ROWS;
    for (int i = 1; i <= ROWS; i++)
    { 
        while (spaces-- > 1)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("# ");
        }
        printf("\n");
        temp-- ;
        spaces = temp;
    }
    
}

int main(){
    hash_pattern();
    return 0;
}