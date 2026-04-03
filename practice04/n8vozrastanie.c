#include <stdio.h>

int main (void)
{
    int n, i, chet = 1;

    printf("Input number: \n");
    scanf("%d", &n);
    int numbers[n];

    printf("Input %d numbers: \n", n);

    for (i=0; i<=n-1; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < n-1; i++)
    {
        if (numbers[i] > numbers[i+1])
        {
            chet = 0;
        }
    }

    if (chet == 1)
    {
        printf("Vozrastaniye!");
    }   
    else
    {
        printf("No vozrastaniye!");
    }
    return 0;
}
