#include <stdio.h>

int main(void)
{
    int a = 5, b = 10, c;
    printf("a = %d, b = %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("a = %d, b = %d", a, b);
}