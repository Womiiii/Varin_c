#include <stdio.h>

int main(void)
{
    int a;
    printf("Input number > 10, i will give you lact symbol from it: ");
    scanf("%d", &a);
    printf("a = %d", a % 10);
}