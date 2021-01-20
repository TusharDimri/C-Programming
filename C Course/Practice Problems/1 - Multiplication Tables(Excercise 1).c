#include<stdio.h>

/*

Problem Statement:-
Print the table of the number entered by the user.

For Example:-

Input:-
Enter the number you want multiplication table of:
7

Output:-
7 X 1 = 7 
7 X 2 = 14 
7 X 3 = 21
.
.
.
7 X 10 = 70

*/


int main(){
    int num;
    
    printf("Enter a number you want multiplication table of:\n");
    scanf("%d",&num);
    
    printf("%d X 1 = %d\n", num, num * 1);
    printf("%d X 2 = %d\n", num, num * 2);
    printf("%d X 3 = %d\n", num, num * 3);
    printf("%d X 4 = %d\n", num, num * 4);
    printf("%d X 5 = %d\n", num, num * 5);
    printf("%d X 6 = %d\n", num, num * 6);
    printf("%d X 7 = %d\n", num, num * 7);
    printf("%d X 8 = %d\n", num, num * 8);
    printf("%d X 9 = %d\n", num, num * 9);
    printf("%d X 10 = %d\n", num, num * 10);

    return 0;
}