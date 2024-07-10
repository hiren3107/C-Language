// - - - - 1
// - - - 2 1
// - - 3 2 1
// - 4 3 2 1
// 5 4 3 2 1
#include <stdio.h>

int main(){
    for (int row = 1; row <=5; row++)
    {
        for (int space = row; space <= 4 ; space++)
        {
            printf(" ");
        }
        
        for (int col = row; col >=1; col--)
        {
            printf("%d",col);
        }
        printf("\n");
    }
    
}