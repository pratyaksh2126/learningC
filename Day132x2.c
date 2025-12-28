#include <stdio.h>

int length(char str[])
{
    int i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}

void reverse(char str[])
{
    int len = length(str);
    char temp;

    for(int i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int palindrome(char str[])
{
    int len = length(str);
    for(int i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - i - 1])
            return 0;
    }
    return 1;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length = %d\n", length(str));

    if(palindrome(str))
        printf("It is a Palindrome\n");
    else
        printf("Not a Palindrome\n");

    reverse(str);
    printf("Reversed string: %s\n", str);

    return 0;
}
