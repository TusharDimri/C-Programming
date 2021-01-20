// Using ladder if else if to check for leap year
#include<stdio.h>

int main(){
    short year;
    
    printf("Enter Year: ");
    scanf("%hi", &year);
    // %hi - Conversion Speciifer for short data type

    if(year % 400 == 0){
        printf("%hi is a Leap Year\n", year);
    }

    else if(year % 100 == 0){
        printf("%hi is a not Leap Year\n", year);
    }

    else if (year % 4 == 0)
    {
        printf("%hi is a Leap Year\n", year);
    }

    else
    {
        printf("%hi is a not Leap Year\n", year);
    }
    
    /*
    Note:- 
    The Logic of this program is correct only when the conditions are tested in the given order.
    */

    return 0;
}