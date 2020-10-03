#include <stdio.h>
#include <conio.h>

int main(void)
{
    char ch;
    int i;

    for(i=0; ;i++)
    {
        ch = getche();
        printf("\n\n\nIts ASCII code is %d\n\n\n", ch);
    }
    return 0;
}
