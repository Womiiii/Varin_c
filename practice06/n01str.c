#include <stdio.h>

int main (void)
{
    char str[] = "Hello";
    char *p = str;
    while (*p)
    {
        printf("%c \n", *p);
        p++;
    }
    return 0;
}