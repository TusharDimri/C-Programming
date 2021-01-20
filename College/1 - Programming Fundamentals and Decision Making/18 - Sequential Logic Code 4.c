// Calculate the area of a traingle using Heron's formula (Without Validation) 
#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c;
    float area;
    float s;

    printf("Enter the values of the three sides of the triangle\n");
    scanf("%f%f%f", &a, &b, &c);

    s = (a + b + c) / 2.0 ;
    area = sqrt(s * (s-a) * (s-b) * (s-c));

    printf("Area of triangle = %0.2f units\n", area);
    

    return 0;
}