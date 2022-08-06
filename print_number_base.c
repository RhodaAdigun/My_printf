#include "main.h"
/**
 * print_number_base - prints number in a specified base
 *
 *
 */
int print_number_base(const int *n, unsigned int b)
{
	int rem, num, i;

	rem = 0;
	if (n != NULL)
	{
		if (n < 0)
		{
			_putchar('-');
			n *= -1;
		}
		while (n != 0)
		{
			print(n / 10);
		}
		
	}
}
