#include <stdio.h>

int main(void)
	{
		char ch;
		float f;
		double d;
		int num;

		ch = 'X';
		f = 100.123;
		d = 123.009;

		scanf("%d", &num);
		printf("ch is %c, ", ch);
		printf("f is %f, ", f);
		printf("d is %f\n", d);
		printf("Hello, World!\n");
		printf("Ha Ha Ha!\nI'm back to do programming again!\n");
		printf("This is a short C Program!\n");
		printf("This prints the number %d\n", 99);
		printf("This prints %d too\n", 99);
		printf("This will print %c on the console\n", 'P');
		printf("This value of %c%c is %f\n", 'P', 'i', 3.14159265);
		return	0;
	}