#include <stdio.h>

int get_sqr(void);

int main(void)
{
    int sqr;

    sqr = get_sqr();
    printf("\n\nThe Square Is: %d\n\n", sqr);

    return 0;
}

int get_sqr(void)

{

   int num;

   printf("Enter A Number: ");
   scanf("%d", &num);
   return num*num; /* squares the number and returns the value */


}
