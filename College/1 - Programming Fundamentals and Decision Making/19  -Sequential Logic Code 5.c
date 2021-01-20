// Given the area, WAP to calculate the quantity of 6 rounds of fencing a circular stadium.
#include<stdio.h>
#include<math.h>
#define PI 3.142

int main(){
    float area;
    float radius;
    float cir;

    printf("Enter the area of the stadium\n");
    scanf("%f", &area);

    radius = sqrt(area / PI);
    cir = 2 * PI * radius; // Circumference of the stadium

    cir = cir * 6;

    printf("Total quantity requires = %0.2f units\n", cir);

    return 0;
}