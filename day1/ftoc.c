#include<stdio.h>

int main(){
    int c,f;
    printf("Enter the temp in F : ");
    scanf("%d", &f);
    c = ((f-32)*5)/9;
    printf("%d degree C\n",c);
}