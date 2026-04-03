#include <stdio.h>

int main(void)
{
    int a,b,c,d;
    printf("Input number > 100: ");
    scanf("%d", &a);
    printf("*100 = %d\n", a / 100 % 10);
    printf("*10 = %d\n", a / 10 % 10);
    printf("*1 = %d\n", a % 10);
}