#include <stdio.h>
#include <conio.h>

int main(void)

{
    char ch;
    int i, j;

    for(i=0; i<10; i++) {
        ch = getche();
        printf("\n");
        for(j=0; j<ch; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
