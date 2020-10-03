#include <stdio.h>

int main(void)

{
    int i, j;

    for(i=0; i<20; i++) {
        for(j=1; j<26; j++)
            printf("%d ", j*5);
        printf("\n");
    }

    return 0;
}
