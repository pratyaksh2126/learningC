#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[5];
    int i, maxIndex = 0;

    // Input
    for(i = 0; i < 5; i++) {
        printf("\nEnter details of employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &e[i].id);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    // Find highest salary
    for(i = 1; i < 5; i++) {
        if(e[i].salary > e[maxIndex].salary) {
            maxIndex = i;
        }
    }

    // Output
    printf("\nEmployee with Highest Salary\n");
    printf("ID: %d\n", e[maxIndex].id);
    printf("Name: %s\n", e[maxIndex].name);
    printf("Salary: %.2f\n", e[maxIndex].salary);

    return 0;
}
