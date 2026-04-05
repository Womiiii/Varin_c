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
            a = a + i;
        }
    }
printf("Summa deliteley: %d", a);
}