#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("testfile", "w+");
    fprintf(file, "Hello, testfile!\n");
    fprintf(file, "This string was written from a C program!");
    fclose(file);

    file = fopen("testfile", "r+");
    char str[255];
    while (fgets(str, sizeof(str), file) != NULL) {
        printf("%s", str);
    }
    fclose(file);
    return 0;
}
