#include <stdio.h>

int main() {
    int arr[5];
    int *ptr;
    int i;

    ptr = arr;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }

    printf("Array elements using pointer:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
