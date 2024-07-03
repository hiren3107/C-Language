#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter value of A, B, C & D: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);


    if(a == b && a == c && a == d && b == c && b == d && c == d)
    {
        printf("All Value are Same...");
    }

    else
    {
        if(a > b)
        {
            if(a > c)
            {
                if(a > d)
                {
                    printf("A is Maximum...");
                }
                else
                {
                    printf("D is Maximum...");
                }
            }
            else
            {
                if(c > d)
                {
                    printf("C is Maximum...");
                }
                else
                {
                    printf("D is Maximum...");
                }
            }
        }

        else
        {
            if(b > c)
            {
                if(b > d)
                {
                    printf("B is Maximum...");
                }
                else
                {
                    printf("D is maximum...");
                }
            }
            else
            {
                if(c > d)
                {
                    printf("C is Maximum...");
                }
                else
                {
                    printf("D is Maximum...");
                }
            }
        }
    }
}