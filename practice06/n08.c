#include <stdio.h>

int main (void)
{
    int chet = 0;
    char str[100];
    printf("Input your password: ");
    scanf("%99s", str);
    char *p = str;

    while (*p)
    {
        if (*p > 'a' && *p < 'z' || *p >= '0' && *p <= '9' )
        {
            chet = 1;
            printf("1");
            break;
        }   
        p++;
    }
    if (chet == 0)
    {
        printf ("Add literas or numbers");
    }
    return 0;
}