#include <stdio.h>
#include <conio.h>
int main(void)

{

    char ch;

    printf("Enter Your Message:\n\t");

    ch = getche();
    while(ch != '\r')
    {
        printf("\n%c\t", ch+1);
        ch = getche();
    }

    return 0;
}
