#include <stdio.h>
#include <math.h>

int main(void)

{
    float x;
    printf("Please Enter A Value to find the Square Root of: ");
    scanf("%f", &x);

    printf("\n\nThe Square Root Of %.2f Is %f", x, sqrt(x));
    return 0;
}
