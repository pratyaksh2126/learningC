#include <stdio.h>
#include <string.h>
int main() {
    char arr[5][20] = {"banana", "apple", "cherry", "date", "elderberry"};
    char temp[20];
    for(int i=0; i<5-1; i++) {
        for(int j=i+1; j<5; j++) {
            if(strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
    printf("Sorted strings:\n");
    for(int i=0; i<5; i++) printf("%s\n", arr[i]);
    return 0;
}
