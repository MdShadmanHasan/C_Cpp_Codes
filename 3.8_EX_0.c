#include <stdio.h>

int main(void)

{
    int x;

    for(x=0; x<=100; x++) {
        continue;
        printf("%d", x);
        printf("\t%d", x);
        printf("\t%d", x);
        printf("\t%d", x);
        printf("\n");
    }

    printf("%d", x);

    return 0;
}
