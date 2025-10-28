#include <stdio.h>
#include <math.h>
int main() {
    int num, temp, sum = 0, digits = 0;
    printf("Enter number: "); scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        digits++; temp /= 10;
    }
    temp = num;
    while (temp != 0) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    printf("%d is %sArmstrong number\n", num, (sum == num) ? "" : "not an ");
    return 0;
}
