#include <stdio.h>

int main (void)
{
    int chet = 0;

    char str[] = "Hello";
    char *p = str;

    while (*p)
    {
        chet++;
        p++;
    }
    printf("%d", chet);
    return 0;
}