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

/**
 * print_STRING - Print out a string
 * @s: Pointer to the input string
 * Return: int
 * Non printable characters (0 < ASCII value < 32 or >= 127) are printed
 * this way: \x, followed by the ASCII code value in hexadecimal
 *  (upper case - always 2 characters)
 */
int print_STRING(const char *s)
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
				num += 4;
				continue;
			}
			_putchar(s[i]);
			num++;
		}
	}
	return (num);
}

/**
 * get_str - gets the string to print
 * @ptr: points to arguments in printf function
 * Return: number of chars in string
 */

int get_str(va_list ptr)
{
	int num;

	num = print_string(va_arg(ptr, char *));
	return (num);
}

/**
 * print_STR - gets the string to print
 * @ptr: points to arguments in printf function
 * Return: number of chars in string
 */

int print_STR(va_list ptr)
{
	int num;

	num = print_STRING(va_arg(ptr, char *));
	return (num);
}
