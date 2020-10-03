#include <stdio.h>

int main(void)

{
    int answer;
    printf("What is 10 + 14 = ?\n");
    scanf("%d", &answer);
    if(answer == 10+14)
        printf("\n\n\nCorrect!!!\n\n\nCongratulations!!!\n\n\n");
    else
        printf("\n\n\nWrong!!!!\n\n\nPlease Try Again!!!\n\n\n");

    printf("\n\n\nWhat is 20 + 35 = ?\n");
    scanf("%d", &answer);
    if(answer == 20+35)
        printf("\n\n\nCorrect!!!\n\n\nCongratulations!!!\n\n\n");
    else
        printf("\n\n\nWrong!!!!\n\n\nPlease Try Again!!!\n\n\n");

    printf("\n\n\nWhat is 30 + 75 = ?\n");
    scanf("%d", &answer);
    if(answer == 30+75)
        printf("\n\n\nCorrect!!!\n\n\nCongratulations!!!\n\n\n");
    else
        printf("\n\n\nWrong!!!!\n\n\nPlease Try Again!!!\n\n\n");

    printf("\n\n\nWhat is 71 - 35 = ?\n");
    scanf("%d", &answer);
    if(answer == 71-35)
        printf("\n\n\nCorrect!!!\n\n\nCongratulations!!!\n\n\n");
    else
        printf("\n\n\nWrong!!!!\n\n\nPlease Try Again!!!\n\n\n");
    return 0;

}
