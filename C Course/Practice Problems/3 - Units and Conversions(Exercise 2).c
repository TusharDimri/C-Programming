/*
kms to miles
inches to feet
cms to inches
pound to kgs
inches to metres
User can choose on the following conversion and enter the value.
Based on user's choice, your program will convert the given value and display it
*/
#include<stdio.h>

int main(){
    float kms, miles;
    float inches, feet;
    float cms;
    float pounds, kgs;
    float metres;
    int ch;
    char c;


    label:

    printf("1 - Kilometres to Miles\n");
    printf("2 - Inches to Foot\n");
    printf("3 - Centimetres to Inches\n");
    printf("4 - Pounds to Kilograms\n");
    printf("5 - Inches to Metres\n");
    printf("Enter your choice\n");
    scanf("%d", &ch);
    
    switch (ch)
    {
    case 1:
        printf("Enter value in Kilometres\n");
        scanf("%f", &kms);
        miles = kms / 1.609;
        printf("%0.2f Kilometres = %0.2f Miles\n", kms, miles);
        break;

    case 2:
        printf("Enter value in inches\n");
        scanf("%f", &inches);
        feet = inches / 12;
        printf("%0.2f inches = %0.2f feet\n", inches, feet);
        break;

    case 3:
        printf("Enter value in centimetres\n");
        scanf("%f", &cms);
        inches = cms / 2.54;
        printf("%0.2f centimetres = %0.2f inches\n", cms, inches);
        break;

    case 4:
        printf("Enter value in pounds\n");
        scanf("%f", &pounds);
        kgs = pounds / 2.205;
        printf("%0.2f pounds = %0.2f kilograms\n", pounds, kgs);
        break;

    case 5:
        printf("Enter value in inches\n");
        scanf("%f", &inches);
        metres = inches / 39.37;
        printf("%0.2f inches = %0.2f metres\n", inches, metres);
        break;
    
    default:
        printf("Invalid Choice\n");
        break;
    }

    printf("\n\nPress any key to continue and press q to quit\n\n");
    if (c == 'q' || c == 'Q')
    {
        goto end;
    }
    else
    {
        goto label;
    }
    
    end:

    return 0;
}