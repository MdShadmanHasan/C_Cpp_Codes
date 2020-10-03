#include <stdio.h>
#include <conio.h>

int main(void)
{
    int i=0;  /* quoting from the text_TeachYourselfC by Herb Schildt
                 page 79: "For Example, you do not have to use the
                 initialization section to initialize a loop control
                 variable." And this is not a loop control variable
                 by the way, because this is not controlling the loop
                 because there's no use of it in the 'conditional-test'
                 segment of the for loop. */
    char ch;

    ch = 'a'; /* give ch an initial value (the reason this is being
                 done is to prevent 'ch' from accidentally containing
                 a 'q' when the program begins) */

    for( ; ch != 'q'; i++) {
        printf("Pass: %d\n", i);
    ch = getche();
    }

    return 0;
}
