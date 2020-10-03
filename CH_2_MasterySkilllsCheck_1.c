#include <stdio.h>

int main(void)

{
    int i, g, n = 11;
    printf("\t\t\t\t***********\n");
    printf("\t\t\t\t  WELCOME\n");
    printf("\t\t\t\t***********\n");
    printf("We\'re going to play a game today!\n");
    printf("It\'s called \"Guess the Magic Number!\"\n\n");
    printf("Remember: You have 10 Tries!!!\n");
    printf("So Let\'s Start!!!\n");

    for(i=0; i<10; i++)
    {
        printf("\nWhat\'s Your Guess?\n");
        scanf("%d", &g);

        if(g<n)
            printf("\nThat\'s Low dude!\n");
        if(g>n && g<40)
            printf("\nThat\'s High!\n");
        if(g>=40 && !(g<40))
            printf("\nWhoa!!! That's way too high!!!\n");
        if(g==n)
           {
                printf("\n\t\t\t\tRIGHT!!!\a");
                break;
           }
    }
    printf("\nYou Took %d tries!!! Congratulations!!!\n", i+1);
    return 0;
}
