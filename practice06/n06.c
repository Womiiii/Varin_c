#include <stdio.h>

int main (void)
{
    int chet = 0;
    char str[] = "hello, world";
    char *p = str;

    while (*p)
    {
        if (chet % 2 == 1)
        {
            printf("%c", *p - 32);
        }
        else
        {
            printf("%c", *p);
        }
        p++;
        chet++;
//*p = *p - 32
    }   
    return 0;
}