#include "main.h"

/**
 * op_binary - Converts a number from base 10 to binary
 *
 * @argz: arguments passed
 *
 * Return: The length of the number printed
 */

int op_binary(va_list argz)
{
	unsigned int input;
	int i, len_bin;
	char *bin_str, *rev_bin_str;

	input = va_arg(argz, unsigned int);
	if (input == 0)
		return (_putchar(48));
	if (input < 1)
		return (-1);
	len_bin = len_base(input, 2);
	bin_str = malloc(sizeof(char) * (len_bin + 1));
	if (bin_str == NULL)
		return (-1);
	for (i = 0; input > 0; i++)
	{
		if (input % 2 == 0)
			bin_str[i] = '0';
		else
			bin_str[i] = '1';
		input = input / 2;
	}
	bin_str[i] = '\0';
	rev_bin_str = str_rev(bin_str);
	if (rev_bin_str == NULL)
		return (-1);
	_putchar_base(rev_bin_str);
	free(bin_str);
	free(rev_bin_str);
	return (len_bin);
}
