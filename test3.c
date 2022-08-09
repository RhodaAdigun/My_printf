#include "main.h"

int main()
{
	int a,b, d, e,f,g;
	int len, len2;

	a = _printf("hello world %c %s\n", 'p', "ife");
	b = printf("hello world %c %s\n", 'p', "ife");
	printf("a = %d, b= %d\n", a, b);

	d = _printf("hello world %d %i\n", 12, 9);
	e = printf("hello world %d %i\n", 12, 9);

	printf("d = %d, e= %d\n", d, e);

	f = _printf("he %u llo wo%brld \n", 144, 690);
	g = printf("he %u llo wo%brld \n", 144, 690);

	printf("f = %d, g = %d\n", f, g);

	f = _printf("he %X l%olo wo%xrld \n", 14984, 690, 990);
	g = printf("he %X l%olo wo%xrld \n", 14984, 690, 990);

	printf("f = %d, g = %d\n", f, g);

	_printf("%S\n", "Best\nSchool");

	 len = _printf("Percent:[%%]\n");
	 len2 = printf("Percent:[%%]\n");
	 _printf("Len:[%d]\n", len);
	 printf("Len:[%d]\n", len2);
	 _printf("Unknown:[%r]\n");
	 printf("Unknown:[%r]\n");
	
	return (0);
}
