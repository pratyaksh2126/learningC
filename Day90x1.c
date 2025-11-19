#include <stdio.h>

float findAverage(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return (float)sum / n;
}

int findMax(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] > max)
            max = arr[i];
    return max;
}

int findMin(int arr[], int n) {
    int min = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] < min)
            min = arr[i];
    return min;
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    int marks[n];
    printf("Enter marks of %d students:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &marks[i]);

    printf("\nAverage Marks: %.2f\n", findAverage(marks, n));
    printf("Highest Marks: %d\n", findMax(marks, n));
    printf("Lowest Marks: %d\n", findMin(marks, n));

    return 0;
}
