#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Address of a: %p\n", (void*)&a);
    printf("Address of b: %p\n", (void*)&b);
    printf("Address of c: %p\n", (void*)&c);

    long diff_ab = (char*)&a - (char*)&b;
    long diff_bc = (char*)&b - (char*)&c;

    printf("\n--- Memory Investigation ---\n");
    printf("Difference between a and b: %ld bytes\n", diff_ab);
    printf("Difference between b and c: %ld bytes\n", diff_bc);

    // I did it  with AI. Dont understand how it do without it

    return 0;
}
