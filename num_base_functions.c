#include "main.h"

/**
 * len_base - Calculates the length for any given base
 * @x_num: The number for which the length is being calculated
 * @base: Base to be calculated by
 * Return:  length of a the base conversion
 */


unsigned int len_base(unsigned int x_num, unsigned int base)
{
	unsigned int i;

	for (i = 0; x_num > 0; i++)
		x_num = x_num / base;
	return (i);

}
