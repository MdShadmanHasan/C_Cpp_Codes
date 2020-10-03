#include <stdio.h>

int main(void)
{
  double width, length, height, volume;
  printf("This is a program to compute the volume of a cube. Please enter the dimensions.\n");
  printf("Width: ");
  scanf("%lf", &width);
  printf("Length: ");
  scanf("%lf", &length);
  printf("Height: ");
  scanf("%lf", &height);
  volume = width * length * height;
  printf("\nThe volume of the cube is %f", volume);

  return 0;
}
