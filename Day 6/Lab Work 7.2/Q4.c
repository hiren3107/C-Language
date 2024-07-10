// 1 0 1 0 1
// - 0 1 0 1
// - - 1 0 1
// - - - 0 1 
// - - - - 1
#include <stdio.h>

int main()
{
    for (int row = 5; row >= 1; row--)
    {
        for (int space = 5 ; space > row; space--)
        {
            printf(" ");
        }

        for (int col = row; col >= 1; col--)
        {
            if (col%2==0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
            
        }
        printf("\n");
    }
}