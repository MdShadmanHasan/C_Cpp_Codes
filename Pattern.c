#include<stdio.h>
int main()
{
    int n, c, k, x = 1;
    printf("Enter The Number Of Lines: ");
    scanf("%d", &n);
    for ( c = 1 ; c <= n ; c++ )
{
    for ( k = 1 ; k <= c ; k++ )
{
    printf("%d", x);
    x++;
}
    x--;
    for ( k = 1 ; k <= c-1; k++ )
{
    x--;
    printf("%d", x);
}
    printf("\n");
    x = 1;
}
    return 0;
}
