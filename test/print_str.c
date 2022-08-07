#include "main.h"
/**
 * print_str - Prints out the passed string
 * @container: pointer to the passed string
 * Return: number of string members
 */
int print_str(char *container)
{
	int i;

	if(container)
	{
		for (i = 0; container[i] != '\0'; i++)
		{
			_putchar(container[i]);
		}
		return (i);
	}
	return (0);
}
