#include <stdio.h>

int main(void)
{
    int i, n;
    printf("Start The Countdown From: ");
    scanf("%d", &n);

    for( ; n ; n--);
    /*
    {
        printf("%d\n", n);
    }
    */
    printf("\a");

    return 0;
}
