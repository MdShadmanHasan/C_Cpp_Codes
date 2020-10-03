#include <stdio.h>

int main(void)
{
    int i, n;
    printf("Enter an Integer from which you want to count backwards: ");
    scanf("%d", &n);
    for(i=n; i>=0; i--)
        printf("%d\n", i);
    printf("\a");
    return 0;
}
