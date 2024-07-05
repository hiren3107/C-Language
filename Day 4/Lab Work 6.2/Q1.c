// Write a Program to print 1 to 10 using a do-while loop.

#include <stdio.h>
int main(){
    int st = 1;
    int end = 10;

    do
    {
        printf("%d \n", st);
        st++;
    } while (st <= end);
    
}