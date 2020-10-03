#include <stdio.h>
#include <conio.h>

int main(void)
{
    char ch;

    do {
        printf("\nEnter a character, q to quit: ");
        ch = getche();
        printf("\n");

        switch(ch) {
        case 'a':
            printf("Now Is ");
        case 'b':
            printf("The Time ");
        case 'c':
            printf("for all good men.");
            break;
        case 'd':
            printf("The Summer ");
        case 'e':
            printf("Soldier ");
        }

    } while(ch!='q');

    return 0;
}
