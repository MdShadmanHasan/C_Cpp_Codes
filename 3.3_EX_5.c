#include <stdio.h>

int main(void)
{
    int i;
    for(i=0; i<10; )
    {
        printf("%d", i);
        i++; /*loop control variable can be altered outside
               increment section*/
    }
    return 0;
}
