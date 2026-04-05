#include <stdio.h>

int main (void)
{
    int a = -1, b;

    printf("Input some numbers. If you want to stop input, input '0': ");

    while (b != 0)
    {
        scanf("%d", &b);
        a = a+1;
    }
    printf("Quantity of your numbers: %d", a);
}