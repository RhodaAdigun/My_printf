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
	if (s)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] <= 32 || s[i] >= 127)
			{
				_putchar('\\');
				_putchar('x');
				_putchar('0');
				_printf("%X", s[i]);
			}
			_putchar(s[i]);
			num++;
		}
	}
	return (num);
}
