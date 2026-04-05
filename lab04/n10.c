#include <stdio.h>

int main(void) {
    char *filename = "people.bin";

    // 1. открыть файл из прошлых заданий
    FILE *fp = fopen(filename, "rb");

    if (fp) {
        // 2. определить размер файла с помощью fseek и ftell
        // перемещаем курсор в самый конец файла (смещение 0 от конца)
        fseek(fp, 0, SEEK_END);

        // функция ftell возвращает текущую позицию курсора в байтах
        long size = ftell(fp);

        // 3. вывести размер
        printf("размер файла %s: %ld байт\n", filename, size);

        // закрываем файл
        fclose(fp);
    } else {
        printf("ошибка: не удалось открыть файл\n");
    }

    return 0;
}
