#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 512
static char result[MAX_STRING_LENGTH];

const char* leftpad(char *src, char *fill, unsigned n)
{
    if (!(strlen(src) + n * strlen(fill) <= MAX_STRING_LENGTH && strlen(src) != 0))
    {
        printf("\n\nERROR: The source string was null or the amount you wanted to pad to the left surpassed the maximum string length for the result (which is 512 characters long). Returning the string unmodified\n\n");
        return src;
    }

    if (!(strlen(result) == 0))
    {
        memset(result, '\0', sizeof(result));
    }
    for (unsigned i = 0; i < n; i++)
    {
        strcat(result, fill);
    }
    strcat(result, src);
    return result;
}

int main()
{
    char str[MAX_STRING_LENGTH];
    strcpy(str, leftpad("test", " ", 100));
    printf("%s", str);
}
