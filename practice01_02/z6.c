//6. Среднее арифметическое- Введите три числа.- Найдите их среднее

#include <stdio.h>
  
int main(void)
{
    printf("Input 3 numbers. Use , : ");
    int a, b, c, d;
    scanf("%d, %d, %d", &a, &b, &c);
    d = (a+b+c)/3;
    printf("arithmetic mean your numbers: %d", d);
}