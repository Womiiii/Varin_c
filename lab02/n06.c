#include <stdio.h>
#include <windows.h>

union Data {
    int i;
    float f;
    char c;
};

enum DataType { TYPE_INT, TYPE_FLOAT, TYPE_CHAR };

struct TaggedData {
    enum DataType type; 
    union Data value;
};

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    union Data data;

    data.i = 10;
    printf("Записали int (10). Значение i: %d\n", data.i);

    data.f = 220.5;
    printf("Записали float (220.5). Значение f: %.1f\n", data.f);

    data.c = 'A';
    printf("Записали char ('A'). Значение c: %c\n", data.c);

    printf("\nСовместная память:\n");
    printf("Пытаемся прочитать int после записи char: %d (данные испорчены)\n", data.i);
    printf("Размер объединения Data: %zu байт (равен размеру самого большого поля)\n", sizeof(data));
    
    struct TaggedData item;
    
    item.type = TYPE_FLOAT;
    item.value.f = 3.14f;

    if (item.type == TYPE_FLOAT) {
        printf("В структуре хранится float: %.2f\n", item.value.f);
    }

    return 0;
}
