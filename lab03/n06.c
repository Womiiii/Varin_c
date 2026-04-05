#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 3, pos, val;
    int *arr = (int*)malloc(n * sizeof(int));
    arr[0] = 1; arr[1] = 2; arr[2] = 3;
    scanf("%d %d", &pos, &val);
    n++;
    arr = (int*)realloc(arr, n * sizeof(int));
    for (int i = n - 1; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = val;
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    free(arr);
    return 0;
}
