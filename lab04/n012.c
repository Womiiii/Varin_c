#include <stdio.h>

// описание структуры для хранения данных о человеке
struct Person {
    char name[50]; // массив для имени (до 50 символов)
    int age;       // переменная для возраста
};

int main(void) {
    char *file_name = "database.bin";
    struct Person person_record;
    int count_of_people;

    // 1. ввод данных с клавиатуры
    printf("сколько человек вы хотите добавить в базу? ");
    scanf("%d", &count_of_people);

    // открываем файл для записи в бинарном режиме
    FILE *file_pointer_write = fopen(file_name, "wb");

    // проверка открытия файла
    if (file_pointer_write != NULL) {
        for (int i = 0; i < count_of_people; i++) {
            printf("\nвведите имя для человека номер %d: ", i + 1);
            scanf("%s", person_record.name);
            printf("введите возраст для человека номер %d: ", i + 1);
            scanf("%d", &person_record.age);

            // запись данных в бинарный файл с помощью fwrite
            fwrite(&person_record, sizeof(struct Person), 1, file_pointer_write);
        }
        // закрытие файла после работы
        fclose(file_pointer_write);
        printf("\nвсе данные успешно записаны в файл.\n");
    } else {
        printf("ошибка: не удалось открыть файл для записи.\n");
        return 1;
    }

    // 2. чтение всех записей из файла
    printf("\nчтение всех данных из файла:\n");
    FILE *file_pointer_read = fopen(file_name, "rb");

    // проверка открытия файла
    if (file_pointer_read != NULL) {
        // чтение записей с помощью fread до конца файла
        while (fread(&person_record, sizeof(struct Person), 1, file_pointer_read) == 1) {
            // вывод на экран
            printf("имя: %s, возраст: %d\n", person_record.name, person_record.age);
        }
        // закрытие файла после работы
        fclose(file_pointer_read);
    } else {
        printf("ошибка: не удалось открыть файл для чтения.\n");
        return 1;
    }

    return 0;
}
