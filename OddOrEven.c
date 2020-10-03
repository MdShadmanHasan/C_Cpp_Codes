#include <stdio.h>

int main(void)
{
    int num;
    int i; /*loop control variable*/

    printf("Please Enter a number to check whether it is odd or even: ");
    scanf("%d", &num);

    if(num%2 == 0)
        printf("\n\n\nThe Number Is Even!!!\n\n\n");
    if(num%2 == 1)
        printf("\n\n\nThe Number Is Odd!!!\n\n\n");
    if(num == 0)
        printf("\n\n\nThe Number Is Zero!!!\n\n\n");

    return 0;

}
