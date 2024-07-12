#include<stdio.h>

int main(){
    for (int row = 1; row <=5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            if (row==1 || row==3 || col==1)
            {
                printf("* ");
            }
            else if (row==2 && col==5)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        
        printf("\n");
    }
    
}