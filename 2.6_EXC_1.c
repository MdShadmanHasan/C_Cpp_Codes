#include <stdio.h>

int main(void)

{
    int i, n;
    printf("Enter The Number Till Which you want to know the squares and cubes: ");
    scanf("%d", &n);
    printf("\n\n");
    for(i=1; i<=n; i++)
    {
        printf("\t\t%d\t%d\t%d\n", i, i*i, i*i*i);
    }
    if(n==0)
        printf("\t\t0\t0\t0");
    return 0;
}
