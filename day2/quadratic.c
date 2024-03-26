#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,d,p,q,r;
    printf("Equation is as ax2 + bx + c\nEnter the values for a,b,and c :");
    scanf("%d %d %d", &a, &b, &c);
    printf("Equation : %dx2 + %dx + %d", a,b,c);
    d = pow(b,2) - (4*a*c);

    if(d>0){
        p = (-b + sqrt(d)) / (2*a);
        q = (-b - sqrt(d)) / (2*a);
        printf("Real Roots Possible\n%d\n%d",p,q);
    }
    else if(d==0){
        r = -b / (2*a);
        printf("\nOne Root Possible\n%d",r);
    }
    else    
        printf("\nNo roots possible\n");
}