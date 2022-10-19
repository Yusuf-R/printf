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
	int digit, count, temp;
	int place_holder, whole;

	place_holder = 1;
	whole = count = temp = digit = 0;
	digit = va_arg(argz, int);

	if (digit < 0)
	{
		_putchar('-');
		count++;
		digit = -digit;
	}

	if (digit == 0)
	{
		_putchar(48);
		count++;
		return (count);
	}
	temp = digit;
	while (temp > 9)
	{
		place_holder = place_holder * 10;
		temp = temp / place_holder;
	}
	while (place_holder > 0)
	{
		whole = digit / place_holder;
		_putchar(whole + 48);
		count++;
		digit = digit % place_holder;
		place_holder = place_holder / 10;
	}
	return (count);
}
