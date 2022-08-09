#include "main.h"
/**
 *_specifiers - gets the format specifiers
 *@next: the char after the % char
 *@ptr: the argument that will replace the format specifiers
 *Return: 0
 */

int _specifiers(char next, va_list ptr)
{
	int i;

	identifierStruct func[] = {
		{"c", print_char},
		{"s", get_str},
		{"d", print_int},
		{"i", print_int},
		/*{"u", print_int},*/
		/*{"b", print_binary},*/
		/*{"o", print_oct},*/
		/*{"x", print_hex},*/
		/*{"X", print_HEX},*/
		/*{"S", print_STR},*/
		{NULL, NULL}
	};

	for (i = 0; func[i].indentifier != NULL; i++)
	{
		if (func[i].indentifier[0] == next)
			return (func[i].pointer(ptr));
	}
	return (0);
}

/**
 *print_char - replaces format specifier %c with character
 *@ptr :points to each of the arguments in _printf
 *Return: the number of characters(1)
 */

int print_char(va_list ptr)
{
	int num;

	num = _putchar(va_arg(ptr, int));
	return (num);
}
