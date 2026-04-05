#include <stdio.h>

int main (void)
{
    int a, i;

    printf("Input one number: \n");
    scanf("%d", &a);

    for (i=1; i<=a; i++)
    {
        int x = i, has_tree = 0;

        while (x > 0)
        {
            if (x % 10 == 3)
            {
                has_tree = 1;
                break;
            }
            x = x / 10;
        }
        if ( has_tree == 0)
        {
            printf("%d", i);
        }
    }
    return 0;
}