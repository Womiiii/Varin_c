#include <stdio.h>

int main (void)
{
    int a = 1, b;
    printf("Input one number: ");
    scanf("%d", &b);
    for (a; a<=b; a++)
    {
        if(a % 4 == 0) 
        {
            continue;
        }
        else
        {
            printf("%d\n", a);
        }
    }
}