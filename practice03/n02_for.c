#include <stdio.h>

int main (void)
{
    int a = 1, b;
    printf("Input one number: ");
    scanf("%d", &b);
    for (a; a<=b; a++)
    {
        if(a % 2 == 1)
        {
            printf("%d\n", a);
        }
    }
}