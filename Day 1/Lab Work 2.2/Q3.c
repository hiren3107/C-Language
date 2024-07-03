// find area of a triangle

#include<stdio.h>

int main (){
    int b, h;
    float ans;

    printf("Enter base value = ");
    scanf("%d", &b);
    printf("Enter height of = ");
    scanf("%d", &h);

    ans = 0.5 * (b * h);

    printf("find area of a triangle = %.2f ", ans);
}