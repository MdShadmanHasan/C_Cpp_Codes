#include <stdio.h>

int main(void)

{
    int i;

    printf("Enter a number to check: ");
    scanf("%d", &i);

    if(i>0)
        if(i)
    printf("\n\nThe Number Is Positive.");

    if(i<0)
        if(i)
        printf("\n\nThe Number Is Negative.");

    if(!i)
        printf("\n\nThe Number Is Zero.");

    return 0;
}
