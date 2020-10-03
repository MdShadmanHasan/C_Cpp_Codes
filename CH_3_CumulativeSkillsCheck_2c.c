#include <stdio.h>

int main(void)
{
    int i, j, k;

    for(k=0; k<10; k++) {
        printf("Enter First Number: ");
        scanf("%d", &i);

        printf("\n\nEnter Second Number: ");
        scanf("%d", &j);

        if(j) printf("\n%d\n", i/j);
        else printf("\n\ncannot divide by zero.\n");
        continue;

    }
}
