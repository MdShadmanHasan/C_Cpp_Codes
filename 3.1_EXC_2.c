#include <stdio.h>

int main(void)
{
    char ch;

    for(ch='a'; ch<='z'; ch++)
    {
        printf("The ASCII code for %c is %d\n", ch, ch);
    }

    for(ch='A'; ch<='Z'; ch++)
    {
        printf("\t\t\t\t\t\bThe ASCII code for %c is %d\n", ch, ch);
    }
    return 0;
}
