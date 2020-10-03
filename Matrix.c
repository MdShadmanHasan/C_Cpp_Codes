#include <stdio.h>

int main()

{
    int a[4][3], b[4][3], c[4][3], i, j;
    printf("Enter The Values Of The First Matrix: \n");

    for(i=0; i<4; i++)
        for(j=0; j<3; j++)
        scanf("%d", &a[i][j]);

    printf("\nEnter The Values Of The Second Matrix: \n");

    for(i=0; i<4; i++)
        for(j=0; j<3; j++)
        scanf("%d", &b[i][j]);

    printf("\nThe First Matrix Is: \n");

    for(i=0; i<4; i++)
    {   printf("\n");
        for(j=0; j<3; j++)
        printf("%d\t", a[i][j]);
    }

    printf("\nThe Second Matrix Is: \n");

    for(i=0; i<4; i++)
    {   printf("\n");
        for(j=0; j<3; j++)
        printf("%d\t", b[i][j]);
    }

    printf("\nThe First Matrix Is: \n");

    for(i=0; i<4; i++)
        for(j=0; j<3; j++)
            c[i][j]=a[i][j]+b[i][j];


    printf("\nThe Result of the addition of the two Matrix Is: \n");

    for(i=0; i<4; i++)
    {   printf("\n");
        for(j=0; j<3; j++)
        printf("%d\t", c[i][j]);
    }

    return 0;

}
