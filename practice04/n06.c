#include <stdio.h>

int main (void)
{
    int n, i, min = 0, chet = 0;

    printf("Input number: \n");
    scanf("%d", &n);
    int numbers[n];

    printf("Input %d numbers: \n", n);

    for (i=0; i<=n-1; i++)
    {
        scanf("%d", &numbers[i]);

        if (numbers[i] < 0) 
        {
            numbers[i] = 0;
        }
    }

    for (i = 0; i <= n-1; i++)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}
