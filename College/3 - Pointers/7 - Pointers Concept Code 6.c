#include<stdio.h>

int main(){
   int si = 100;
   int *iptr = &si;
   int **diptr = &iptr;

   // Printing Addresses:-
   printf("Address OF si = %p\n", (void *) &si);
   printf("Address OF iptr = %p\n", (void *) &iptr);
   printf("Address OF diptr = %p\n\n", (void *) &diptr);
   
   // Addresses within Pointer Variables:-
   printf("Address IN iptr = %p\n", (void *) iptr);
   printf("Address IN diptr = %p\n\n", (void *) diptr);

   // Printing Values
   printf("si = %d\n", si);
   printf("si = %d\n", *(&si));
   printf("si = %d\n", *iptr);
   printf("si = %d\n", **(&iptr));
   printf("si = %d\n", **diptr);
   printf("si = %d\n", ***(&diptr));
   
    return 0;
}