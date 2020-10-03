#include <stdio.h>

void function_1(void);
void function_2(void);
void function_3(void);
void function_4(void);
void function_5(void);

int main(void) {
  printf("The Woods are Lovely");
  function_1();
  function_2();
  printf("But I Have");
  function_3();
  function_4();
  function_5();
  function_4();
  function_5();
  return 0;
}

void function_1(void) {
  printf(" Dark");
}

void function_2(void){
  printf(" and Deep\n");
}

void function_3(void){
  printf(" Promises to Keep\n");
}

void function_4(void){
  printf("And Miles to Go, ");
}

void function_5(void){
  printf("Before I Sleep\n");
}
