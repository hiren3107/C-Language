# include<stdio.h>

int main()
{
    int row,col,size;
    float Average;
    int sum=0;

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

    for (int h = 0; h < row; h++)
    {
        for (int i = 0; i < col; i++)
        {
            sum=sum+a[h][i];
        }
        
    }
     
    size=row+col;

    Average=(float)sum/size;
    
    printf("Average of an Array: %.2f",Average);



}