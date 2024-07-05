// Write a Program to print the factorial of number N using a for loop.

#include <stdio.h>

int main()
{
    int n, fac = 1;

    printf("Enter any number :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }

    printf("The factorial is :%d", fac);
}