#include "main.h"

int main()
{
	int a,b;
	a = _printf("hello world %c %s\n", 'p', "ife");
	b = printf("hello world %c %s\n", 'p', "ife");
	printf("a = %d, b= %d\n", a, b);
	return (0);
}
