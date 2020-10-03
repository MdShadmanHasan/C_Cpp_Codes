#include <stdio.h>

int main(void)
{
    int i,j;

    for(j=0; j<5; j++) {
    printf("Enter a number between 1 and 5\n");
    scanf("%d", &i);

    switch(i)
    {
    case 1:
        printf("You Typed One!\n\n");
        break;
    case 2:
        printf("You Typed Two!\n\n");
        break;
    case 3:
        printf("You Typed Three!\n\n");
        break;
    case 4:
        printf("You Typed Four!\n\n");
        break;
    case 5:
        printf("You Typed Five!\n\n");
        break;
    default:
        printf("Unrecognized Number!!!\n\n\n");
    }

  }

    return 0;
}
