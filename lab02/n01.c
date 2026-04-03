#include <stdio.h>

struct student {
    char name[50];
    int age;
    float srball;
};

int main(void) {
    struct student IT = {"Mike", 17, 9.9};

    printf("Name: %s, Age: %d, Sred: %.2f\n", IT.name, IT.age, IT.srball);

    scanf("%49s", IT.name);
    scanf("%d", &IT.age);
    scanf("%f", &IT.srball);

    printf("Name: %s, Age: %d, Sred: %.2f\n", IT.name, IT.age, IT.srball);

    return 0;
}
