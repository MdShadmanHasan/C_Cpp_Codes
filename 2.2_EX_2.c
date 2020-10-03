#include <stdio.h>

int main(void)
{
    float num1, num2;

    printf("Enter The First Number: ");
    scanf("%f", &num1);

    printf("\n\n\nEnter The Second Number: ");
    scanf("%f", &num2);

    if(num2 == 0)
        printf("\n\n\nCannot Divide By Zero!!!\n\n\n");
    else
        printf("\n\nThe Result is %f\n\n\n", num1 / num2);

    return 0;

}
