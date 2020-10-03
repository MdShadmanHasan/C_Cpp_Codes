#include <stdio.h>

int main(void)

{
    int total, i, j;

    total =0;
    do{
        printf("Enter The Next Number (0 to stop): ");
        scanf("%d", &i);
        printf("\nEnter The Number Again: ");
        scanf("%d", &j);
        printf("\n");
        if(i != j) {
                printf("Mismatch\n");
        continue;
        }
        total = total + i;
    }while(i);

    printf("\nTotal is %d\n", total);

    return 0;
}
