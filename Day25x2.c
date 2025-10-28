#include <stdio.h>
int main() {
    int n, rev = 0, temp;
    printf("Enter number: "); scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    printf("%d is %s palindrome\n", n, (n == rev) ? "a" : "not a");
    return 0;
}
