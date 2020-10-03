 #include <stdio.h>

 int main(void)
 {
     int i;
     printf("Enter An Integer: "); /* In this case the loop control variable is
                                      being initiated by the user */
     scanf("%d", &i);

     for( ; i; i--)               /*Why Does This Count till zero? (actually till 1)
                                    Does this mean that zero is not an integer? :/
                                    And not even the negatives!!!*/
        printf("%d\n", i);

     return 0;
 }
