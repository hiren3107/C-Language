// Write a Program to find the minimum number from the given 3 numbers using the ternary operator

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter a value of the first number:");
    scanf("%d", &a);
    printf("Enter a value of the second number:");
    scanf("%d", &b);
    printf("Enter a value of the third number:");
    scanf("%d", &c);

    (a < b && a < c) ? printf("The minimum value is: %d", a): (b < c) ? printf("The minimum value is: %d", b): printf("The minimum value is: %d", c);
}