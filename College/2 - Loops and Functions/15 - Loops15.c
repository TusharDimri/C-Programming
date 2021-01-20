/*
Convert Upper Case to Lower Case
*/
#include<stdio.h>

int main(){
    char ch = '1';

    printf("Enter character(s) to flip case and 0 to quit\n");

    while (ch != '0')
    {
        scanf("%c", &ch);

        if(ch >= 'A' && ch <= 'Z'){
            ch += 32;
            printf("Given charater to Upper Case = %c\n", ch);
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            ch -= 32;
            printf("Given charater to Lower Case = %c\n", ch);
        }
        else
        {
            continue;
        }
        
        
    }
    

    return 0;
}