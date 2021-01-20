/*
Print the pattern:-
1
22
333
4444
55555
.
.
.
NNNN...
*/
#include<stdio.h>

int main(){
    int i, j;
    int N;

    printf("Enter the last term of the pattern: ");
    scanf("%d", &N);

    for (i = 1; i <=N; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
            if (i == j)
            {                
                printf("\n");
            }
        }
        // printf("\n"); My logic(Replaced by logic taught in the class)
        
    }

    return 0;
}