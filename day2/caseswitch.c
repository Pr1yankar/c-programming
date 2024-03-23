#include<stdio.h>

void main(){
    char x;
    printf("Enter a character : ");
    scanf("%c", &x);
    if(x>=65 && x<=90)
        printf("UPPERCASE to lowercase : %c\n", x+32);
    else if(x>=97 && x<= 122)
        printf("lowercase to UPPERCASE : %c\n", x-32);
    else if(x>=48 && x<=57)
        printf("Number\n");
    else   
        printf("Special Character\n");
}