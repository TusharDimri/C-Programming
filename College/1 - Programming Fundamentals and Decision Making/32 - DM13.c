//   Calculator Using Switch Case Statements
#include<stdio.h>

int main(){
    int ch;
    int a, b;


    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("Any other key to Quit\n");
    printf("Enter Your Choice: ");
    scanf("%d", &ch);
    
    if (ch >= 1 && ch <=5)
    {
        printf("Enter 2 Numbers\n");
        scanf("%d%d", &a, &b);
    }

    switch (ch)
    {
    case 1:
        printf("Sum = %d\n\n", a + b);
        break;

    case 2:
        printf("Difference = %d\n\n", a - b);
        break;

    case 3:
        printf("Product = %d\n\n", a * b);
        break;

    case 4:
        printf("Divisor = %d\n\n", a / b);
        break;

    case 5:
        printf("Modulus = %d\n\n", a % b);
        break;
    
    default:
        printf("Quitting ...\n");
        break;
    }
  
    return 0;
}