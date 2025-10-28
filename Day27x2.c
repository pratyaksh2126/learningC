#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main() {
    int a, b;
    printf("Enter two numbers: "); scanf("%d%d", &a, &b);
    int gcd_val = gcd(a, b);
    int lcm = (a / gcd_val) * b;
    printf("GCD = %d, LCM = %d\n", gcd_val, lcm);
    return 0;
}
