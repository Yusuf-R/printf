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
 * op_unsigned - Prints  unsigned number
 * @argz: list argument
 * Return: The amount of numbers printed
 */

int op_unsigned (va_list argz)
{
	unsigned int digit_count;

	digit_count = va_arg(argz, unsigned int);

	if (digit_count == 0)
		return (u_print(digit_count));
	if (digit_count < 1)
		return (-1);
	return (u_print(digit_count));
}

/**
 * d_i_print - function to print intergers
 * @argz: the argument that is being passed to the argument
 * Return: count
 */

int d_i_print(va_list argz)
{
	int digit, whole, place_holder, count;
	unsigned int temp, tmp1;

	digit  = va_arg(argz, int);
	place_holder = 1;
	whole = count = 0;

	if (digit < 0)
	{
		count += _putchar('-');
		temp = digit * -1;
		tmp1 = temp;
	}
	else
	{
		temp = digit;
		tmp1 = temp;
	}

	while (tmp1 > 9)
	{
		place_holder = place_holder * 10;
		tmp1 = tmp1 / place_holder;
	}

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


/**
 * u_print - function to print intergers
 * @u_digit: the unsigned nunmber
 * Return: count
 */

int u_print(unsigned int u_digit)
{
	int whole, place_holder, count;

	unsigned int temp, tmp2;

	place_holder = 1;
	whole = count = 0;
	temp = u_digit;
	tmp2 = temp;

	while (tmp2 > 9)
	{
		place_holder = place_holder * 10;
		tmp2 = tmp2 / place_holder;
	}

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
