0.
// Find the perimrter of the circle

#include <stdio.h>

int main()
{
    int r;
    const float pi=3.14;
    float ans;

    printf("Enter radius = ");
    scanf("%d", &r);
   

    ans = 2*pi*r;

    printf("perimrter of the circle = %.2f ", ans);
}