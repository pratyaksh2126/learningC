#include <stdio.h>
int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[4], n=4;
    for(int i=0; i<n; i++) {
        arr2[i] = arr1[i];
    }
    printf("Copied array: ");
    for(int i=0; i<n; i++) printf("%d ", arr2[i]);
    printf("\n");
    return 0;
}
