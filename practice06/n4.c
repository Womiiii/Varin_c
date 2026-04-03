#include <stdio.h>

int main (void)
{
    char str[] = "Hello";
    char *p = str;
    while (*p)
    {
        if ( *p == 'a' ||  *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')
        {
            printf("*\n");
        }
        else
        {
            printf("%c \n", *p);
        }
        p++;
    }
    return 0;
}