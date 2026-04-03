#include <stdio.h>

int main (void)

{
    int i = 0, chet = 0, len2 = 0; 
    char result[100];
    char *res = result;

    char arr1[100] = "qwertyuiopasdfghjklzxcvbnm";
    printf("Input starting array (max 100 symb): ");
    //scanf("%99s", arr1);
    char *a1 = arr1;

    char arr2[100] = "qwerty";
    printf("Input string, that will be founded in starting array: ");
    //scanf("%99s", arr2);    
    char *a2 = arr2;
    
    while ( *a2 )
    {
        len2++;
        a2++;
    }

    a2 = arr2;

    while ( *a1 )
    {
        a2 = arr2;
        char *temp_a1 = a1;
        chet = 0;
        if ( *a2 == *temp_a1 )
        {
            while ( *a2 == *temp_a1 )
            {
                chet++;

                if ( chet == len2 )
                {
                    return 0;
                }
                *temp_a1++;
                *a2++;
            }
        }
        *a1++;
    }
    return 0;
}