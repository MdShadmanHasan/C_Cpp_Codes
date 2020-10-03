#include <stdio.h>
#include <conio.h>

int main(void)     /*This Is A Decoder Where Z=A, Y=B... And So On*/

{
    char ch;

    printf("Enter Your Coded Message: \n");

    while(ch!='Q')
    {
        ch = getche();

        if(ch=='a')
            printf("\t\t%c\n", ch+25);
        else if(ch=='b')
            printf("\t\t%c\n", ch+23);
        else if(ch=='c')
            printf("\t\t%c\n", ch+21);
        else if(ch=='d')
            printf("\t\t%c\n", ch+19);
        else if(ch=='e')
            printf("\t\t%c\n", ch+17);
        else if(ch=='f')
            printf("\t\t%c\n", ch+15);
        else if(ch=='g')
            printf("\t\t%c\n", ch+13);
        else if(ch=='h')
            printf("\t\t%c\n", ch+11);
        else if(ch=='i')
            printf("\t\t%c\n", ch+9);
        else if(ch=='j')
            printf("\t\t%c\n", ch+7);
        else if(ch=='k')
            printf("\t\t%c\n", ch+5);
        else if(ch=='l')
            printf("\t\t%c\n", ch+3);
        else if(ch=='m')
            printf("\t\t%c\n", ch+1);
        else if(ch=='n')
            printf("\t\t%c\n", ch-1);
        else if(ch=='o')
            printf("\t\t%c\n", ch-3);
        else if(ch=='p')
            printf("\t\t%c\n", ch-5);
        else if(ch=='q')
            printf("\t\t%c\n", ch-7);
        else if(ch=='r')
            printf("\t\t%c\n", ch-9);
        else if(ch=='s')
            printf("\t\t%c\n", ch-11);
        else if(ch=='t')
            printf("\t\t%c\n", ch-13);
        else if(ch=='u')
            printf("\t\t%c\n", ch-15);
        else if(ch=='v')
            printf("\t\t%c\n", ch-17);
        else if(ch=='w')
            printf("\t\t%c\n", ch-19);
        else if(ch=='x')
            printf("\t\t%c\n", ch-21);
        else if(ch=='y')
            printf("\t\t%c\n", ch-23);
        else if(ch=='z')
            printf("\t\t%c\n", ch-25);
    }

    return 0;
}
