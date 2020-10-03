/* prime number tester */
#include <stdio.h>

int main(void)
{
    int num, i, is_prime;

    printf("Enter The Number to Test: ");
    scanf("%d", &num);

    /* now test for factors*/

    is_prime = 1;
    for(i=2; i<=num/2; i=i+1)
        if((num%i) == 0)
        is_prime = 0;

    if(is_prime == 1)
        printf("\n\nThe Number Is Prime!!!\n\n");
    else
        printf("\n\nThe Number Is Not Prime!!!\n\n");

    return 0;
}
