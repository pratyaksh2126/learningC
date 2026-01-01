#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int count = 0;

    fp = fopen("data.txt", "r");

    if(fp == NULL) {
        printf("File not found");
        return 0;
    }

    while((ch = fgetc(fp)) != EOF) {
        count++;
    }

    fclose(fp);

    printf("Total characters in file = %d", count);

    return 0;
}
