#include <stdio.h>

int main (void)
{
    int a = 1, b, c = 0;
    printf("Input one number: ");
    scanf("%d", &b);
    for (a; a<=b; a++)
    {
        if(a % 5 == 0)
        {
            printf("%d\n", a);
            c = c + a;
        }
    }
    printf("Summ del 5 = %d", c);
}