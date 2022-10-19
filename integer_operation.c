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
	int digit, count, place_holder, whole;
	unsigned int temp;

	place_holder = 1;
	whole = count = temp = digit = 0;
	digit = va_arg(argz, int);

	if (digit <= INT_MAX && digit >= INT_MIN)
	{
		if (digit < 0)
		{
			digit  = digit * -1;
			_putchar('-');
			count++;
		}
		temp = digit;
		for (; (temp / place_holder) > 9; )
		{
			place_holder = place_holder * 10;
		}
		for (; place_holder != 0; )
		{
			whole = digit / place_holder
			_putchar(48 +  whole);
			count++;
			digit = digit % place_holder;
			place_holder = place_holder / 10;
		}
	}
	else
		return (-1);

	return (count);
}
