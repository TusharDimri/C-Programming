// if else if ladder
// Character is lowercase , Uppercase or a Digit,
 #include<stdio.h>

int main(){
    char ch;
     
    printf("Enter a Character\n");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("You entered an Uppercase Character\n");
    }

    else if (ch >= 'a' && ch <= 'z')
    {
        printf("You entered a Lowercase Character\n");
    }

    else if(ch >= '0' && ch <= '9'){
        printf("You entered a Digit\n");
    }
    
    else
    {
        printf("You entered a Special Character\n");
    }
    

    return 0;
}