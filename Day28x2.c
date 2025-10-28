#include <stdio.h>
int main() {
    int arr[] = {9, 5, 1, 4, 3}, n = 5;
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    printf("Sorted array: ");
    for (int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
