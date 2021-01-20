// Area of a Triangle using Herons Formula
#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c;
    float s;
    float area;

    printf("Enter 3 sides of the triangle\n");
    scanf("%f%f%f", &a, &b, &c);

    if( ! ( (a + b) > c && (b + c) > a && (c + a) > b ) ){
        printf("You entered an invalid triangle\n");
    }

    else
    {
    s = (a + b + c)/2.0;

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of given tringle = %0.3f\n" , area);        
    }
    
    
    

    return 0;
}