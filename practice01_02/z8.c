#include <stdio.h>
  
int main(void)
{
    int a = 5;
    a = a++;
    printf("a = %d", ++a);
}