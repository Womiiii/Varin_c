#include <stdio.h>

struct Person {
    char name[20]; // массив для хранения имени
    int age;       // переменная для возраста
};

int main(void) {
    char *file_name = "people.bin";
    struct Person person_data;

    // 1. открыть файл для чтения
    FILE *file_pointer = fopen(file_name, "rb");

    if (file_pointer != NULL) {
        // читаем файл до самого конца в цикле
        // функция fread возвращает количество прочитанных объектов
        while (fread(&person_data, sizeof(struct Person), 1, file_pointer) == 1) {
            printf("прочитано имя: %s, возраст: %d\n", person_data.name, person_data.age);
        }

        // 2. проверить достижение конца файла с помощью feof
        // если функция возвращает значение не равное нулю, значит это конец файла
        if (feof(file_pointer) != 0) {
            printf("чтение завершено: достигнут конец файла\n");
        }

        // 3. проверить наличие ошибок с помощью ferror
        // если функция возвращает значение не равное нулю, значит произошла ошибка
        if (ferror(file_pointer) != 0) {
            printf("внимание: во время работы с файлом произошла ошибка\n");
        }
        else{
            printf("ошибок не произошло\n");

        }

        // закрываем файл через указатель
        fclose(file_pointer);
    } else {
        printf("ошибка: не удалось открыть файл для чтения\n");
    }

    return 0;
}
