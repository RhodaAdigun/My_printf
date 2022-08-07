#include "main.h"
/**
 * num_strX - prints number in a specified base with uppercase hex
 * @num: number to be converted to string
 * @base: number base we want num to be in form of
 * @container: Pointer to the new string
 */
char *num_strX(int num, int base)
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
	if (num < 0)
	{
		*container = '-';
		num *= -1;
	}
	while (num)
	{
		rem = num % base;
		if (rem >= 10)
		{
			tmp[i] = 'A' + (rem - 10);
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
		*(container + j) = tmp[i - 1 -j];
	}
	*(container + j) = '\0';
	return (container);
	free(container);
}
