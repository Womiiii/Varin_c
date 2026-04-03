#include <stdio.h>

int main ()

{
    int i = 0; 
    char result[100];
    char *res = result;

    char arr1[100] = "qwertyuiopasdfghjklzxcvbnm";
    printf("Input your array1: ");
    scanf("%99s", arr1);
    char *a1 = arr1;

    char arr2[100] = "qwerty";
    printf("Input your array2: ");
    scanf("%99s", arr2);    
    char *a2 = arr2;
    

    while ( *a1 )
    {
        char *a2 = arr2;

        while ( *a2 )
        {
            if ( *a1 == *a2 )
            {
                result[i] = *a1;
                i++;
            }
            *a2++;
        }

        *a1++;
    }

    result[i] = '\0';
    printf("Peresechenuye: ");

    while ( *res)
    {
        printf("%c", *res);
        *res++;
    }
}