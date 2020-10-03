#include <stdio.h>
#include <conio.h>

int main(void)

{
    int i;
    printf("Enter ASCII codes:\n");

    for( ; ; )
    {
        scanf("%d", &i);
        printf("\t\t\t%c\n", i);
    }

    return 0;

}
