#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("\n1. Find Length\n2. Copy String\n3. Compare Strings\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Length of first string: %lu\n", strlen(str1));
            break;

        case 2:
            strcpy(str2, str1);
            printf("String copied. New second string: %s\n", str2);
            break;

        case 3:
            if (strcmp(str1, str2) == 0)
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
