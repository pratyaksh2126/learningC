#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp, digit, count = 0;
    float sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        count++;
        temp /= 10;
    }

    temp = num;

    while (temp != 0)
    {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if ((int)sum == num)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
