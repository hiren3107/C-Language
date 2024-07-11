#include <stdio.h>

int space;
int main()
{
    for (int row = 1; row <= 5; row++)
    {
         for (int space = 5-row; space >= 1; space--)
        {
            printf(" ");
        }

        for (int col = 1; col <= row; col++)
        {
            printf("*");
        }

        for (int col = row-1; col >= 1; col--)
        {
            printf("*");
        }
        printf("\n");
    }
}