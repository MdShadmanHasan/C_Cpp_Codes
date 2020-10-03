#include <stdio.h>
#include <conio.h>

int main(void)
{
    int i;
    char ch, smallest;

    smallest='z';

    printf("Enter 10 Letters: ");

    for(i=0; i<10; i++)
    {
        ch = getche();
        if(ch<smallest)
            smallest=ch;
    }
    printf("\n\n\nThe Smallest of the letters is %c.", smallest);
    return 0;
}
