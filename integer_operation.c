#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * op_integer - function to get the integer value
 * @argz: the name of the list argument
 * Return: the end result of digit count
 */

int op_integer(va_list argz)
{
	int digit_count;

	digit_count = d_i_print(argz);
	return (digit_count);
}
/**
 * d_i_print - function to print intergers
 * @argz: the argument that is being passed to the argument
 * Return: count
 */

int d_i_print(va_list argz)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n  = va_arg(argz, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
