#include <stdio.h>

int main (void)
{
    int n, i, min = 0, index = 0;

    printf("Input number: \n");
    scanf("%d", &n);
    int numbers[n];

    printf("Input %d numbers: \n", n);

    for (i=0; i<=n-1; i++)
    {
        scanf("%d", &numbers[i]);

        if (i == 0) 
        {
            min = numbers[0];
            index = 0;
        }
        else if (numbers[i]<min)
        {
            min = numbers[i];
            index = i;
        }        
    
    }
    printf("Min number: %d index: %d \n", min, index);
    return 0;
}
