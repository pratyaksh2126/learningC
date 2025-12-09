#include <stdio.h>

// Structure declaration
struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function to input student data
void inputStudent(struct Student *s) {
    printf("Enter name: ");
    scanf("%s", s->name);

    printf("Enter roll number: ");
    scanf("%d", &s->roll);

    printf("Enter marks: ");
    scanf("%f", &s->marks);
}

// Function to display student data
void displayStudent(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", s.name);
    printf("Roll  : %d\n", s.roll);
    printf("Marks : %.2f\n", s.marks);
}

int main() {
    struct Student s;

    inputStudent(&s);
    displayStudent(s);

    return 0;
}
