#include <stdio.h>

int main (void)
{
    int a = 0, b;

    printf("Input some numbers. If you want to stop input, input '0': ");

    while (b != 0)
    {
        scanf("%d", &b);
        if (b == 0)
            {
                break;
            }
        else if(b % 7 == 0)
            {
                a = a + 1;
            }         
        
    }
printf("Vsego del na 7: %d\n", a);
}