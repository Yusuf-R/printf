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
	int digit, whole, place_holder, count;
	unsigned int temp;

	digit  = va_arg(argz, int);
	place_holder = 1;
	whole = count = 0;

	if (digit < 0)
	{
		count += _putchar('-');
		temp = digit * -1;
	}
	else
		temp = digit;

	while (temp / place_holder > 9)
		place_holder = place_holder * 10;

	while (place_holder != 0)
	{
		whole = temp / place_holder;
		_putchar('0' + whole);
		count++;
		temp =  temp % place_holder;
		place_holder = place_holder / 10;
	}

	return (count);
}
