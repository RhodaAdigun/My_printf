#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

char *num_str(int num, int base);
char *num_strX(int num, int base);
int print_str(char *container);
int _printf(const char *format, ...);
int get_str(va_list ptr);
int _putchar(char c);
int _specifiers(char next, va_list ptr);
int print_char(va_list ptr);
int print_int(va_list ptr);
int print_string(const char *s);
int print_binary(va_list ptr);
int print_HEX(va_list ptr);
int print_hex(va_list ptr);
int print_oct(va_list ptr);
int print_STRING(const char *s);
int print_STR(va_list ptr);
int flag_char(char flag);

/**
 * struct identifierStruct - structure definition of a printTypeStruct
 * @indentifier: type
 * @pointer: function to print
 */
typedef struct identifierStruct
{
	char *indentifier;
	int (*pointer)(va_list);
} identifierStruct;

#endif
