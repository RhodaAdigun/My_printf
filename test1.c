#include "main.h"
#include <stdio.h>

/**
 * main - use to test code
 * Return: 0
 */

int main(void)
{
	int g, y;
	
    _printf("Let's try to printf a simple sentence.\n");
    printf("Let's try to printf a simple sentence.\n");
	 _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
	printf("\n------newline -------\n");
	g = 32424;
	y = _printf("Hello %d %c %s world\n", g, 'P', "Ife");
	printf("n = %d\n", y);
	return (0);
}
