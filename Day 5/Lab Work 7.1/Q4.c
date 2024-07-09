// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5

#include <stdio.h>
int main()
{

    for (int h = 1; h <= 5; h++)
    {
        for (int i = h; i <= 5; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}