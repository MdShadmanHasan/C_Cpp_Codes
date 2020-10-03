#include <stdio.h>

int main()

{
    int n, i, square;

    printf("Enter The Number Till Which you want the squares and cubes: ");
    scanf("%d", &n);

    for(i=1; i <= n; i++)
{
    printf("     \n%d square = %d  \n", i, i*i);
    printf("     \n%d   cube = %d  \n", i, i*i*i);


}
    return 0;



}
