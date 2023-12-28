#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input, work_val;
    unsigned long long int next_elem, elem1 = 0, elem2 = 1;
    printf("input = ");
    if (!scanf("%u", &input))
    {
        printf("give me a number reeeee!");
        exit(1);
    }
    if (input < 0)
    {
        printf("give me a positive number reeeee!");
        exit(1);
    }
    if (input == 1)
    {
        printf("The first element from the Fibonacci sequence is 1.");
        return 0;
    }

    work_val = input;

    while (work_val-1 > 0)
    {
        next_elem = elem1 + elem2;
        elem1 = elem2;
        elem2 = next_elem;
        work_val--;
    }
    printf("The %d element from the Fibonacci sequence is '%llu'.", input, next_elem);
    return 0;
}
