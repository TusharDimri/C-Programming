//  Multiplication table for a number X 10
#include<stdio.h>

// Funtion Prototype:-
short getNum(void);
void table(short num);

int main(){
    short num;

    num = getNum();

    table(num);


    return 0;
}

short getNum(){
    short num;
    printf("Enter a number: ");
    scanf("%hi", &num);
    return num;
}

void table(short n){
    printf("Printing the table of %hi upto 10\n", n);
    for (short i = 1; i <= 10; i++)
    {
        printf("%hi x %hi = %hi\n", n,  i, n*i);
    }
}