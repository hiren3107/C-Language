// 5 5 5 5 5
// 4 4 4 4
// 3 3 3 
// 2 2 
// 1
 
 # include<stdio.h>

int main(){
    
    for (int row = 5; row >= 1; row--)
    {
          for (int col = 1; col <= row; col++)
            {
                printf("%d",row);
            }

            printf("\n");

    }
    
}