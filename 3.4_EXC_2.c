#include <stdio.h>
#include <conio.h>

int main(void)
{
    char ch;

    printf("Enter Your Encoded Message.\n");

    ch = getche();
    while(ch!='\r')
    {
        printf("\t\t%c\n", ch-1);
        ch = getche();
    }

    return 0;
}
