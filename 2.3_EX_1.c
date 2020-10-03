#include <stdio.h>

int main(void)
{
    float num;
    int choice;

    printf("Which Conversion Do You Prefer\?");
    printf("\n\t1.Feet To Meters!\n\t2.Meters To Feet!\n\n\n");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("\n\nEnter Number of feet: ");
        scanf("%f", &num);
        printf("\n\n%.2f ft equals %f meters\n\n", num, num / 3.2823);
    }

    else if(choice == 2)
    {
        printf("\n\nEnter Number of Meters: ");
        scanf("%f", &num);
        printf("\n\n%.2f meters equals %f ft\n\n", num, num * 3.2823);
    }
    else
    {
        printf("\n\n\n\t\t\t*************************\n");
        printf("\t\t\t*****Invalid Choice!*****\n");
        printf("\t\t\t*************************\n\n\n\a");

    }

    return 0;
}
