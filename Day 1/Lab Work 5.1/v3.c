#include <stdio.h>
int main()
{
    float a, b, c, d;

    printf("Enter maths marks a =");
    scanf("%f", &a);
    printf("Enter english marks b =");
    scanf("%f", &b);
    printf("Enter science marks c =");
    scanf("%f", &c);

    d = (a + b + c) / 3;
    printf("Average mark: %f", d);
}