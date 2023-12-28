#include <stdio.h>
#include <stdlib.h>
#define ARRAY_MAX_LENGTH 512

unsigned long long fiboSeq(int input)
{
    if (input <= 1)
    {
        return 1;
    }

    unsigned long long x = 1, y = 1, r;
    while (input-1 > 0)
    {
        r = x + y;
        x = y;
        y = r;
        input--;
    }
    return r;
}

int main()
{
    int input, i;
    unsigned long long fiboNums[ARRAY_MAX_LENGTH];

    printf("Please give me a number. I will show you the Fibonacci sequence up to that element.\n");
    if (!scanf("%d", &input))
    {
        printf("I asked for a number, but I received something else. Please re-run the program and try again.\n");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < input; i++)
    {
        unsigned long long temp = fiboSeq(i);
        fiboNums[i] = temp;
    }

    for (i = 0; i < input; i++)
    {
        printf("%llu ", fiboNums[i]);
    }
}
