//  Print N number of Asterisks (*) X number of times per line.
#include<stdio.h>

void printStar(int N, int x){
    int j = 1;
    for (int i = 1; i <= N; i++, j++)
    {
        printf("*");
        if (j == x)
        {
            printf("\n");
            j = 0;
        }
    }
    
}

int main(){
    int N;
    int x;

    printf("Enter the number of Aestrisks that you print(vertical): ");
    scanf("%d", &N);

    printf("Enter the number of Aestrisks that you want to be printed per line: ");
    scanf("%d", &x);

    printStar(N, x);

    return 0;
}