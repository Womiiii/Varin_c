#include <stdio.h>
int main (void)
{
    int otkr = 0, max = 0;
    char str[100];
    printf("Input your math example: ");
    scanf("%99s", str);

    char *p = str;
    while (*p)
    {
        if ( *p == '(')
        {
            otkr++;
            if (otkr > max)
            {
                max = otkr;
            }
        }
        else if (*p == ')')
        {
            otkr--;
            if ( otkr < 0)
            {
                printf("Your math example is uncorrect. Try again. ");
                return 0;
            }
        }
        p++;
    }

    if ( otkr == 0 )
    {
        printf("Deep of your mathematical example: %d", max);
        return 0;
    }
    else
    {
        printf("You have some )(, that haven't pair. Try again.");
        return 0;
    }
    return 0;
}