#include<stdio.h>

int main(){
    /*
    GOTO Statement:-
    1. Also called jump statement in C.
    2. Used to transfer program control to a predefined label.
    3. Its use is avoided since is causes problems for the fellow programmers in understanding the code.
    4. GOTO statement is preferable when we need to break multiple loops using a single statement at the same time.
    */

    // Infinite loop using goto statement
    // label:
    //     printf("We are inside label\n");
    // printf("To infinty and beyond\n");
    // goto label;

    
    // label:
    //     printf("We are inside label\n");
    //     goto end;
    // printf("Ignore Me\n");
    // goto label;
    // end:
    //     printf("We are inside end\n");  


    int i, j;
    int ch;
    for (i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
        for (j = 1; j <= 5; j++)
        {
            printf("Enter 0 to exit\n");
            scanf("%d", &ch);
            if (ch == 0){
                goto label2;
            }
        }
    }
    label2:
    printf("We are outside both loops\n");


    return 0;
}