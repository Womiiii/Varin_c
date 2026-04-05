#include <stdio.h>

// Определение структуры Person
struct Person {
    char name[50]; // Имя (массив символов, чтобы влезла строка)
    int age;       // Возраст
};

int main(void) {
    char *filename = "person.bin";

    // 1. Создать одну структуру
   struct Person p1 = {"Ivan", 25};

    // 2. Записать её в файл
    FILE *fp = fopen(filename, "wb"); // "wb" — write binary
    if (fp != NULL) {
        // Записываем 1 экземпляр структуры p1
        fwrite(&p1, sizeof(struct Person), 1, fp);
        fclose(fp);
        printf("Данные успешно записаны в файл.\n");
    } else {
        printf("Ошибка при открытии файла на запись!\n");
        return 1;
    }

    // 3. Считать обратно
    struct Person read_p; // Сюда мы положим данные из файла
    fp = fopen(filename, "rb"); // "rb" — read binary
    if (fp != NULL) {
        // Читаем данные из файла прямо в переменную read_p
        fread(&read_p, sizeof(struct Person), 1, fp);
        fclose(fp);
        
        // 4. Вывести данные
        printf("\n Данные, считанные из файла \n");
        printf("Имя: %s\n", read_p.name);
        printf("Возраст: %d\n", read_p.age);
    } else {
        printf("Ошибка при открытии файла на чтение!\n");
        return 1;
    }

    return 0;
}
