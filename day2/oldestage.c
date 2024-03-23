#include<stdio.h>

void main(){
    int a,b,c;
    printf("Enter the age of Mr. A : ");
    scanf("%d", &a);
    printf("Enter the age of Mr. B : ");
    scanf("%d", &b);
    printf("Enter the age of Mr. C : ");
    scanf("%d", &c);

    if(a>b && a>c)
        printf("Mr. A is oldest\n");
    else if(a>b && a>c)
        printf("Mr. B is oldest\n");
    else
        printf("Mr. C is oldest\n");

}