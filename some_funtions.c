#include "main.h"
#include <unistd.h>

/**
 * print_reverse - reverses a string
 * @ptr: points to argument in printf function
 * Return: number of characters printed
 */

int print_reverse(va_list ptr)
{
	char *str;
	int i, num = 0;

	str = va_arg(ptr, char *);

	if (str == NULL)
	{
		str = ")Null(";
	}
	for (i = 0; str[i]; i++)
		;
	for (i = i - 1; i >= 0; i--)
	{
		char s = str[i];

		write(1, &s, 1);
		num++;
	}
	return (num);
}

/*
 *print_rot13string - converts and prints a string in rot13
 * @ptr: points to the arguments in printf function
 * Return: number of chars printed
 */

int print_rot13string(va_list ptr)
{
	char p;
	char *str;
	unsigned int i, j;
	int num = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(ptr, char *);

	if (str == NULL)
		str = "(HELLO)";
	for (i = 0; str[i]; i++)
	{
		for (j = 0; in[j]; j++)
		{
			if (in[j] == str[i])
			{
				p = out[j];
				write(1, &p, 1);
				num++;
				break;
			}
		}
		if (!in[j])
		{
			p = str[i];
			write(1, &p, 1);
			num++;
		}
	}
	return (num);
}
