#include <stdio.h>

int main(void)
{
    int answer, count;

    for(count = 1; count < 10; count = count + 1)
    {
        printf("What is %d + %d?\n", count, count + 1);
        scanf("%d", &answer);

        if(answer == count + count + 1)
        printf("\n\nCorrect!!!\n\n");
        else
        {
            printf("\n\nSorry, You're Wrong!!!!\n");
            printf("The answer is %d. \n\n", count + count + 1);
        }
    }

    return 0;
}
