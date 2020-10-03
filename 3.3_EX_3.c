#include <stdio.h>
#include <conio.h>

int main(void)
{
    char ch; /*Why is this 'ch' not initiated in this program? Is there no possibility of
               a 'q' accidentally getting into this variable? If no then is it because
               there's no other variables in this program?*/
    for(ch=getche(); ch!='q'; ch=getche()); /*As this loop is immediately terminated with a
                                              semicolon, means that the target of this loop
                                              is empty. This loop nothing to do besides
                                              inputting values one after one into the variable
                                              'ch'.*/
    printf("\n\n\nFound the q!!!\n\n\n");
    return 0;
}
