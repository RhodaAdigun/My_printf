#include "main.h"

/**
 *print_int - prints integers
 *@ptr: points to arguments in _printf
 *Return: number of integers
 */

int print_int(va_list ptr)
{
	char *buffer;
	int num;

	num = 0;
	buffer = num_str(va_arg(ptr, int), 10);
	num += print_string(buffer);
	return (num);
}

/**
 * print_binary - calls the function that converts to binary
 * @ptr: points to arguments of printf function
 * Return: number of chars in string of integers
 */

int print_binary(va_list ptr)
{
	char *buffer;
	int num;

	buffer = num_str(va_arg(ptr, int), 2);
	num = print_string(buffer);
	return (num);
}

/**
 * print_oct - calls the function that converts to base 8
 * @ptr: points to arguments of printf function
 * Return: number of chars in string of integers
 */

int print_oct(va_list ptr)
{
	char *buffer;
	int num;

	buffer = num_str(va_arg(ptr, int), 8);
	num = print_string(buffer);
	return (num);
}

/**
 * print_hex - calls the function that converts to base 16
 * @ptr: points to arguments of printf function
 * Return: number of chars in string of integers
 */

int print_hex(va_list ptr)
{
	char *buffer;
	int num;

	buffer = num_str(va_arg(ptr, int), 16);
	num = print_string(buffer);
	return (num);
}

/**
 * print_HEX - calls the function that converts to base 16
 * @ptr: points to arguments of printf function
 * Return: number of chars in string of integers
 */

int print_HEX(va_list ptr)
{
	char *buffer;
	int num;

	buffer = num_strX(va_arg(ptr, int), 16);
	num = print_string(buffer);
	return (num);
}
