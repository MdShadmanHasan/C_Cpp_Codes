#include <stdio.h>

int main()
{
    int a[100], size, i, big, small;

    printf("\nEnter The Size Of The Array: ");
    scanf("%d", &size);
    printf("\nEnter %d elements into the array: ", size);
      for(i=0; i<size; i++)
        scanf("%d", &a[i]);

  big = a[0];
    for(i=1; i<size; i++)
    {
        if(a[i]>big)
            big = a[i];
    }

    printf("\nThe Largest Element is %d", big);


  small = a[0];
    for(i=1; i<size; i++)
    {
        if(a[i]<small)
            small = a[i];
    }

    printf("\nThe Smallest Element Of The Array is %d", small);

    return 0;
}
