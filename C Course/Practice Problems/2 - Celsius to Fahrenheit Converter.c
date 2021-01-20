#include<stdio.h>

int main(){
    float celsius;
    float fahrenheit;
    printf("Enter temperature in Celsius Scale(Degree Celsius)\n");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;
    printf("Fahrehiet Value = %0.2f degree fahrenheit\n", fahrenheit);

    return 0;
}