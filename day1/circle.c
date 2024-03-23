#include<stdio.h>

int main(){
    int r,c,a;
    printf("Enter the radius : ");
    scanf ("%d", &r);
    a = 3.14 * r * r;
    c = 2 * 3.14 * r;
    printf("Circumference : %d\nArea : %d", c,a);
}