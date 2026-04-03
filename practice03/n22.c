#include <stdio.h>

int main (void)
{
    int b, i;
    printf("Input number: ");

    scanf("%d", &b);
    for (i=1; i<100000; i++)
    {
        if (b % i == 0)
        printf("Delitel: %d\n", i);
    }
    //printf("%d\n", a);
}
    
