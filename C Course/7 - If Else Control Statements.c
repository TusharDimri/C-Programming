#include<stdio.h>

int main(){
    // Types of statements:-
    // 1. if statement
    // 2. if-else statement
    // 3. if-else if ladder.
    // 4. nested if.


    // 1. if statement:-
    int age;
    printf("Enter Your Age\n");
    scanf("%d", &age);
    if(age >= 18)
        printf("You are eligible for driving license\n");
       

    // 2. if-else statement:-
    int a = 34;
    int b = 32;
    if(a>b)
        printf("%d is bigger than %d\n", a, b);
    else
        printf("%d is bigger than %d\n", b, a );


    // 3. if-else if statement:-
    float per  = 82.2;
    if(per >= 0.0 && per <= 70.0){
        printf("D Grade\n");
    }
    else if(per > 70.0 && per <= 80.0){
        printf("C Grade\n");
    }
    else if(per > 80.0 && per <= 90.0){
        printf("B Grade\n");
    }
    else if(per > 90.0 && per <= 100.0){
        printf("A Grade\n");
    }
    else{
        printf("Try Again\n");
    }
    /*
    Note:-
    (a) Using else is not compulsory in if-else if statements.
    (b) The conditions are checked in order and the first condition that evaluates to true(1) is executed.    
    */


    // 4. nested if statements:-
    int n1 = 21;
    int g = 21;
    if(n1 >= 18){
        if(g == 21){
            printf("Congratulations Sir\n");
        }
        else{
            printf("Congratulations Ma'am\n");
        }
    }
    else{
        printf("Better luck next time");
    }
    

    // Quiz:-     
    int ch;
    printf("Enter 1 if you passed both Maths and Science Exam\n");
    printf("Enter 2 if you passed only Maths Exam\n");
    printf("Enter 3 if you passed only Science Exam\n");
    scanf("%d", &ch);
    if (ch==1){
        printf("Congratulations, you receive 45 rupees gift!\n");
    }
    else if(ch == 2 || ch == 3){
        printf("Congratulations, you receive 15 rupees gift!\n");
    }
    else{
        printf("Invalid Choice. Please Try Again\n");
    }
    

    return 0;

}