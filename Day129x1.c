#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], result[3][3] = {0};

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++)
                result[i][j] += a[i][k] * b[k][j];

    printf("Resultant Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}
