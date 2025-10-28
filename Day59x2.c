#include <stdio.h>
#include <stdlib.h>

int compare_desc(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int arr[] = {5, 3, 8, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    qsort(arr, n, sizeof(int), compare_desc);

    printf("Descending order: ");
    for (int i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
