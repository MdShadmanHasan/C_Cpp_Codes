#include <stdio.h>

int main(void)
{
    int answer, count, chances, right;

    for(count=1; count<11; count++) {
        printf("What is %d + %d?", count, count);
        scanf("%d", &answer);

        if(answer == count+count)
            printf("\n\n\nRight!\n");
        else {
            printf("\nSorry, you're wrong.\n");
            printf("Try again.\n");

            right = 0;

            /*nested for*/
            for(chances=0; chances<3 && !right; chances++) {
                printf("What is %d + %d? ", count, count);
                scanf("%d", &answer);

                if(answer == count+count) {
                    printf("\n\n\nRight!\n");
                    right = 1;
                }
            }
            if(!right)
                printf("The Answer is %d. \n", count+count);
        }
    }
    return 0;
}
