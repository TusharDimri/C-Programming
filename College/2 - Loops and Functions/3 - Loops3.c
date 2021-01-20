// Rocket Launch Count Down
#include<stdio.h>

int main(){
    int N = 10;

    printf("Start of Rocket Launch Countdown\n");

    for (; N >= 0; N--)
    {
        printf("%d\n", N);
    }

    printf("Blast Off ...\n");
    

    return 0;
}