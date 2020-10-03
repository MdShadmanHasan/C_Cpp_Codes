/* A program with two functions */

#include <stdio.h>

void funcl(void); /* prototye for funcl() */

int main()

{
    printf("I ");
    funcl();
    printf("C. \n");

    return 0;
}

void funcl(void)
{
    printf("like ");
}
