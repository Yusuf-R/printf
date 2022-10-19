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
	int digit, count;
	unsigned int temp;
	int place_holder;

	place_holder = 1;
	count = temp = digit = 0;
	digit = va_arg(argz, int);

	if (digit < 0)
	{
		count += _putchar('-');
		temp  = digit * -1;
	}
	else
		temp = digit;
	for (; (temp / place_holder) > 9; )
	{
		place_holder = place_holder * 10;
	}
	for (; place_holder != 0; )
	{
		count += _putchar(48 +  digit / place_holder);
		digit = digit % place_holder;
		place_holder = place_holder / 10;
	}
	return (count);
}
