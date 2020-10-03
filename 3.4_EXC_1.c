#include <stdio.h>

int main(void)

{
    float speed, dist;
    int num, i=1;

    printf("Enter The Number Of Drive Time Calculations You Want To Perform: ");
    scanf("%d", &num);

    while(i <= num)
    {
        printf("\nEnter The Distance Travelled: ");
        scanf("%f", &dist);

        printf("\nNow Enter The Average Speed: ");
        scanf("%f", &speed);

        printf("\n\n\nThe Required Drive Time Would Be Approximately %.3f\n", dist/speed);

        i++;
    }

    printf("\n\n\nThank You!!!\n\n\n");
    return 0;


}
