#include <stdio.h>
/*This program would convert euros to bdt instead of what the exercise asked to do */
float convert(void);

int main(void) {
  float bdt;
  bdt = convert();
  printf("The amount would be %f taka. \n", bdt);
  return 0;
}

float convert(void) {
  float euro;
  printf("Enter the amount in euros: ");
  scanf("%f", &euro);
  return euro * 101.20;
}
