#include <stdio.h>

int main(void)

{
    int i, j, prime;
    printf("This Program Finds all the Prime Numbers between 2 and 1000\n");
    printf("The Numbers Are: \n");

    for(i=2; i<1000; i++) {
        prime = 1;
        for(j=2; j<= i/2; j++)
            if(!(i%j))
            prime = 0;               /*How The Hell Does This Work?*/
        if(prime)
            printf("%d ", i);
    }

    return 0;
}
