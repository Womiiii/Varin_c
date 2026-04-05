#include <stdio.h>

// описание структуры
struct Person {
    char name[20];
    int age;
};

int main(void) {
    char *filename = "people.bin";
    struct Person p;

    // 1. открыть файл для чтения
    FILE *fp = fopen(filename, "rb");
    
    if (fp) {
        // допустим, нам нужен второй человек из файла (индекс 1)
        int index = 1; 
        long offset = index * sizeof(struct Person);

        // 2. переместиться к заданной позиции с помощью fseek
        // переходим на нужный байт от начала файла
        fseek(fp, offset, SEEK_SET);

        // 3. считать данные начиная с этой позиции
        // читаем одну структуру прямо в переменную p
        fread(&p, sizeof(struct Person), 1, fp);
        
        fclose(fp);

        // 4. вывести результат
        printf("данные из выбранной позиции:\n");
        printf("имя: %s\n", p.name);
        printf("возраст: %d\n", p.age);
    } else {
        printf("ошибка: файл не найден\n");
    }

    return 0;
}
