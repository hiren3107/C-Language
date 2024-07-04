// Write a Program to print 10 to 1 using a while loop.

#include <stdio.h>
int main()
{

    int st = 10;
    int end = 1;

    while (st >= end)
    {
        printf("%d\n", st);
        st--;
    }
}