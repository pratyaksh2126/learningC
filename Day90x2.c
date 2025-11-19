#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[50];
    char author[50];
    int year;
};

void addBook() {
    struct Book b;
    FILE *fp = fopen("library.txt", "a");

    printf("Enter Book Title: ");
    scanf(" %[^\n]", b.title);
    printf("Enter Author Name: ");
    scanf(" %[^\n]", b.author);
    printf("Enter Publication Year: ");
    scanf("%d", &b.year);

    fprintf(fp, "%s | %s | %d\n", b.title, b.author, b.year);
    fclose(fp);

    printf("Book Added Successfully!\n");
}

void displayBooks() {
    FILE *fp = fopen("library.txt", "r");
    char line[200];

    printf("\n--- Library Records ---\n");
    while (fgets(line, sizeof(line), fp))
        printf("%s", line);

    fclose(fp);
}

int main() {
    int choice;

    while (1) {
        printf("\n1. Add Book");
        printf("\n2. View All Books");
        printf("\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: exit(0);
            default: printf("Invalid choice!\n");
        }
    }

    return 0;
}
