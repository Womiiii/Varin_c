//7. Приведение типов- Введите два целых числа.- Выполните деление так,
//чтобы результат был с десятичной частью.

#include <stdio.h>
  
int main(void)
{
    float a, b, c;

    printf("Input 2 numbers! Use , : ");
    scanf("%f, %f", &a, &b);
    
    c = a / b;

    printf("a / b = %.1f", c);


}