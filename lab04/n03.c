#include <stdio.h>

int main(void)
{
    char * filename = "n3.txt";
    // записываемая строка
    char buffer[256];
    
    // 1. Блок записи
    FILE * fp= fopen(filename, "w");
    if (fp)
    {
        fputs("Hello, this is line 1!\n", fp);
        fputs("And this is line 2.\n", fp);
        fputs("Task 3 is almost done.\n", fp);
        fclose(fp);
        printf("File written successfully.\n\n");
    }

    // 2. Открываем для чтения
    fp = fopen(filename, "r");
    if(fp)
    {
        // 3. Считываем строки (используем цикл, чтобы прочитать все строки)
        while(fgets(buffer, 256, fp) != NULL)
        {
            // 4. Выводим их на экран
            printf("%s", buffer);
        }
        fclose(fp);
    }
    return 0;
}