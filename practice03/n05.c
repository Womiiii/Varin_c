#include <stdio.h>

int main (void)
{
    int a = 1, b, c = 0;
    printf("Input one number: ");
    scanf("%d", &b);
    for (a; a<=b; a++)
    {
        if(a % 3 == 0)
        {
            printf("Fizzzzzzzzz \n");
        }
        else
        {
            printf("%d\n", a);
        }
    }
}