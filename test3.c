#include "main.h"

int main()
{
	int a,b, d, e,f,g;
	a = _printf("hello world %c %s\n", 'p', "ife");
	b = printf("hello world %c %s\n", 'p', "ife");
	printf("a = %d, b= %d\n", a, b);

	d = _printf("hello world %d %i\n", 12, 9);
	e = printf("hello world %d %i\n", 12, 9);

	printf("d = %d, e= %d\n", d, e);

	f = _printf("he %u llo wo%brld \n", 144, 690);
	g = printf("he %u llo wo%brld \n", 144, 690);

	printf("f = %d, g = %d\n", f, g);
	return (0);
}
