// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

#include<stdio.h>
int main(){

    for (int h = 1; h <= 5; h++)
    {
        for (int i = h; i >=1 ; i--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    
}
