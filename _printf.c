#include "main.h"

/**
 * _printf - prints string to output, produces output according to a format
 * @format: string to print
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 * return -1 for incomplete identifier error
 */

int _printf(const char *format, ...)
{
	int i;
	int identifier = 0, num = 0;
	va_list ptr;

	va_start(ptr, format);
	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			num++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			_putchar('%');
			num++;
			i++;
			continue;
		}
		if (format[i + 1] == '\0')
			return (-1);

		identifier = get_specifiers(format[i + 1], ptr);
		if (identifier == -1 || identifier != 0)
			i++;
		if (identifier > 0)
			num += identifier;

		if (identifier == 0)
		{
			_putchar('%');
			num++;
		}
	}
	va_end(ptr);
	return (num);
}
