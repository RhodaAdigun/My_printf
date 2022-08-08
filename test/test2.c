#include "main.h"
#include <stdio.h>

/**
 * main - use to test code
 * Return: 0
 */

int main(void)
{
	int y;
	void *addr;
	
	addr =(void *)0x7ffe637541f0;
	_printf("Let's try to printf a simple sentence.\n");
    	printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("\n------newline -------\n");
	printf("\n------newline -------\n");
	_printf("Negative: %d\n", -6355890);
	printf("Negative: %d\n", -6355890);
	_printf("Binary: %b\n", 664);
	printf("Binary: %b\n", 664);
	_printf("Integer: %i\n", 735356778);
	printf("Integer: %i\n", 735356778);
	printf("Hexadecimal: %x\n", 45);
	_printf("Hexadecimal: %x\n", 45);
	printf("Hexadecimal: %X\n", 4566);
	_printf("Hexadecimal: %X\n", 4566);
	printf("Octal: %o\n", 43);
	_printf("Octal: %o\n", 43);
	printf("Address: %p\n", addr);
	_printf("Address: %p\n", addr);
	y = _printf("Hello %c %s %S world\n", 'P', "Ife", "Oluwa\n");
	printf("n = %d\n", y);
	_printf("n = %d\n", y);
	return (0);
}
