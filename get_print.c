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
