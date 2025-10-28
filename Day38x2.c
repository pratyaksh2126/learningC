#include <stdio.h>
int main() {
    int a[2][2] = {{4, 6}, {3, 8}};
    int determinant;

    determinant = a[0][0]*a[1][1] - a[0][1]*a[1][0];

    printf("Determinant of the matrix: %d\n", determinant);
    return 0;
}
