#include<stdio.h>

int main(){
    int k=11;
    for (int row = 41; row <=44; row++)
    {
        for (int col = 41; col <= row; col++)
        {
            printf("%d ",k);
            k++;
        }
        
        printf("\n");
    }
    
}