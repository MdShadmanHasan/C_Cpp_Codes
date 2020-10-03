#include <stdio.h>

int main()
{
    float grades[20], sum=0.00, big, avg;
    int i, size;
    printf("Enter The Number of Subjects: ");
    scanf("%d", &size);

    printf("\n\nEnter The Respective Grades: \n");
    for(i=0; i<size; i++)
    {
        scanf("%f", &grades[i]);
    if(grades[i]>=2.0 && grades[i]<=4.0)
     {
        sum = sum + grades[i];
     }
    else
        printf("\nInvalid Grades\n");
    }


    printf("\n\nThe Given Grades Are:\n");
    for(i=0; i<size; i++)
        printf("%.2f\n", grades[i]);

    avg = sum/size;

    printf("\n\n\nThe Average Of The Grades Is %.2f", avg);

    big=grades[0];
    for(i=1; i<size; i++)
        if(grades[i]>big)
        big=grades[i];

    printf("\n\n\nThe Highest Grade Is: %.2f", big);
}
