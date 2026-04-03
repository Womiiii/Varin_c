#include <stdio.h>

int main (void)
{
    int a = 0, b;

    printf("Input some numbers. If you want to stop input, input '0': ");

    while (b != 0)
    {
        scanf("%d", &b);
        if (b > 10)
        {
            printf(">10: %d\n", b);
        }
    }

}