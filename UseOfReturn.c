#include <stdio.h>

void func1(void);

int main()
{
    func1();

    return 0;
}


void func1(void)
{
  printf("This Line Is Printed\n");
  return ; /*return with no value*/
  printf("This Is Never Printed!!!");

}
