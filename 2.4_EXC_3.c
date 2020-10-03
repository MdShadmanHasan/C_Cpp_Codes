#include <stdio.h>

int main(void)

{
    int i, n;
    printf("Enter The Number of which you want to know the factors: ");
    scanf("%d", &n);
    printf("\n\n\nThe Factors of %d are:\t", n);

    for(i=1; i<=n; i++)
    {
        if(n%i == 0)
            printf("%d\t", i);
    }
    printf("\n\n\n\n\n\n");



    return 0;
}
