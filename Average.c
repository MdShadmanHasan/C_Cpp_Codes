#include <stdio.h>

int main()

{
    int a[10], i, size, sum=0, sum1=0, avg, avg2, z=0;
    printf("Enter The Number Of Values: ");
    scanf("%d", &size);
    printf("\n\nEnter The Values To Calculate The Average: \n");

    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    avg = sum/size;

    printf("\n\nThe Average of The Entered Values Is: %d", avg);

    for(i=0; i<size; i++)
    {
        if(a[i]>=avg)
        {
            sum1 = sum1 + a[i];
            z=z+1;
        }

    }

    avg2 = sum1/z;

    printf("\n\nThe Average of The Entries greater than %d is: %d", avg, avg2);
    return 0;
}
