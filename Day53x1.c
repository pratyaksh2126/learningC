#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100], filtered[100];
    int i, j=0;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for(i=0; str[i]; i++) {
        if(isalnum(str[i])) {
            filtered[j++] = tolower(str[i]);
        }
    }
    filtered[j] = '\0';

    int len = j;
    int flag = 1;
    for(i=0; i<len/2; i++) {
        if(filtered[i] != filtered[len - i -1]) {
            flag = 0;
            break;
        }
    }
    if(flag) printf("Palindrome string\n");
    else printf("Not a palindrome string\n");
    return 0;
}
