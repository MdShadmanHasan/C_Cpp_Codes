#include <stdio.h>
#include <conio.h>

int main(void)

{
    int a, b;
    char ch;

    printf("Do You Want to:\nAdd, Subtract, Multiply or Divide?\n");

    /*force user to enter a valid response*/

    do
    {
        printf("\nEnter The First Letter in Capital: ");
        ch = getche();
    } while(ch!='A' && ch!='S' && ch!='M' && ch!='D');

    printf("\n\n\nEnter the first number: ");
    scanf("%d", &a);
    printf("\n\n\nEnter the second number: ");
    scanf("%d", &b);

    if(ch=='A')
        printf("\nThe Result is: %d\n\n", a+b);
    else if(ch=='S')
        printf("\nThe Result is: %d\n\n", a-b);
    else if(ch=='M')
        printf("\nThe Result is: %d\n\n", a*b);
    else if(ch=='D' && b!=0)
        printf("\nThe Result is: %d\n\n", a/b);

    return 0;
}
