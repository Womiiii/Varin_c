#include <stdio.h>
#include <stdlib.h>

int find_max(int *arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) if (arr[i] > max) max = arr[i];
    return max;
}

int find_min(int *arr, int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) if (arr[i] < min) min = arr[i];
    return min;
}

int get_sum(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return sum;
}

int main() {
    int n = 5;
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = i + 1;
    printf("Max: %d\nMin: %d\nSum: %d\n", find_max(arr, n), find_min(arr, n), get_sum(arr, n));
    free(arr);
    return 0;
}
