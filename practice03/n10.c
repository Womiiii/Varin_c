#include <stdio.h>

int main (void)
{
    long long a = 1, b, c = 1;
    printf("Input one number: ");
    scanf("%lld", &b);
    for (a; a<=b; a++)
    {
        if(a % 3 == 0)
        {
            c = c * a;
        }
    }
printf("mathematical product: %lld\n", c);
}
