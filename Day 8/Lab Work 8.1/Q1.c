#include <stdio.h>

int main()
{
    int size;

    printf("Enter array size:");
    scanf("%d", &size);

    int array[size];

    printf("Enter array elements:\n");

    for (int h = 0; h < size; h++)
    {
        printf("array[%d] =", h);
        scanf("%d", &array[h]);
    }

    printf("Length of an Array: %d", size);
}