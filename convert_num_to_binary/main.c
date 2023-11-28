#include <stdio.h>
#include <stdlib.h>

#define MAX_BINARY 512
unsigned int binary[MAX_BINARY];

void convert_to_binary(int num)
{
    if (num < 0) {
        printf("I can't do negative numbers");
    }
    else {
        int rest, i = 0;
        printf("%d in binary is ", num);
        while (num != 0) {
            rest = num % 2;
            binary[i] = rest; i++;
            num /= 2;
        }
        for (int j = i-1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
    }
}

int main()
{
    char num[256], *end;
    printf("Please give me a number: ");
    do {
        scanf("%s", num);
        if (strtol(num, &end, 10)) {
            long int n = strtol(num, &end, 10);
            convert_to_binary(n);
        }
        else {
            printf("You didn't give me a number\n:");
        }
    } while (!strtol(num, &end, 10));
}
