#include <stdio.h>

int main() {
    int n, arr[100], sum = 0, largest, smallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    largest = smallest = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest)
            largest = arr[i];
        if(arr[i] < smallest)
            smallest = arr[i];
    }

    printf("\nSum of array elements = %d", sum);
    printf("\nLargest element = %d", largest);
    printf("\nSmallest element = %d", smallest);

    return 0;
}
