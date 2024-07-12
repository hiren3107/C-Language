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


    for (int h = 0; h < size; h++)
    {
        for (int i = 0; i < size; i++)
        {
            if (h==0 || i==0 || i==4 || h==4)
            {
                printf("%d",a[h][i]);
            }
            else{
                printf(" ");
            }
            
        }

        printf("\n");
        
    }


    for (int h = 0; h < size; h++)
    {
        for (int i = 0; i < size; i++)
        {
            if (h==0 || i==0 || i==4 || h==4)
            {
                sum=sum+a[h][i];
            }
        }
    }

    printf("ThesumofboundaryelementsofanArray:%d",sum);

}