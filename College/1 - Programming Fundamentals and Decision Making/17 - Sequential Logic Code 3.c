// WAP to calculate the area of a a cicle given the radius 
#include<stdio.h>
#define PI 3.142

int main(){
    float radius;
    float area;

    printf("Enter the radius of the circle\n");
    scanf("%f", &radius);

    area = PI * radius * radius;
    printf("Area of circle = %0.2f units\n", area);

    return 0;
}