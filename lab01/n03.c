#include <stdio.h>

int main(void)
{
    int a = 709151;
    float b = 25.1;
    char c = 'B';
    
    printf("a = %d, adress a: =^%p,\nb = %f, adress b: = %p,\nc = %d, adress c: = %p,", a, (void*)&a, b, (void*)&b, c, (void*)&c);
    return 0;
}