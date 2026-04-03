#include <stdio.h>
#include <windows.h>

struct student {
    enum Days {
        MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
    };
    enum Days day;
};

void printDayName(struct student s) {
    switch (s.day) {
        case MONDAY:    printf("Понедельник"); break;
        case TUESDAY:   printf("Вторник");     break;
        case WEDNESDAY: printf("Среда");       break;
        case THURSDAY:  printf("Четверг");     break;
        case FRIDAY:    printf("Пятница");     break;
        case SATURDAY:  printf("Суббота");     break;
        case SUNDAY:    printf("Воскресенье"); break;
        default:        printf("Неизвестный день");
    }
    printf("\n");
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    struct student today;
    today.day = FRIDAY; 

    printf("Сегодня: ");
    printDayName(today);

    return 0;
}
