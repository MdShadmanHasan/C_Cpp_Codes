#include <stdio.h>

int main()

{
    int k, r;
    long int i=1, j=1, f;

    printf("Enter the number range: ");
    scanf("%d", &r);

    printf("FIBONACCI SERIES: ");
    printf(" %ld %ld", i, j);


    for(k=2; k<r; k++)
{       f=i+j;
        i = j;
        j = f;
        printf(" %ld", j);
}

    return 0;
}
