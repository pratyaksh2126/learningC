#include <stdio.h>
int main() {
    int matrix[2][2] = {{4, 6}, {3, 8}};
    int determinant = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    printf("Determinant: %d\n", determinant);
    return 0;
}
