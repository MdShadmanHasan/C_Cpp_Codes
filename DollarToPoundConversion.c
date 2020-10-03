#include <stdio.h>

float convert(void);

int main()
{
    float x;

    x = convert();

    printf("\n\nThe Converted Amount In Pounds is %0.3f\n\n", x);

    return 0;
}

float convert(void)
{
    float dollars, pounds;
    printf("Enter The Amount Of Dollars to Convert: ");
    scanf("%f", &dollars);
    pounds = dollars/2;
    return pounds;
}
