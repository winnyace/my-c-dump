#include <stdio.h>
#include <stdlib.h>

int fcopy(char fileNameSRC[], char fileNameDEST[])
{
    FILE *fin, *fout;
    char str[1024];

    if (!(fin = fopen(fileNameSRC, "r")))
    {
        fprintf(stderr, "ERR: Couldn't open the source file. Aborting operation.\n");
        return 0;
    }
    if (!(fout = fopen(fileNameDEST, "w")))
    {
        fprintf(stderr, "ERR: Couldn't open/create the destination file. Aborting operation.\n");
        return 0;
    }

    while (fgets(str, sizeof(str), fin))
    {
        fprintf(fout, "%s", str);
    }
    return 1;
}

int main(int argc, char* argv[])
{
    if(fcopy(argv[1], argv[2]))
    {
        printf("Success. Check your file now.\n");
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}