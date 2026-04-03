#include <stdio.h>

int main (void)
{
    int a, n, i, chet = 0;

    printf("Input number: \n");
    scanf("%d", &n);
    int numbers[n];

    printf("Input %d numbers: \n", n);

    for (i=0; i<=n-1; i++)
    {
        scanf("%d", &numbers[i]);
    }


    a = numbers[0];
    numbers[0] = numbers[n-1];
    numbers[n-1] = a;


      for (i=0; i<=n-1; i++)
    {
        printf("SwaP: ");
        printf("%d \n", numbers[i]);
    }


    return 0;
}
