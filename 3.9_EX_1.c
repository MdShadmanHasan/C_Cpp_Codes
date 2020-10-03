#include <stdio.h>
#include <conio.h>

int main(void)

{
    int a, b;
    char ch;

    printf("What Do You Want To Do?\n");
    printf("Add, Subtract, Multiply, or Divide?\n");

    do {
        printf("\nEnter The First Letter in Capital: ");
        ch = getche();
    } while(ch!='A' && ch!='S' && ch!='M' && ch!='D');

    printf("\n\nEnter First Number: ");
    scanf("%d", &a);
    printf("\n\nEnter Second Number: ");
    scanf("%d", &b);

    switch(ch) {
      case 'A': printf("\nThe result is %d\n", a+b);
      break;

      case 'S': printf("\nThe Result is %d\n", a-b);
      break;

      case 'M': printf("\nThe Result is %d\n", a*b);
      break;

      case 'D': if(b!=0) printf("\nThe Result is %d\n", a/b);

    }

    return 0;
}
