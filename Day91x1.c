#include <stdio.h>

int isArmstrong(int n) {
    int sum = 0, temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;   // cube of each digit
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int num;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is NOT an Armstrong number.\n", num);

    return 0;
}
