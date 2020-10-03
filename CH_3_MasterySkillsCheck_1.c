#include <stdio.h>
#include <conio.h>

int main(void)

{
    char ch;
    printf("This Program Converts The Small Letters You Enter Into Capital Letters!!!\n");
    printf("Enter the small letters or press enter to quit\n\n");

    do {
        ch = getche();
        printf("\t %c", ch-32);
        printf("\n");
    } while (ch!='\r');

    return 0;
}
