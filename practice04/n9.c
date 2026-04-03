#include <stdio.h>

int main (void)
{
    int n, i, chet = 0;

    printf("Input number: \n");
    scanf("%d", &n);
    int numbers[n];

    printf("Input %d numbers: \n", n);

    for (i=0; i<=n-1; i++)
    {
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 == 0)
        {
            chet = 1;
        }
    }

    if (chet == 1)
    {
        printf("YES!");
    }   
    else
    {
        printf("NO!");
    }
    return 0;
}
