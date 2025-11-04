#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[3];
    int i;

    printf("Enter details of 3 employees:\n");
    for (i = 0; i < 3; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &emp[i].id);
        printf("Enter Name: ");
        scanf("%s", emp[i].name);
        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\nEmployee Details:\n");
    for (i = 0; i < 3; i++) {
        printf("\nID: %d\nName: %s\nSalary: %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }

    return 0;
}
