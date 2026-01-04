#include <stdio.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0, digits = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z')) {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
               str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                vowels++;
            else
                consonants++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
            digits++;
    }

    printf("Vowels = %d\nConsonants = %d\nDigits = %d",
           vowels, consonants, digits);

    return 0;
}
