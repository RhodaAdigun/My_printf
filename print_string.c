#include "main.h"
/**
 * print_string - Print out a string
 * @ptr: Pointer to the input string
 * Return: int
 */
int print_string(va_list ptr)
{
	int i;
	char *str = va_arg(ptr, char*);

	if (str == NULL)
		str = "(null)";
	else if (*str == '\0')
			return (-1);

	for (i = 0; str[i]; i++)
			_putchar(str[i]);

	return (i);
}
