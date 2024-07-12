# include<stdio.h>

int main()
{
    int size;
    int sum=0;
    

    printf("Enter the array's row & column size:  ");
    scanf("%d",&size);

    

    int a[size][size];

    printf("Enter array's elements:\n");

    for (int h = 0; h < size; h++)
    {
        for (int i = 0; i < size; i++)
        {
            printf("a[%d][%d] = ",h,i);
            scanf("%d",&a[h][i]);
        }
        
    }

    printf("Normal matrix of anarray\n");

    for (int h = 0; h < size; h++)
    {
        for (int i = 0; i < size; i++)
        {
            printf("%d",a[h][i]);
        }

        printf("\n");
        
    }

    printf("Thetranspos ematrix of anarray\n");

    for (int h = 0; h < size; h++)
    {
        for (int i = 0; i < size; i++)
        {
            printf("%d",a[i][h]);
        }
        printf("\n");
    }

   

}