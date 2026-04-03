//9. Арифметические и логические выражения- Введите число.-
//Проверьте, делится ли оно на 2 и на 3. Выведите результат.
#include <stdio.h>
  
int main(void)
{
    int a; 
    printf("input number: ");
    scanf("%d", &a);
    if (a % 3 == 0 && a % 2 == 0)
    {
        printf("Your number / 3; /2 ");
    }
    else if (a % 2 == 0)
    {
        printf("Your number / 2");
    }
    else if (a % 3 == 0)
    {
        printf("Your number / 3");
    }
    else
    {
        printf("Your number dont / 3; /2"); 
    }
}