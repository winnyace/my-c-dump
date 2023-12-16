#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char num[51];
    unsigned long long int real = 0, frac = 0;
    int found_decimal = 0;

    printf("give me a number: ");
    if (!(scanf("%s", num)))
    {
        printf("I couldn't read correctly from stdin. Please re-run the program and try again.");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < strlen(num); i++)
    {
        if (!(num[i] >= '0' && num[i] <= '9' || num[i] == '.'))
        {
            printf("I asked for a number. Please re-run the program and try again.");
            exit(EXIT_FAILURE);
        }

        if (num[i] == '.')
        {
            found_decimal = 1;
            continue;
        }
        
        if (!found_decimal)
        {
            real = real * 10 + (num[i] - '0'); 
            continue;
        }
        
        if (num[i] == '0')
        {
            continue;
        }

        frac = frac * 10 + (num[i] - '0');
    }

    if (real % 2 == 0 && frac % 2 == 0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
    return 0;
}
