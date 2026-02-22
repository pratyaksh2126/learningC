#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int matrix[n][n];
    int isSymmetric = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    if (isSymmetric)
        printf("Symmetric Matrix");
    else
        printf("Not Symmetric Matrix");

    return 0;
}