#include <stdio.h>

int main (void)

{
    int i;

    printf("Please Enter A Value of i: ");
    scanf("%d", &i);
    i = -i;
    printf("This is i: %d", i);
    return 0;

}
