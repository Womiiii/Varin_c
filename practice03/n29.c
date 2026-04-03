#include <stdio.h>

int main (void)
{
    int a, i;

    printf("Input one number: \n");
    scanf("%d", &a);

    for (a=1; a>=1; a--)
    {
        if (a % 5 == 0)
        {
            printf("%d", a);
            break;
        }
    }
    return 0;
}