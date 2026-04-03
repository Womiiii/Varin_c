#include <stdio.h>

int main (void)
{
    int a, i = 1;

    printf("Input one number: \n");
    scanf("%d", &a);

    for (i; i<=a; i++)
    {
        if (i % 17 == 0)
        {
            printf("This Num / 17: 1%d", i);
            break;
        }
    }
}