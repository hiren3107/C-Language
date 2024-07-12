#include <stdio.h>

int main()
{
    int size;

    printf("Enter array size:");
    scanf("%d", &size);

    int a[size],b[size],c[size];

    printf("Enter array A's elements\n");

    for (int h = 0; h < size; h++)
    {
        printf("a[%d] =", h);
        scanf("%d", &a[h]);
    }

    printf("Enter array B's elements\n");

    for (int h = 0; h < size; h++)
    {
        printf("b[%d] =", h);
        scanf("%d", &b[h]);
    }

    printf("Array C is :");

    for (int h = 0; h < size; h++)
    {
        c[h] = a[h] + b[h];
        printf("%d,", c[h]);
    }
}