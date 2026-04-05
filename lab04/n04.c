#include <stdio.h>

int main(void)
{
    char * filename = "data.txt";
    
    // Данные для записи
    int id1 = 1, id2 = 2;
    char name1[] = "Apple";
    char name2[] = "Orange";
    float price1 = 15.5, price2 = 20.0;

    // 1. Записываем числа и строки с помощью fprintf
    FILE * fp = fopen(filename, "w");
    if (fp)
    {
        // Записываем в формате: ID Имя Цена
        fprintf(fp, "%d %s %f\n", id1, name1, price1);
        fprintf(fp, "%d %s %f\n", id2, name2, price2);
        
        // 2. Закрываем файл
        fclose(fp);
        printf("Data saved to file.\n\n");
    }

    // 3. Открываем файл для чтения
    fp = fopen(filename, "r");
    if (fp)
    {
        int readId;
        char readName[50];
        float readPrice;

        printf("Reading formatted data:\n");
        
        // 4. Считываем данные с помощью fscanf
        // fscanf возвращает количество успешно считанных элементов (3)
        while (fscanf(fp, "%d %s %f", &readId, readName, &readPrice) == 3)
        {
            // 5. Выводим считанные значения
            printf("ID: %d | Product: %s | Price: %.2f\n", readId, readName, readPrice);
        }

        fclose(fp);
    }

    return 0;
}
