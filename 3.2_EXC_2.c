#include <stdio.h>
#include <conio.h>

int main(void)
{
    float rad, ht;
    float area;
    char choice;
    printf("What You Wish to do?\n");
    printf("\t1.Calculate The Area of a Circle\n");
    printf("\t2.Calculate The Area of a Rectangle\n");
    printf("\t3.Calculate The Area of a Triangle\n");
    printf("\nEnter Your Choice By Typing c, r or t\n");
    choice = getche();

    if(choice=='c')
    {
        printf("\nEnter The Radius Of The Circle: ");
        scanf("%f", &rad);
        area = 3.1416*rad*rad;
        printf("\nThe Area of the circle is %.3f\n", area);
    }
    else if(choice=='r')
    {
        printf("\nEnter The Dimensions of the Rectangle:\n");
        scanf("%f%f", &rad, &ht);
        printf("\nThe Area of The Rectangle Is %.3f\n", rad*ht);
    }
    else if(choice=='t')
    {
        printf("\nEnter The Dimensions of the Triangle:\n");
        scanf("%f%f", &rad, &ht);
        printf("\nThe Area of The Triangle Is %.3f\n", 0.5*rad*ht);
    }
    else
        printf("\n\nSorry! Wrong Choice!\n\a");


}
