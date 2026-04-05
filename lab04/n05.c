#include <stdio.h>

int main(void)
{
    char buffer[256]; //  Kонтейнер для текста
    char * filename = "user_input.txt";

    // 1. Считываем с клавиатуры
    printf("Введите строку для записи в файл: ");
    // Используем stdin (стандартный ввод), чтобы fgets слушал клавиатуру
    if (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        // 2. Записываем в файл
        FILE * fp = fopen(filename, "w");
        if (fp)
        {
            fputs(buffer, fp); // Записываем то, что ввели
            fclose(fp);
            printf(" Строка успешно сохранена в %s \n\n", filename);
        }
        else {
            printf("Ошибка: не удалось создать файл.\n");
            return 1;
        }
    }

    // 3. Выводим содержимое файла на экран
    FILE * fp_read = fopen(filename, "r");
    if (fp_read)
    {
        printf("Читаем из файла содержимое:\n");
        // Читаем из файла обратно в буфер
        if (fgets(buffer, sizeof(buffer), fp_read) != NULL)
        {
            printf("Результат: %s", buffer);
        }
        fclose(fp_read);
    }

    return 0;
}
