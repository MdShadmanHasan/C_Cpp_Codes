#include <stdio.h>

int main(void)
{
    float dist, speed;
    int num, ch1, ch2;

    printf("Enter The Number Of Drive Time Computations You want to perform: ");
    scanf("%d", &num);

    for( ; num; num--)
    {
        printf("\n\n\nEnter The Distance: ");
        scanf("%f", &dist);

        printf("\nUnits?\n");
        printf("1.Km\n2.Mi\n");
        printf("Enter Your Choice: ");
        scanf("%d", &ch1);

        if(ch1==1)
        {
            printf("\nEnter The Average Speed in Kmph: ");
            scanf("%f", &speed);
            printf("\nThe Drive Would be approximately %.3f hours\n", dist/speed);
        }
        else if(ch1==2)
        {
            printf("\nEnter The Average Speed in mph: ");
            scanf("%f", &speed);
            printf("\nThe Drive Time is approximately %.3f hours\n", dist/speed);
        }
        else
            printf("\nSorry! Wrong Choice! Please Try Again!\n\a");

    }

    return 0;
}
