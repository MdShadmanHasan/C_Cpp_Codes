#include <stdio.h>

int main ()

{
int a, b;

    printf("Enter The Value of Two Integers to swap: ");
    scanf("%d%d", &a, &b);
    printf("The Values you have Entered are x = %d and y = %d \n \n \n", a, b);

    a = a ^ b;
    printf(" a = %d \n", a);
    b = a ^ b;
    a = b ^ a;

    printf("After swapping the values are x = %d, y = %d \n", a, b);

    return 0;




}
