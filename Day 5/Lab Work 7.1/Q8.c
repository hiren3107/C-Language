
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include <stdio.h>
int main()
{
    int num = 1;

    for (int h = 1; h <= 5; h++)
    {
        for (int i = h; i >= 1; i--)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}