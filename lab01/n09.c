#include <stdio.h>

int main(void)
{
    int x, y , z;
    printf("Input one number: ");
    scanf("9%d", &x);
    y = x*x + 2*x;
    printf("x1 = %d\n", y);
    z = (x+1)*(x+1)-(x-1)*(x-1);
    printf("x2 = %d", z);
}