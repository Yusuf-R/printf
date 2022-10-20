#include "main.h"

/**
 * len_base - Calculates the length for any given base
 * @x_num: The number for which the length is being calculated
 * @base: Base to be calculated by
 * Return:  length of a the base conversion
 */


unsigned int len_base(unsigned int x_num, int base)
{
	unsigned int i;

	for (i = 0; x_num > 0; i++)
	{
		x_num = x_num / base;
	}
	return (i);
}


/**
 * hex_index - to help return either x array or X array
 * @num: num to base 16
 * @x: to compare which of the array to use
 * Return: Ascii value for a letter
 */

int hex_index(int num, char x)
{
	char *hex = "abcdef";
	char *heX = "ABCDEF";

	num = num - 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (heX[num]);
	return (0);
}
