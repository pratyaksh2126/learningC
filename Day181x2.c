#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int nums1[1000], nums2[1000];
    int size1, size2;

    scanf("%d", &size1);
    for (int i = 0; i < size1; i++) {
        scanf("%d", &nums1[i]);
    }

    scanf("%d", &size2);
    for (int i = 0; i < size2; i++) {
        scanf("%d", &nums2[i]);
    }

    qsort(nums1, size1, sizeof(int), compare);
    qsort(nums2, size2, sizeof(int), compare);

    int i = 0, j = 0;

    while (i < size1 && j < size2) {
        if (nums1[i] < nums2[j]) {
            i++;
        } 
        else if (nums1[i] > nums2[j]) {
            j++;
        } 
        else {
            printf("%d ", nums1[i]);
            i++;
            j++;
        }
    }

    return 0;
}
