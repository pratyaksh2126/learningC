#include <stdio.h>

int main() {
    int n, i;
    float arr[100], sum = 0.0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i]; // add each number to sum
    }

    average = sum / n;

    printf("\nSum of the elements = %.2f\n", sum);
    printf("Average of the elements = %.2f\n", average);

    return 0;
}
