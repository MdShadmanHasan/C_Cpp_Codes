#include <stdio.h>

int main(void)
{
    int a, b;
    char ch;

    printf("What Do You Wnat To Do?\n");
    printf("Add, Subtract, Multiply or Divide?\n");
    printf("Enter The First Letter of Your Choice: \n");
    ch = getchar();
    printf("\n");

    printf("Enter The First Number: ");
    scanf("%d", &a);
    printf("\n");
    printf("Enter The Second Number: ");
    scanf("%d", &b);

    if(ch=='A')
        printf("\n%d", a+b);
    if(ch=='B')
        printf("\n%d", a-b);
    if(ch=='M')
        printf("\n%d", a*b);
    if(ch=='D' && b!=0)
        printf("\n%d", a/b);

    return 0;
}
