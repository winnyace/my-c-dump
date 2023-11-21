#include <stdio.h>
#include <string.h>

int main()
{
    char name[100] = {'\0'};
    printf("Hello! What's your full name? ");
    fgets(name, sizeof(name), stdin); //scanf works only for strings without any space in them
    name[strlen(name)-1] = '\0';
    printf("Nice to meet you, %s!", name);
    return 0;
}