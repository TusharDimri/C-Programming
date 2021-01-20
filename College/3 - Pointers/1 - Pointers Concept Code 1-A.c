#include<stdio.h>
int main()
{
    short int si = 10;
    char ch = 'G';

    // Printing the contents of variables
    printf("Value of si is %hi\n", si);
    printf("Value of ch is %c\n", ch);

    // Printing the addresses of variables
    printf("Address of si is %p\n", (void *) &si);
    printf("Address of ch is %p\n", (void *) &ch);
  
    printf("Address of si is %lu\n", (unsigned long) &si);
    printf("Address of ch is %lu\n", (unsigned long) &ch);

    // Printing the contents of variables
    printf("Value of si is %hi\n", *(&si));
    printf("Value of ch is %c\n", *(&ch));
     
    return 0;
}
