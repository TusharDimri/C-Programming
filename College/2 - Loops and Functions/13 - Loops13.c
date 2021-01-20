// Print the series: 11 22 33 44 55 .. NN
#include<stdio.h>

int main(){
    int i, N;
     
    printf("Enter the last term of the series: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        printf("%d%d ", i, i);
    }
    
    return 0;
}