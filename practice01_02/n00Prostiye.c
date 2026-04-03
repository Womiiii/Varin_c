#include <stdio.h>
  
int main(void)
{
    int a, i, n, chet = 0;
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        for (a = 2; a * a <= i + 1; a++)
        {
            if (i % a == 0)
            {
                chet++;
                break;
            }
        }
        if (chet == 0)
        {
            printf("%d ", i);
        }
        chet = 0;
    }
}