#include <stdio.h>

int main(void)

{
    int i, n, residual;
    printf("This Program Finds all the Prime Numbers between 2 and 1000\n");
    printf("The Numbers Are: \n");

    for(n=1000; n!=1 ; n--){
        for(i=1000; ; i--){
            residual = n%i;
            if(residual!=0){
            printf("%d ", n);
            break;
           }
        }
    }

    return 0;
}
