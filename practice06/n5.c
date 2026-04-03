#include <stdio.h>

int main (void)
{
    int chet = 0;
    char str[] = "!!!!!";
    char *p = str;

    while (*p)
    {
        printf("%c \n", *p);
        if ( *p == '!')
        {   
            chet++;
            if (chet == 3)
            {
                printf("STOP!!!");
                break;
            }
        }
        p++;

    }   
    return 0;
}