// Find the area of a circl 

#include <stdio.h>
int main ()
{
    const float pi = 3.14;
    int r;
    float ans;

    printf("Enter value of r = ");
    scanf("%d",&r);

    ans = pi * (r * r);

    printf("area of a circle is = %.2f", ans);
    
}