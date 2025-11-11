#include <stdio.h>

double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double mul(double a, double b) { return a * b; }
double divide(double a, double b) { return b == 0 ? 0 : a / b; }

int main() {
    int choice;
    double x, y;
    printf("Simple Calculator\n");
    printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n5) Exit\n");

    while (1) {
        printf("Choose an option (1-5): ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }
        if (choice == 5) break;

        printf("Enter two numbers (separated by space): ");
        if (scanf("%lf %lf", &x, &y) != 2) {
            printf("Invalid numbers. Try again.\n");
            // clear invalid input
            int c; while ((c = getchar()) != '\n' && c != EOF) {}
            continue;
        }

        switch (choice) {
            case 1: printf("Result: %.6g\n", add(x,y)); break;
            case 2: printf("Result: %.6g\n", sub(x,y)); break;
            case 3: printf("Result: %.6g\n", mul(x,y)); break;
            case 4:
                if (y == 0.0) printf("Error: Division by zero.\n");
                else printf("Result: %.6g\n", divide(x,y));
                break;
            default:
                printf("Invalid choice.\n");
        }
    }
    printf("Calculator exited.\n");
    return 0;
}
