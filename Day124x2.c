#include <stdio.h>
#include <string.h>

void stringLength(char str[])
{
    printf("Length = %d\n", strlen(str));
}

void stringReverse(char str[])
{
    printf("Reverse = %s\n", strrev(str));
}

void stringCopy(char str[])
{
    char copy[100];
    strcpy(copy, str);
    printf("Copied String = %s\n", copy);
}

int main()
{
    char str[100];
    int choice;

    printf("Enter a string: ");
    gets(str);

    printf("\n1. Find Length");
    printf("\n2. Reverse String");
    printf("\n3. Copy String");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        stringLength(str);
        break;
    case 2:
        stringReverse(str);
        break;
    case 3:
        stringCopy(str);
        break;
    default:
        printf("Invalid Choice\n");
    }

    return 0;
}
