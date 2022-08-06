#include "main.h"
#include <stdio.h>

/**
 * main - use to test code
 * Return: 0
 */

int main(void)
{
	int y,len,len2;
	
	len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
	 _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
	printf("\n------newline -------\n");
	
	y = _printf("Hello %c %s world\n", 'P', "Ife");
	printf("n = %d\n", y);
	return (0);
}
