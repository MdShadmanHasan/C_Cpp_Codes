#include <stdio.h>

int main (void)
{
    float num1, num2;
    int choice;

    printf("Enter The First Number: ");
    scanf("%f", &num1);

    printf("\n\n\nEnter The Second Number: ");
    scanf("%f", &num2);

    printf("\n\n\nWhat do you wish to do\?\n\n\n");
    printf("\t1.Summation!\n");
    printf("\t2.Multiplication!\n");

    scanf("%d", &choice);

    if(choice == 1)
        printf("\n\nThe Summation Is %.3f", num1 + num2);
    else if(choice == 2)
        printf("\n\nThe Product Is %.3f", num1 * num2);
    else
        printf("\n\nInvalid Choice!!!");
    return 0;
}
