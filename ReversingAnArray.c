#include <stdio.h>

int main()

{
    int size, i, a[100], b[100], j;
    printf("Enter The Number Of Elements: ");
    scanf("%d", &size);

    printf("\nEnter The Array Elements: ");
    for(i=0; i<size; i++)
        scanf("%d", &a[i]);

    printf("\n\n\nThe Given Array is: ");
    for(i=0; i<size; i++)
        printf("%d ", a[i]);

    for(i=size-1, j=0; i>=0; i--, j++)
        b[j]=a[i];

    for(i=0; i<size; i++)
        a[i]=b[i];

    printf("\n\n\nThe Reversed Array Is: ");
    for(i=0; i<size; i++)
        printf("%d ", a[i]);

    return 0;
}
