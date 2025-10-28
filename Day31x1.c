#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, len, flag = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str) - 1; // exclude newline
    for(i = 0; i < len/2; i++) {
        if(str[i] != str[len - 1 - i]) {
            flag = 0; break;
        }
    }
    printf("String is %s palindrome\n", flag ? "" : "not a");
    return 0;
}
