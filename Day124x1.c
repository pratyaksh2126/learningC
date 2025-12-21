#include <stdio.h>

int secondLargest(int arr[], int n)
{
    int largest, second;

    if (n < 2)
        return -1;

    largest = second = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }
    return second;
}

int main()
{
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int result = secondLargest(arr, n);

    if (result == -1)
        printf("Second largest element not found.\n");
    else
        printf("Second largest element = %d\n", result);

    return 0;
}
