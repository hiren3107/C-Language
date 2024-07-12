# include<stdio.h>

int main()
{
    int row,col;
    

    printf("Enter the array's row size: ");
    scanf("%d",&row);

    printf("Enter the array's rcol size: ");
    scanf("%d",&col);

    int a[row][col],b[row][col],c[row][col];

    printf("Enter array A's elements:\n");

    for (int h = 0; h < row; h++)
    {
        for (int i = 0; i < col; i++)
        {
            printf("a[%d][%d] = ",h,i);
            scanf("%d",&a[h][i]);
        }
        
    }

    printf("Enter array B's elements:\n");

    for (int h = 0; h < row; h++)
    {
        for (int i = 0; i < col; i++)
        {
            printf("b[%d][%d] = ",h,i);
            scanf("%d",&b[h][i]);
        }
        
    }

    printf("Array C is:\n");

    for (int h = 0; h < row; h++)
    {
        for (int i = 0; i < col; i++)
        {
            c[h][i]=a[h][i]+b[h][i];
            printf("%d ",c[h][i]);
        }

        printf("\n");
        
    }



}