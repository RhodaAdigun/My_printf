#include "main.h"

int main()
{
	int a,b, d, e;
	a = _printf("hello world %c %s\n", 'p', "ife");
	b = printf("hello world %c %s\n", 'p', "ife");
	printf("a = %d, b= %d\n", a, b);

	d = _printf("hello world %d %i\n", 12, 9);
	e = _printf("hello world %d %i\n", 12, 9);

	printf("d = %d, e= %d\n", d, e);
	return (0);
}
