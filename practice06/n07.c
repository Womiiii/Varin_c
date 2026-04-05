#include <stdio.h>

int main (void)
{
    int chet = 0;
    char symb;
    printf("Input an sumbol: ");
    scanf("%c", &symb);

    char str[] = "Hello, World, qwertyuiop";
    char *p = str;

    while (*p)
    {
        if (*p == symb)
        {
            p++;
            continue;
        }

        printf("%c", *p);
        p++;
    }   
    return 0;
}