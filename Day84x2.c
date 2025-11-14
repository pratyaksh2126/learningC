#include <stdio.h>

int factorial(int *n) {
    if (*n == 0 || *n == 1)
        return 1;
    int temp = *n - 1;
    return (*n) * factorial(&temp);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d = %d\n", num, factorial(&num));

    return 0;
}
