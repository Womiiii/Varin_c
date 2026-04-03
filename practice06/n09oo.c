#include <stdio.h>

int main (void)
{
    int chet = 0;
    char str[100], cymb;
    printf("Input your password: ");
    scanf("%99s", str);
    char *p = str;

    while (*p)
    {
        chet++;
        p++;
    }

    int centre = (p - str) / 2; 
    p = str;

    for (int i = 0; i < centre; i++)
    {
        printf("%c", *p);
        p++;
    }

    printf("\n");

    while (*p)
    {
        printf("%c", *p);    
        p++;
    }
    return 0;
}