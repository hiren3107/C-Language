# include<stdio.h>

int main()
{
    int row,col,size;

    printf("Enter the array's row size: ");
    scanf("%d",&row);

    printf("Enter the array's rcol size: ");
    scanf("%d",&col);

    int a[row][col];

    printf("Enter array's elements:\n");

    for (int h = 0; h < row; h++)
    {
        for (int i = 0; i < col; i++)
        {
            printf("a[%d][%d] = ",h,i);
            scanf("%d",&a[h][i]);
        }
        
    }

    printf("matrix of anarray\n");

    for (int h = 0; h < row; h++)
    {
        for (int i = 0; i < col; i++)
        {
            printf("%d",a[h][i]);
        }
        
    }

}