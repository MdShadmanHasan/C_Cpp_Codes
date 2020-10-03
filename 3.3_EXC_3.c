#include <stdio.h>

int main(void)

{
    int i;
    printf("This Displays Arithmetic Progression Till 1000\n");

    for(i=1 ;i<=1000; i=i+i)
    {
        printf("%d\n", i);
    }
    printf("\a");
    return 0;

}
