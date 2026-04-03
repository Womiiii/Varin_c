 #include <stdio.h>
#include <windows.h>

struct numbers
{
    float shirina;
    float visota;
};

float Pl_znach (struct numbers Znacheniya) {
    float pl1 = Znacheniya.shirina * Znacheniya.visota;
    return pl1;
}

float Sum_znach (struct numbers Znacheniya) {
    float sum1 = (Znacheniya.shirina + Znacheniya.visota) * 2;
    return sum1;
}

float Pl_ukazatel (struct numbers *Znacheniya) {
    float pl2 = Znacheniya->shirina * Znacheniya->visota;
    return pl2;
}

float Sum_ukazatel (struct numbers *Znacheniya) {
    float sum2 = (Znacheniya->shirina  + Znacheniya->visota) * 2;
    return sum2;
}

int main (void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
 
    struct numbers Znacheniya = {6.0, 4.0};
    printf("  Ширина: %.2f\n", Znacheniya.shirina );
    printf("  Высота: %.2f\n", Znacheniya.visota );
    printf("\n");

    printf("  Площадь 1: %.2f\n", Pl_znach(Znacheniya) );
    printf("  Периметр 1: %.2f\n", Sum_znach(Znacheniya));
    printf("\n");

    printf("  Площадь 2: %.2f\n", Sum_ukazatel(&Znacheniya) );
    printf("  Периметр 2: %.2f\n", Pl_ukazatel(&Znacheniya));
    printf("\n");
    

}