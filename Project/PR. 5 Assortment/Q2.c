# include<stdio.h>

int main()
{
    int row,col,h,i;


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

    int big=a[h][i];

    for (int h = 0; h < row; h++)
    {
        for (int i = 0; i < col; i++)
        {
            if (a[h][i] > big)
            {
                big=a[h][i];
            }
            
        }
    }

    printf("The largest element is: %d",big);
}