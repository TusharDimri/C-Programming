// Print the Fibonacci Sequence in a given range.
// 0 1 1 2 3 5 8 13 19 ...  N
#include<stdio.h>

void fibo(int, int);

int main(){
    int r1, r2;

    printf("Enter the range between which you want to print the fibonacci sequence \n");
    scanf("%d%d", &r1, &r2);

    fibo(r1, r2);

    return 0;
}

void fibo(int r1, int r2){
    int first = 0;
    int second = 1;
    int next = 0;

    while (next <= r2)
    {
        if (next >= r1)
        {
            printf("%d ", next);
        }
        first = second; 
        second = next;
        next = first + second;        
    }
    

}