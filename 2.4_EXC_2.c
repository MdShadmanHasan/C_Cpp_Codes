#include <stdio.h>

int main(void)

{
    int i;

    printf("The Numbers Between 17 and 100 that can be evenly divided ny 17 are as follows: ");

    for(i=17; i<=100; i=i+1)
    {
        if(i%17 == 0)
            printf("\n%d\n\n", i);
    }
}
