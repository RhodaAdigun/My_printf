#include "main.h"
/**
 * num_str - prints number in a specified base
 * @num: number to be converted to string
 * @base: number base we want num to be in form of
 * @container: Pointer to the new string
 */
char *num_str(int num, int base)
{
	int i = 0, j, rem;
	char tmp[65];
	char *container = malloc(sizeof(char) * 65);

	if (container == NULL)
		return (NULL);
	if (num == 0)
	{
		container = "0";
		return (container);
	}
	else if (num < 0)
	{
		_putchar('-');
		num = -1 * num;
	}
	while (num)
	{
		rem = num % base;
		if (rem >= 10)
		{
			tmp[i] = (rem % 10) + 'a';
		}
		else
		{
			tmp[i] = '0' + rem;
		}
		num = num / base;
		i++;
	}
	for (j = 0; j < i; j++)
	{
		container[j] = tmp[i - j - 1];
	}
	container[j] = '\0';
	return (container);
	free(container);
}
