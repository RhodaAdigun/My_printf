#include "main.h"
#include <stdarg.h>

/**
 *_printf - prints string to output, produces output according to a format
 *@format: the string to print
 * Return: the number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	int i, num;
	va_list ptr;

	num = 0;
	va_start(ptr, format);

	for (i = 0; format[i] != '\0';)
	{
		if (format[i] != '%')
		{
			num += _putchar(format[i]); /*counts the number of times it prints char*/
			i++;
		}

		else if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				num += _putchar(va_arg(ptr, int));
			}
			i += 2;
		}
	}
	return (num);
}
