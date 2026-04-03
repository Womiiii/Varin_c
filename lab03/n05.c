#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5, idx;
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = i;
    scanf("%d", &idx);
    for (int i = idx; i < n - 1; i++) arr[i] = arr[i + 1];
    n--;
    arr = (int*)realloc(arr, n * sizeof(int));
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    free(arr);
    return 0;
}
