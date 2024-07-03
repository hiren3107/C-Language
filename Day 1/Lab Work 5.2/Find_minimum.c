//Finf a Miminum Value of Given Numbers.

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the Value of A, B & C: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b || b == c || c == a)
    {
        printf("All value are Same...");
    }

    else
    {
        if (a < b)
        {
            if (a < c)
            {
                printf("A is Mimimum...");
            }
            else 
            {
                printf("C is Minimum...");
            }
        }

        else 
        {
            if (b < c)
            {
                printf("B is Minimum...");
            }
            else 
            {
                printf("C is Minimum...");
            }
        }
    }
}