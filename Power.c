#include <stdio.h>

int main ()

{
    int pow, num, i;
    int sum =1;
    printf("Enter a Number: ");
    scanf("%d", &num);
    printf("Enter a power: ");
    scanf("%d", &pow);

    for(i=1; i<=pow; i++)
        sum = sum * num;
    printf("\n%d to the power %d is: %d", num, pow,sum);
    return 0;


}
