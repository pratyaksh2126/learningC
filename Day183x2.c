#include <stdio.h>

int main() {
    int m, n;

    scanf("%d %d", &m, &n);

    int matrix[m][n];
    int transpose[n][m];

    int (*ptr)[n] = matrix;      
    int (*tptr)[m] = transpose;  

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", (*(ptr + i) + j));
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            *(*(tptr + j) + i) = *(*(ptr + i) + j);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", *(*(tptr + i) + j));
        }
        printf("\n");
    }

    return 0;
}
