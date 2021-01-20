// Printing Floyd's Triangle
/*
1
2 3
3 4 5
5 6 7 9
9 10 11 12 13 ...
*/
#include<stdio.h>

void floyd(short rows){
    int k = 1;
    for (short i = 1; i <= rows; i++)
    {
        for (short j = 1; j <= i; j++)
        {
            printf("%d ", k++);
            // k ++;
            if (i == j)
            {
                printf("\n");
            }
            
        }
        
    }
    
}

int main(){
    
    short N;

    printf("Enter the number of rows that tou want to see: ");
    scanf("%hi", &N);

    floyd(N);

    return 0;
}