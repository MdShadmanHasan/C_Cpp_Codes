#include <stdio.h>

int main(void)
{
    int i, j;

    i = 10;
    j = i++;
    j = i;

    printf("i and j: %d %d\n\n\n", i, j);

    return 0;
}
