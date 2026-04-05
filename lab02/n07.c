#include <stdio.h>
#include <string.h>

typedef enum {
    FIRST = 1, SECOND, THIRD, FOURTH, FIFTH
} Course;

typedef struct {
    char name[50];
    int age;
    Course course;
    float gpa;
} Student;

void addStudent(Student *s, const char *name, int age, Course course, float gpa) {
    strncpy(s->name, name, 49);
    s->name[49] = '\0';
    s->age = age;
    s->course = course;
    s->gpa = gpa;
}

void printStudents(const Student *list, int count) {
    printf("%-20s | %-5s | %-6s | %-5s\n", "Name", "Age", "Course", "GPA");
    for (int i = 0; i < count; i++) {
        const Student *p = list + i;
        printf("%-20s | %-5d | %-6d | %.2f\n", p->name, p->age, (int)p->course, p->gpa);
    }
}

void findByName(const Student *list, int count, const char *searchName) {
    for (int i = 0; i < count; i++) {
        if (strcmp((list + i)->name, searchName) == 0) {
            printf("Found: %s, GPA: %.2f\n", (list + i)->name, (list + i)->gpa);
            return;
        }
    }
    printf("Not found: %s\n", searchName);
}

void sortByGPA(Student *list, int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if ((list + j)->gpa < (list + j + 1)->gpa) {
                Student temp = *(list + j);
                *(list + j) = *(list + j + 1);
                *(list + j + 1) = temp;
            }
        }
    }
}

int main() {
    Student students[10];
    int count = 0;

    addStudent(&students[count++], "Ivanov", 20, SECOND, 4.2);
    addStudent(&students[count++], "Petrova", 19, FIRST, 4.8);
    addStudent(&students[count++], "Sidorov", 21, THIRD, 3.9);

    printStudents(students, count);
    
    findByName(students, count, "Petrova");
    
    sortByGPA(students, count);
    printf("\nSorted list:\n");
    printStudents(students, count);

    return 0;
}
