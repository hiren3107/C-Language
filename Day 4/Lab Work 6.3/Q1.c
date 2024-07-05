// Write a Program to print the sum of all numbers from 1 to N using a for loop.

#include <stdio.h>

int main(){
    int n,sum = 0;

    printf("Enter any number :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("The sum of all numbers :%d", sum);
}