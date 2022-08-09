#include "main.h"
/**
 * print_string - Print out a string
 * @s: Pointer to the string to print
 * Return: int
 */
int print_string(const char *s)
{
	int i;
	/*char *str = va_arg(ptr, char*);*/

	if (s == NULL)
		s = "(null)";
	else if (*s == '\0')
		return (-1);

	for (i = 0; s[i]; i++)
		_putchar(s[i]);

	return (i);
}
