#include <stdio.h>

int main (void)
{
    int n, i, chet = 0;

    printf("Input number: \n");
    scanf("%d", &n);
    int numbers[n];
    double s = n;

    printf("Input %d numbers: \n", n);

    for (i=0; i<=n-1; i++)
    {
        scanf("%d", &numbers[i]);
        chet = chet + numbers[i];
    }
printf("Sr arifm: %.5f", chet/s);
}
