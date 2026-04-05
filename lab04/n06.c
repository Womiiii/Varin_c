#include <stdio.h>

int main(void)
{
    char * filename = "data.bin";

    // 1. Создать массив целых чисел
    int numbers[] = {10, 20, 30, 40, 50};
    int count = sizeof(numbers) / sizeof(numbers[0]); // определяем количество элементов

    // 2. Записать его в бинарный файл с помощью fwrite
    FILE * fp = fopen(filename, "wb"); // "wb" — запись в бинарном режиме
    if (fp)
    {
        fwrite(numbers, sizeof(int), count, fp);
        fclose(fp);
        printf("Массив успешно записан в бинарный файл.\n");
    }

    // 3. Считать массив обратно с помощью fread
    int read_numbers[count]; // массив для хранения считанных данных
    fp = fopen(filename, "rb"); // "rb" — чтение в бинарном режиме
    if (fp)
    {
        // считываем данные из файла в наш новый массив
        fread(read_numbers, sizeof(int), count, fp);
        fclose(fp);
        
        // 4. Вывести данные
        printf("Данные, считанные из файла: ");
        for (int i = 0; i < count; i++)
        {
            printf("%d ", read_numbers[i]);
        }
        printf("\n");
    }

    return 0;
}
