#include <stdio.h>
#include <conio.h>

int main(void)

{
    char ch;

    do {
            ch = getche();

    switch (ch) {
    case '\t':
        printf("\nTab\n");
        break;
    case '\r':
        printf("\nNewline\n");
        break;
    case '\b':
        printf("\nBackspace\n");
        break;

    default:
        printf("\nPress q to exit.\n\n");

    }


    } while(ch!='q');

    return 0;
}
