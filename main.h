#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

char *num_str(int num, int base);
char *num_strX(int num, int base);
int print_str(char *container);
int _printf(const char *format, ...);
int print_string(const char *s);
int _putchar(char c);

#endif
