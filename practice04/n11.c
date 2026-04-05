#include <stdio.h>

int main (void)
{
    int n, i, x, chet = 0;

    printf("Input number: \n");
    scanf("%d", &n);
    int numbers[n];

    printf("Input %d numbers: \n", n);

    for (i=0; i<=n-1; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("Input number, that i will check in your massive: \n");
    scanf("%d", &n);
    //printf("Min number: %d index: %d \n", min, index);
    return 0;
}
