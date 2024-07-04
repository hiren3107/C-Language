// Write a Program to print odd numbers from N to 1 using a while loop.

#include <stdio.h>
int main()
{

    int st ;
    int end = 1;

    printf("Enter any number:");
    scanf("%d", &st);

    while (st >= end)
    {
        if (st%2 != 0)
        {
            printf("%d\n", st);
        }
        st--;
    }
}