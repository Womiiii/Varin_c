#include <stdio.h>

int main ()

{
    int i = 0, chet = 0; 
    char result[100];
    char *res = result;

    char arr1[100] = "qwertyuiopasdfghjklzxcvbnm";
    printf("Input your array1: ");
    scanf("%99[^\n]", arr1);
    char *a1 = arr1;

   // char arr2[100] = "qwerty";
   // printf("Input your array2: ");
   // scanf("%99s", arr2);    
   // char *a2 = arr2;
    

    while ( *a1 )
    {
        chet++;
        *a1++;
    }

    for (chet; chet >= 0; chet--)
    {
        printf("%c", *a1);
        a1--;
    }

   // result[i] = '\0';
   // printf("Peresechenuye: ");

   // while ( *res)
   // {
   //     printf("%c", *res);
   //     *res++;
   // }
}