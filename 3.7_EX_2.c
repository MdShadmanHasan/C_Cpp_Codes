#include <stdio.h>

int main(void)
{
    int i, j;

    for(i=0; i<5; i++) {
        for(j=0; j<100; j++){
            printf("%d\t", j);
            if(j==9)
                break;
        }
       printf("\n");
    }

    return 0;
}
