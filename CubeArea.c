#include <stdio.h>

int main (void)

{
    int x, y, z;
    printf("Please enter the three dimensions of the cube: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("The volume of the cube is %d \n", x * y * z);
    return 0;

}
