// Write a Program to print the Fibonacci series up to N numbers using a for loop.
// 0,1,1,2,3

#include <stdio.h>

int main(){
    int a = 1;
    int b = -1;
    int c,num;

    printf("Enter any number :");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        c = a + b; // 0 + 1 = 1
        printf("%d,", c);//1
        b = a;//1
        a = c; //0
    }
    
}