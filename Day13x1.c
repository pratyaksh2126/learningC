#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a < b)
        printf("Ascending order!\n");
    else if(a > b)
        printf("Descending order!\n");
    else
        printf("Both are equal!\n");
    return 0;
}
