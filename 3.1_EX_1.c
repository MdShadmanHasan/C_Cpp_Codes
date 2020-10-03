#include <stdio.h>
#include <conio.h> /* getche() function works here without this <conio.h> in
                      Code::Blocks 13.12 but Herbert Schildt's Teach Yourself C
                      Page 72 says "For most compilers this function {getche()}
                      requires a header file called CONIO.H, but it might be
                      called something different in your compiler." So?
                      Does mingw32 declare it within STDIO.H?*/

int main(void)
{
    char ch;
    printf("Enter a character: ");
    ch = getche();
    printf("\n\n\nIts ASCII code is %d\n\n\n", ch);

    return 0;
}
