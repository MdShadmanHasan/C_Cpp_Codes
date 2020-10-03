#include <stdio.h>

int main(void)
{
	float var1, var2;

	printf("Enter Two Floating Numbers Below \n");
	scanf("%f %f", &var1, &var2);
	//scanf("%f", &var2);

	printf("The addition of the two floating point numbers you entered is %f\n", var1+var2);
}