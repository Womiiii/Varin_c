#include <stdio.h>

int main (void)
{
    int a = 0, b, i;
    printf("Input number: ");

    scanf("%d", &b);
    for (i=1; i<b; i++)
    {
        while (b > 9)
        {  
            a = a + (b % 10);
            b = b / 10;
        }
    if (a > 10)
    {
        printf("Chislo: %d", i);
    }
    
    }

printf("C: %d", a);
}