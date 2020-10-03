#include <stdio.h>
#include <conio.h>

int main(void)
{
    int i;
    char ch;

    /* Display all numbers that are multiples of 6 */

    for(i=6; i<10000; i++) {
        if(!i%6) {
            printf("%d more? (Y/N)\n", i);
            ch=getche();
            if(ch=='N')
                break; /* stop the loop */
            printf("\n");
        }
    }

    return 0;
}
