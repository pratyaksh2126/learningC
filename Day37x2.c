#include <stdio.h>
#define R1 2
#define C1 3
#define R2 3
#define C2 2

void multiplyMatrix(int m1[R1][C1], int m2[R2][C2], int result[R1][C2]) {
    for(int i=0; i<R1; i++) {
        for(int j=0; j<C2; j++) {
            result[i][j] = 0;
            for(int k=0; k<C1; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[R1][C1] = {{1, 2, 3}, {4, 5, 6}};
    int matrix2[R2][C2] = {{7, 8}, {9, 10}, {11, 12}};
    int result[R1][C2];

    multiplyMatrix(matrix1, matrix2, result);

    printf("Result of matrix multiplication:\n");
    for(int i=0; i<R1; i++) {
        for(int j=0; j<C2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
