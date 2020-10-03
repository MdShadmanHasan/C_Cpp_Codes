#include <stdio.h>

int main ()

{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num < 0)
      printf("\n\n\nThe Number Is Negative");
    else
      printf("\n\n\nThe Number Is Non-Negative");


    return 0;


}
