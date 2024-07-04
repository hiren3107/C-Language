// Write a Program to print 1 to N using a while loop.

#include <stdio.h>
int main()
{

    int st = 1;
    int end;

    printf("Enter any number:");
    scanf("%d", &end);

    while (st <= end)
    {
        printf("%d\n", st);
        st++;
    }
}