#include <stdio.h>
int main() {
    int arr[] = {10, 20, 5, 15, 30};
    int n = 5, max = arr[0], min = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
    }
    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}
