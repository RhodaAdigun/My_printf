#include "main.h"

/**
 *_printf - prints string to output, produces output according to a format
 *@format: the string to print
 * Return: the number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	int i, num;
	char *buffer;

	va_list ptr;

	num = 0;
	va_start(ptr, format);

	for (i = 0; format[i] != '\0';)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]); /*counts the number of times it prints char*/
			num++;
			i++;
		}

		else if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(ptr, int));
				num++;
			}
			else if (format[i + 1] == 's')
			{
				num += print_string(va_arg(ptr, char *));
			}
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				num++;
			}
			else if (format[i + 1] == 'd')
			{
				buffer = num_str(va_arg(ptr, int), 10);
				num += print_string(buffer);
			}
			else if (format[i + 1] == 'i')
			{
				buffer = num_str(va_arg(ptr, int), 10);
				num += print_string(buffer);
			}
			else if (format[i + 1] == 'b')
			{
				buffer = num_str(va_arg(ptr, int), 2);
				num += print_string(buffer);
			}
			else if (format[i + 1] == 'o')
			{
				buffer = num_str(va_arg(ptr, int), 8);
				num += print_string(buffer);
			}
			else if (format[i + 1] == 'x')
			{
				buffer = num_str(va_arg(ptr, int), 16);
				num += print_string(buffer);
			}
			else if (format[i + 1] == 'u')
			{
				buffer = num_str(va_arg(ptr, int), 10);
				num += print_string(buffer);
			}
			else if (format[i + 1] == 'X')
			{
				buffer = num_strX(va_arg(ptr, int), 16);
				num += print_string(buffer);
			}
			i += 2;
		}
	}
	va_end(ptr);

	return (num);
}
