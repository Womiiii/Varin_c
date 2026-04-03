//4. Адрес переменной- Создайте переменную и присвойте ей значение.- Выведите её адрес и содержимое.
#include <stdio.h>
  
int main(void)
{
   int a = 17;
   printf("a = %d, adress: %p\n", a, (void*)&a);
    char greeting[] = "Hello, World!";

    printf("%s\n", greeting);
}

