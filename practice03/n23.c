#include <stdio.h>

int main (void)
{
    int a = 0, b, i;
    printf("Input number: ");

    scanf("%d", &b);
    for (i=1; i<100000; i++)
    {
        if (b % i == 0)
        {
            a = a + 1;
        }
    }
    if (a == 2 || a == 1)
    {
    printf("Ypur number is easy");
    }
    else
    printf("Your number is hard");
}