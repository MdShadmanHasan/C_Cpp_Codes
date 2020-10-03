#include <stdio.h>

float kmph2mph(float x);
float mph2kmph(float y);

int choice;
float x, y;

int main(void)
{
    printf("Which Conversion Do You Wish To Perform\?");
    printf("\n\t\t1.kmph to mph\n\t\t2.mph to kmph\n\n");
    printf("\nEnter Your Choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("\n\nEnter Values In kmph: ");
        scanf("%f", &x);
        printf("\n\n%.3f kmph = %f mph\n\n\n", x, kmph2mph(x));
    }

    else if(choice == 2)
    {
        printf("\n\nEnter Values In mph: ");
        scanf("%f", &y);
        printf("\n\n%.3f mph = %f kmph\n\n\n", y, mph2kmph(y));
    }

    else
    {
        printf("\n\n\n\t\t\t*************************\n");
        printf("\t\t\t*****Invalid Choice!*****\n");
        printf("\t\t\t*************************\n\n\n\a");
    }

    return 0;
}

float kmph2mph(float x)
{
    return x * 0.6214;
}

float mph2kmph(float y)
{
    return y * 1.6094;
}
