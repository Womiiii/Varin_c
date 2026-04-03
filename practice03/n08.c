#include <stdio.h>

int main (void)
{
    int a = 1, b, s = 0;
    printf("Input one number: ");
    scanf("%d", &b);
    for (a; a<=b; a++)
    {
        if(a % 2 == 1)
        {
            s = s + a;
            //printf("%d\n", a);
        }
    }
printf("Summ nechet = %d\n", s);
}