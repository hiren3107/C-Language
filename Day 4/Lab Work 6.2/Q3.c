// Write a Program to print even numbers from 1 to N using a do-while loop

#include <stdio.h>
int main()
{
    int st = 1;
    int end ;

    printf("Enter Any Number :");
    scanf("%d", &end);

    do
    {
        if (st%2==0)
        {
            printf("%d \n", st);
        }
        st++;
    } while (st <= end);
}