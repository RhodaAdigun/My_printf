#include "main.h"
/**
 * print_string - Print out a string
 * @s: Pointer to the input string
 * Return: int
 */
int print_string(const char *s)
{
	int i, num;

	num = 0;
	if (s != NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			num += _putchar(s[i]);
	}
	else
		num += 0;
	return (num);
}