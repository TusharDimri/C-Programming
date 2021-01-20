#include<stdio.h>

int main(){
    short a, b, c;
    short result;
    a = 5, b = 6, c = 7;

    result = a < b ? ++a : b++ ;
    printf("%d\n", result); // ++a => 5 + 1 => 6


    result = a <= b >= c; 
    // Relational Operators get evaluated from left to right
    // a = 6, b = 6, c = 7
    // 6 <=6 >= 7
    // 1 >= 7
    // 0(False)
    printf("%d\n", result); // 0


    result +=  a > b? b++ : ++c;
    //  a = 6, a = 6, c = 7
    // ++c = 7 + 1 = 8
    // 0 + 8 = 8resi
    printf("%d\n", result); // 8


    result = ( a>= b >= c <=a);
    //  a = 6, b = 6, c = 8
    // 6 >= 6 >= 8 <= 6
    // 1 >= 8 <= 6
    // 0 <= 6
    // 1
    printf("%d\n", result); //1


    printf("a = %d, b = %d, c = %d\n", a, b, c);


    return 0;
}