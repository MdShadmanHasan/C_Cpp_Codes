#include <stdio.h>

int main ()

{
    int amount;
    printf("Please Enter The Desired amount: ");
    scanf("%d", &amount);
    printf("Number of 1000 Tk Notes: %d \n", amount/1000);
    printf("Number of 500 Tk Notes: %d \n", (amount%1000)/500);
    printf("Number of 100 Tk Notes: %d \n", (amount%500)/100);
    printf("Number of 50 Tk Notes: %d \n", (amount%100)/50);
    printf("Number of 20 Tk Notes: %d \n", (amount%50)/20);
    printf("Number of 10 Tk Notes: %d \n", (amount%20)/10);
    printf("Number of 5 Tk Notes: %d \n", (amount%10)/5);
    printf("Number of 2 Tk Notes: %d \n", (amount%5)/2);
    printf("Number of 1 Tk Notes: %d \n", (amount%5)/1);

    return 0;

}
