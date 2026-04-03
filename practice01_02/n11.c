//11. Проверка четности- Введите число.- Определите, четное оно или нет и
#include <stdio.h>
  
int main(void)
{
    int a; 
    printf("input number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("Your number is CHETNOE ");
    }
    else
    {
        printf("YOUR NUMBER IS UNCHETNOE");
    }
}