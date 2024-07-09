// 1 0 1 0 1
// 1 0 1 0
// 1 0 1
// 1 0
// 1

#include <stdio.h>
int main()
{

    for (int h = 5; h >= 1; h--)
    {
        for (int i = 1; i <= h; i++)
        {
            if (i%2==0)
            {
                printf("0 ");
            }
            else{
                printf("1 ");
            }
        }
        printf("\n");
    }
}