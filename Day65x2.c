#include <stdio.h>
int main() {
    FILE *src, *dest;
    char ch;
    src = fopen("source.txt", "r");
    if(!src) {
        printf("Cannot open source file\n");
        return 1;
    }
    dest = fopen("dest.txt", "w");
    if(!dest) {
        printf("Cannot open destination file\n");
        fclose(src);
        return 1;
    }
    while((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }
    printf("Content copied to dest.txt\n");
    fclose(src);
    fclose(dest);
    return 0;
}
