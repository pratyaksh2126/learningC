#include <stdio.h>
int main() {
    FILE *fp = fopen("file.txt", "r");
    if(!fp) {
        printf("File not found.\n");
        return 1;
    }
    int words=0, lines=0, chars=0;
    char c, prev = '\0';
    while((c = fgetc(fp)) != EOF) {
        chars++;
        if(c == '\n') lines++;
        if((prev == ' ' || prev == '\n' || prev == '\t') && c != ' ' && c != '\n' && c != '\t') words++;
        prev = c;
    }
    fclose(fp);
    printf("Lines: %d Words: %d Characters: %d\n", lines, words, chars);
    return 0;
}
