// Check a year for leap year(Alternative Code)
#include<stdio.h>

int main(){
    short year;

    printf("Enter a Year: ");
    scanf("%hi", &year);

    if( ( year % 400 == 0 ) || ( year % 100 != 0 &&  (year % 4 == 0) ) ){
        printf("%hi is a Leap Year\n", year);
    }
    else{
        printf("%hi is not a Leap Year\n", year);
    }

    return 0;
}