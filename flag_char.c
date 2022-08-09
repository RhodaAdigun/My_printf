#include "main.h"

int flag_char(char *flag)
{
  int num = 0;
  if (flag == '+')
			{
				num += _printf("+%d", va_arg(ptr, int));
			}
	else if (flag == '#')
			{
				if (flag == 'o')
				{
					num += _printf("0%o", va_arg(ptr, int));
				}
				if (flag == 'x')
				{
					num += _printf("0%x", va_arg(ptr, int));
				}
			}
	else if (flag == ' ')
			{
				if (va_arg(ptr, int) > 0)
				{
					num += _printf(" %d",va_arg(ptr, int));
				}
	else
				{
					num += _printf("%d", va_arg(ptr, int));
				}
  }
