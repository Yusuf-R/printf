#include "main.h"

/**
 * op_strUcase - Prints a string, when out of range print \x0A
 * @argz: list of arguments the function _printf is sending
 * Return: Number of characteres printing
 */
int op_strUcase(va_list argz)
{
	char *str1;
	int i, count = 0;

	str1 = va_arg(argz, char *);
	for (i = 0; str1[i] != '\0'; i++)
	{
		if ((str1[i] > 0 && str1[i] < 32) || str1[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_putchar('0');
			_putchar('A');
			count += 4;
		}
		else
		{
			_putchar(str1[i]);
			count++;
		}
	}
	return (count);
}
