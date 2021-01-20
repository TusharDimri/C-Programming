// Print numbers from 1 to N
#include<stdio.h>

int main(){
    int i = 1;
    int N;

    printf("Enter the value of the last term: ");
    scanf("%d", &N);

    for(; i<=N; i++){
        printf("%d\n", i);
    }

    return 0;
}