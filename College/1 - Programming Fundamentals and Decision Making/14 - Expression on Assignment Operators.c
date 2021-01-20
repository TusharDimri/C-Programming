#include<stdio.h>

int main(){
    int i = 3, j, k = 1;
    
    i *= j = 4 * 2;
    /*
    i *= j = 8
    i *= 8
    i = i * 8
    i = 3 * 8 => 24
    */
    printf("%d\n", i); // 24 

    i == (j = k -= 5 % 3);
    /*
    i = 24, j = 8, k = 1
    i == (j = k = 1 - 2)
    i == (j = k = -1)
    24 == -1 
    We are not storing the value anywhere so the value of i does not get affected.
    */
    printf("%d\n", i); // 24


    j = i = 11 == 12;
    /*
    i = 24, j = 8, k = 1
    j = i = 0(false) 
    j = 0 and i = 0
    */
    printf("%d\n", i); // 0


    i = j += 10 * 7;
    /*
    i = 0, j = 0, k = 1  
    i = j += 70
    i = j = j + 70
    i = j = 0 + 70
    i = 70 and j = 70
    */
    printf("%d\n", i); // 70


    i = j = k = 1;
    
    i = k == j;
    /*
    i = 1(True as k == j == 0)
    */
    printf("%d\n", i); // 1


    i == (k == j);
    /*
    i = 1, k = 0, j = 0
    i == (k == j)
    i == (0 == 0)
    i == 1(True)
    1 == 1
    => 1(True)
    */
    printf("%d\n", i); // 1

    return 0;
}