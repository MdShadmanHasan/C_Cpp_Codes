#include <stdio.h>
#include <conio.h>

int main(void)
{
    printf("Enter Q to exit anytime\n\n");

    char ch;

    do {
    printf("\nEnter The Letter: " );
    ch = getche();

    switch(ch) {
    case'a':
    case'e':
    case'i':
    case'o':
    case'u':
        printf(" is a vowel\n");
        break;
    default:
        printf(" is a consonant\n");

    }

  } while(ch != 'Q');

    return 0;
}
