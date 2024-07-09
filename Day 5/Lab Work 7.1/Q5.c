// 1 1 1 1 1
// 2 2 2 2
// 3 3 3
// 4 4
// 5

#include <stdio.h>
int main()
{

    for (int h = 1; h <= 5; h++)
    {
        for (int i = h; i <= 5; i++)
        {
            printf("%d ", h);
        }
        printf("\n");
    }
}