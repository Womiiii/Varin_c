#include <stdio.h>

int main (void)
{
    int a = 1, b, c = 0;
    printf("Input some numbers. If you want to stop input, input '0': ");

    while (b != 0)
    {
        scanf("%d", &b);
        
    
        if(b % 2 == 1)
        {
            a = a*b;
        }
    }
printf("%d\n", a);
}
    

