// Write a Program to print leap years between two given numbers using a while loop.

#include <stdio.h>
int main()
{

    int st;
    int end;

    printf("Enter starting year:");
    scanf("%d", &st);
    printf("Enter Ending year:");
    scanf("%d", &end);

    while (st <= end)
    {
        if (st % 4 == 0)
        {
            printf("%d\n", st);
        }
        st++;
    }
}