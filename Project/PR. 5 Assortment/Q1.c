#include<stdio.h>

int main(){

    int size;

    printf("Enter the array's size: ");
    scanf("%d",&size);

    int a[size];

    printf("Enter array's elements:\n");


    for (int h = 0; h < size; h++)
    {
        printf("a[%d] =",h);
        scanf("%d",&a[h]);
    }
    
    printf("Negative elements from an Array:");

    for (int h = 0; h < size; h++)
    {
        if (a[h]<=0)
        {
            printf("%d,",a[h]);
        }
        
    }
}