#include<stdio.h>

int main(){
    short int sh; // 2 (Local Machine) 
    int it; // 4 (Local Machine)
    long int lg; // 4 (Local Machine)
    long long int llt; // 8 (Local Machine)
    float ft; // 4 (Local Machine)
    double db; // 8 (Local Machine)
    printf("Size occupies by :-\nshort int = %u, int = %u, long int = %u, long long int = %u, float = %u, double = %u\n", sizeof(sh), sizeof(it), sizeof(lg), sizeof(llt), sizeof(ft), sizeof(db));
    printf("Size occupied by char data type = %u bytes", sizeof(char));

    /*
    Output by GDB C Compiler:-                                                               
    short int = 2, long int = 8, long long int = 8, int = 4, float = 4, double = 8
    */                                                                                                     

    return 0;
}