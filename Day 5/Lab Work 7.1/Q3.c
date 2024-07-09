// 5
// 4 4
// 3 3 3
// 2 2 2 2
// 1 1 1 1 1

#include <stdio.h>
int main()
{

    for (int h = 5; h >= 1; h--)
    {
        for (int i = h; i <= 5; i++)
        {
            printf("%d ", h);
        }
        printf("\n");
    }
}