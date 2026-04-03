#include <stdio.h>

int main (void)
{
    int a = 0, b = 1;

    printf("Input some numbers. If you want to stop input, input '0': ");

    while (b != 0)
    {
        scanf("%d", &b);
        if (b < 0)
        {
            a = a + b;
        }
    }
printf("Summ your numbers, that < 0: %d", a);
}