#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL, n = 0, choice, val;
    while (1) {
        printf("\n1.Add 2.Del 3.Print 4.Exit: ");
        scanf("%d", &choice);
        if (choice == 4) break;
        if (choice == 1) {
            scanf("%d", &val);
            arr = (int*)realloc(arr, ++n * sizeof(int));
            arr[n - 1] = val;
        } else if (choice == 2 && n > 0) {
            n--;
            arr = (int*)realloc(arr, n * sizeof(int));
        } else if (choice == 3) {
            for (int i = 0; i < n; i++) printf("%d ", arr[i]);
        }
    }
    free(arr);
    return 0;
}
