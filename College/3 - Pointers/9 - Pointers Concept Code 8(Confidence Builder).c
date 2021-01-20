#include <stdio.h>

int main(){
    int age = 18;
    int *sptr = &age;

    printf("Age via AGE variable = %d\n", age);
    printf("Age via SPTR = %d\n", *sptr); // *(&age)

    int **dptr = NULL;    dptr = &sptr;
    printf("Age via DPTR = %d\n", **dptr); // **(&sptr)

    int ***tptr = NULL;    tptr = &dptr;
    printf("Age via TPTR = %d\n", ***tptr); // ***(&dptr)

    printf("Address via &TPTR = %d", ****(&tptr));

    return 0;
}