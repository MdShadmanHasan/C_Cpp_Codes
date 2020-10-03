#include "stdio.h"
#include "conio.h"

int encryption(void);
int decryption(void);

int main(void) {
  char selection;
  printf("This is program to demonstrate Ceaser Cipher.");

  do {
    printf("\nChoose what you want to do:\n1.Encryption (press e)\n2.Decryption (press d)\nPress Backspace to quit the Program!\n");
    selection = getche();
  } while(selection != 'e' && selection != 'd' && selection != 'E' && selection != 'D' && selection != '\b');

  if (selection == 'e' || selection == 'E')
    encryption();
  else if (selection == 'd' || selection == 'D')
    decryption();
  return 0;
}

int encryption(void) {
  char input = 'a';
  printf("\nEnter the characters to encrypt: \n");

  for (input; input != '\b';) {
    input = getche();
    switch (input) {
      case 'a':
        printf("\t x\n");
        break;
      case 'b':
        printf("\t y\n");
        break;
      case 'c':
        printf("\t z\n");
        break;
      case 'A':
        printf("\t X\n");
        break;
      case 'B':
        printf("\t Y\n");
        break;
      case 'C':
        printf("\t Z\n");
        break;
      default:
        printf("\t %c\n", input - 3);
        break;
    }
    //printf("\t %c\n", input - 3);
    //printf("\t %d\n", input);
  }
  return 0;
}

int decryption(void) {
  char input = 'a';
  printf("\nEnter the characters to decrypt: \n");

  for (input; input != '\b';) {
    input = getche();
    switch (input) {
      case 'x':
        printf("\t a\n");
        break;
      case 'y':
        printf("\t b\n");
        break;
      case 'z':
        printf("\t c\n");
        break;
      case 'X':
        printf("\t A\n");
        break;
      case 'Y':
        printf("\t B\n");
        break;
      case 'Z':
        printf("\t C\n");
        break;
      default:
        printf("\t %c\n", input + 3);
        break;
    }
    //printf("\t %c\n", input + 3);
  }
  return 0;
}
