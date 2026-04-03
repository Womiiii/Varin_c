#include <stdio.h>

int main (void)
{
    int a = 1, b, i, max;
    int numbers[10];
    printf("Input 10 numbers: \n");


    for (i=0; i<10; i++)
    {
        scanf("%d", &numbers[i]);
    }
    
    for (i=9; i>=0; i--)
    {
       printf("%d\n", numbers[i]);
    }
    return 0;
}