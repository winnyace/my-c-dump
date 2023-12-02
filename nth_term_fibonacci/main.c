#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    unsigned long long int next_elem, elem1 = 0, elem2 = 1;
    printf("input = ");
    if (!scanf("%u", &input))
    {
        printf("give me a positive number reeeee!");
        exit(1);
    }
    if (input < 0)
    {
        printf("give me a positive number reeeee!");
        exit(1);
    }

    while (input-1 > 0)
    {
        next_elem = elem1 + elem2;
        elem1 = elem2;
        elem2 = next_elem;
        input--;
    }
    printf("%llu", next_elem);
}
