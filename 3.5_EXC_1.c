#include <stdio.h>

int main(void)

{
    int i=1, n;
    float gal;
    printf("This Program is designed to convert from gallons to liters.\n\n");
    printf("How many times do you wish to perform the conversion?\n");
    scanf("%d", &n);

    do
    {
        printf("\nEnter Gallons: ");
        scanf("%f", &gal);
        printf("\n%.4f gallons = %.4f liters\n", gal, gal*3.7854);
        i++;
    } while(i<=n);

    printf("\a");

    return 0;

}
