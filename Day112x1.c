#include <stdio.h>
#include <string.h>

int main() {
    char str[100], copy[100], rev[100];
    
    printf("Enter a string: ");
    gets(str);

    // String length
    printf("\nLength of string = %d", strlen(str));

    // Copy string
    strcpy(copy, str);
    printf("\nCopied string = %s", copy);

    // Reverse string
    strcpy(rev, str);
    strrev(rev);
    printf("\nReversed string = %s", rev);

    return 0;
}
