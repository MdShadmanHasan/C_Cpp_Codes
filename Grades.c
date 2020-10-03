#include <stdio.h>

int main()
{
    int grades[20], i, size, sum=0, big, avg;
    printf("Enter The Number of Subjects: ");
    scanf("%d", &size);

    printf("Enter The Respective Grades: \n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &grades[i]);
    if(grades[i]>=2 && grades[i]<=4)
     {
        sum = sum + grades[i];
     }
    else
        printf("\nInvalid Grades\n");
    }

    avg = sum/size;

    printf("The Average Of The Grades Is %d", avg);

    big=grades[0];
    for(i=1; i<size; i++)
        if(grades[i]>big)
        big=grades[i];

    printf("The Highest Grade Is: %d", big);
}
