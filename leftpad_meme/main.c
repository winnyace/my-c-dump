#include <stdio.h>
#include <string.h>
#define MAX_STRING_LENGTH 512

const char* leftpad(char* s, char* fill, int n)
{
    static char result[MAX_STRING_LENGTH];
    for (int i = 0; i < n; i++)
        strcat(result, fill);
    strcat(result, s);
    return result;
}

int main()
{
    printf("%s", leftpad("test", "A", 150));
}