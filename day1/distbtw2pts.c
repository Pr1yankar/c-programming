#include<stdio.h>
#include<math.h>

int main(){
    int x1, y1, x2, y2, dist;
    printf("Enter first point : ");
    scanf("%d %d", &x1, &y1);
    printf("Enter second point : ");
    scanf("%d %d", &x2, &y2);
    dist = sqrt ( pow((x2-x1),2) + pow ((y2-y1),2) );
    printf("%d", dist);
}