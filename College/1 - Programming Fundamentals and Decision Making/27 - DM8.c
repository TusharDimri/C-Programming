// Check whether given year is a leap year(Alternative Code)
#include<stdio.h>

int main(){
    short year;

    printf("Enter Year: ");
    scanf("%hi", &year);

    if(year % 100 == 0){
        // Year is a Century Year(Outer If Block)

        if (year % 400 == 0){
            printf("%hi is a Leap Year\n", year);
        }
        
        else
        {
            printf("%hi is not a Leap Year\n", year);
        }
    }

    else if(year % 4 == 0){
        printf("%hi is a Leap Year\n", year);
    }

    else
    {
        printf("%hi is not a Leap Year\n", year);
    }
    

    return 0;
}