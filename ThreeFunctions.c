#include <stdio.h>


void func1(void);
void func2(void);

int main()

{
    func2();
    printf("C");

}


void func2(void)
{

    func1();
    printf("Like ");

}


void func1(void)
{

    printf("I ");

}
