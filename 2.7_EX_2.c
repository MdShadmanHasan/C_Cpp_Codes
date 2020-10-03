#include <stdio.h>

int main(void)
{
    int i, j;

    printf("Enter The First Number: ");
    scanf("%d", &i);
    printf("\nEnter The Second Number: ");
    scanf("%d", &j);
    printf("\n\n");

    /*relational operators*/
    printf("\t\ti < j : %d\n", i <j);
    printf("\t\ti > j : %d\n", i > j);
    printf("\t\ti == j : %d\n", i == j);
    printf("\t\ti >= j : %d\n", i >= j);
    printf("\t\ti <= j : %d\n", i <= j);

    /*logical operations*/
    printf("\t\ti && j : %d\n", i && j);
    printf("\t\ti || j : %d\n", i || j);
    printf("\t\t!i !j : %d %d\n\n", !i, !j);

    return 0;
}
