#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int age;
} Student;

int main() {
    int n;
    scanf("%d", &n);
    Student *s = (Student*)malloc(n * sizeof(Student));
    for (int i = 0; i < n; i++) scanf("%s %d", s[i].name, &s[i].age);
    int max_idx = 0;
    for (int i = 1; i < n; i++) if (s[i].age > s[max_idx].age) max_idx = i;
    printf("Oldest: %s %d\n", s[max_idx].name, s[max_idx].age);
    free(s);
    return 0;
}
