#include <stdio.h>

// Определение структуры
struct Person {
    char name[20]; // Массив для имени (до 20 символов)
    int age;       // Возраст
};

int main(void) {
    char *filename = "people.bin";
    int n = 3; // Количество человек в массиве

    // 1. Создать массив структур Person
    struct Person people[3] = {
        {"Ivan", 25},
        {"Maria", 30},
        {"Alex", 18}
    };

    // 2. Записать массив в бинарный файл
    FILE *fp = fopen(filename, "wb");
    if (fp) {
        // Записываем весь массив разом
        // people — это адрес начала массива, n — количество элементов
        fwrite(people, sizeof(struct Person), n, fp);
        fclose(fp);
        printf("Массив успешно записан в файл.\n");
    }

    // 3. Считать массив обратно
    struct Person read_people[3]; // Массив, куда будем читать
    fp = fopen(filename, "rb");
    if (fp) {
        // Читаем из файла n структур типа Person
        fread(read_people, sizeof(struct Person), n, fp);
        fclose(fp);

        // 4. Вывести все элементы
        printf("Данные из файла:\n");
        for (int i = 0; i < n; i++) {
            printf("%d. Имя: %s, Возраст: %d\n", i + 1, read_people[i].name, read_people[i].age);
        }
    }

    return 0;
}
