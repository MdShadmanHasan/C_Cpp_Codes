#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    if(num < 0)
        printf("\n\nThe Number Is Negative!!! \n\n");
    if(num > -1)
        printf("\n\nThe Number Is Non-Negative!!! \n\n");

    return 0;
}
