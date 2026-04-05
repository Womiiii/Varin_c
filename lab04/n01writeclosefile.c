#include <stdio.h>

int main () 
{
    FILE *fp = fopen("text.txt", "w");

    if(fp==NULL) // ошибки возникнуть не должно, так как файл создаётся
    {            // в этой директории и сразу же открывается
        perror("Error occured while opening text.txt.txt");
        return 1;
    }

    fclose(fp);
    return 0;
}