#include <stdio.h>

int main(void)
{
    // записываемая строка
    char message[] = "Hellooooo!";

    // находим длину записываемой строки
    int n = sizeof(message) / sizeof(message[0]);
    char * filename = "data.txt";
    FILE * fp= fopen(filename, "w");

    if(fp)
    {
        // посимвольно записываем в файл
        for(int i=0; i < n; i++)
        {
            putc(message[i], fp);
        }
         
        fclose(fp);
        printf("File has been written\n");
    }

    // символ для считывания
    char c;
    // файл для чтения

    fp = fopen(filename, "r");
    if(fp)
    {
        // считываем посимвольно из файла
        while((c=getc(fp))!= EOF)
        {
            printf("%c", c);
        }
        fclose(fp);
    }
}