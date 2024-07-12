#include <stdio.h>

int main(){
    int size,sum=0;

    printf("Enter array size:");
    scanf("%d",&size);

    int array[size];

    printf("Enter array elements:\n");

    for (int h = 0; h < size; h++)
    {
        printf("array[%d] =", h);
        scanf("%d", &array[h]);
    }
    for (int h = 0; h < size; h++)
    {
        sum = sum + array[h];
    }
    printf("Average of an Array: %d", sum / size);
}