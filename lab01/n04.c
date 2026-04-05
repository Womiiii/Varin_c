#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Input 2 numbers. Use , : ");

    scanf("%d, %d", &a, &b);
    c = a % b;
    printf("a / b = %d", c);
}
