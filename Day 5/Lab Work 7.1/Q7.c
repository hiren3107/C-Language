
// A
// B A
// C B A
// D C B A
// E D C B A

#include <stdio.h>
int main()
{

    for (int h = 'A'; h <= 'E'; h++)
    {
        for (int i = h; i >= 'A'; i--)
        {
            printf("%c ", h);
        }
        printf("\n");
    }
}