// Find Simple interest

#include <stdio.h>

int main()
{
    int p,n;
    float r,ans;

    printf("Enter value of p = ");
    scanf("%d", &p);
    printf("Enter value of r = ");
    scanf("%f", &r);
    printf("Enter value of n = ");
    scanf("%d", &n);

    ans = (p*r*n)/100;

    printf("Simple interest = %.2f ", ans);
}