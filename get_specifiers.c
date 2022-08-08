#include "main.h"
/**
 *get_specifiers - gets the format specifiers
 *@next_char: the char after the % char
 *@ptr: the argument that will replace the format specifiers
 */

int get_specifiers(char next_char, va_list ptr)
{
	int i;

	specifiers func[] = {
		{"c", print_char},
		{"s", print_string},
		//{"d", print_int},
		//{"i", print_int},
		//{"u", print_unsigned},
		//{"b", print_unsignedToBinary},
		//{"o", print_oct},
		//{"x", print_hex},
		//{"X", print_HEX},
		//{"S", print_STR},
		{NULL, NULL}
	};

	for (i = 0; func[i].indentifier != NULL;i++)
	{
		if (func[i].indentifier[0] == next_char)
			return (func[i].pointer(ptr));
	}
	return (0);
}

/**
 *print_char - replaces format specifier %c with character
 *@ptr :points to each of the arguments in _printf
 *Return : the number of character(1)
 */

int ptint_char(va_list ptr)
{

