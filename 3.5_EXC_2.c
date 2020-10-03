#include <stdio.h>

int main(void)

{
    int i=5, ch;

    printf("\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
    printf("\t\t\t\t%c%cMailing List Menu%c%c\n", i, i-1, i-1, i);
    printf("\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);

    printf("\t\t\t\t1. Enter Address\n");
    printf("\t\t\t\t2. Delete Address\n");
    printf("\t\t\t\t3. Search the list\n");
    printf("\t\t\t\t4. Print the list\n");
    printf("\t\t\t\t5. Quit\n");


    do {
        printf("\n\nEnter The Number Of Your Choice(1-5)\n\n");
        scanf("%d", &ch);

    } while(ch!=5 && ch!=4 && ch!=3 && ch!=2 && ch!=1);

    printf("\n\nYou Chose %d\n\n", ch);
    return 0;
}
