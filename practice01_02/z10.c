//10. Побитовые операции- Введите число.- Попробуйте выполнить операции:8
//n & 1, n | 1, n ^ 1, ~n.
#include <stdio.h>
  
int main(void)
{
    int n;
    printf("Input 1 number: ");
    scanf("%d", &n);
    printf("%d\n", (n & 1));
    printf("%d\n", (n | 1));
    printf("%d\n", (n ^ 1));
    printf("%d\n", (~n));
}