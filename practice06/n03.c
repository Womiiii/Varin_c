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
    printf("%d\n", chet);
    printf("%c\n", *p);

    p--;
    while (chet)
    {
        printf("%c", *p);
        p--;
        chet--;
    }

    return 0;
}