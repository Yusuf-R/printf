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

/**
 * op_octal - decimal number to Octal base (base 8)
 * @argz: List of the arguments passed to the function
 * Return: Number of characters printed
 */

int op_octal(va_list argz)
{
	unsigned int input;
	int i, len_oct;
	char *oct_str, *rev_oct_str;

	input = va_arg(argz, unsigned int);
	if (input == 0)
		return (_putchar(48));
	if (input < 1)
		return (-1);
	len_oct = len_base(input, 8);
	oct_str = malloc(sizeof(char) * (len_oct + 1));
	if (oct_str == NULL)
		return (-1);
	for (i = 0; input > 0; i++)
	{
		oct_str[i] = (input % 8) + 48;
		input = input / 8;
	}
	oct_str[i] = '\0';
	rev_oct_str = str_rev(oct_str);
	if (rev_oct_str == NULL)
		return (-1);
	_putchar_base(rev_oct_str);
	free(oct_str);
	free(rev_oct_str);
	return (len_oct);
}

/**
 * op_hex - decimal to base16 Uppercase
 * @argz: List of the arguments passed to the function
 * Return: Number of characters printed
 */

int op_hex(va_list argz)
{
	unsigned int input;
	int i, len_hex, hex_num;
	char *hex_str, *rev_hex_str;

	input = va_arg(argz, unsigned int);
	if (input == 0)
		return (_putchar(48));
	if (input < 1)
		return (-1);
	len_hex = len_base(input, 16);
	hex_str = malloc(sizeof(char) * (len_hex + 1));
	if (hex_str == NULL)
		return (-1);
	for (i = 0; input > 0; i++)
	{
		hex_num = input % 16;
		if (hex_num > 9)
		{
			hex_num = hex_index(hex_num, 'x');
			hex_str[i] = hex_num;
		}
		else
			hex_str[i] = hex_num + 48;
		input = input / 16;
	}
	hex_str[i] = '\0';
	rev_hex_str = str_rev(hex_str);
	if (rev_hex_str == NULL)
		return (-1);
	_putchar_base(rev_hex_str);
	free(hex_str);
	free(rev_hex_str);
	return (len_hex);

}

/**
 * op_heX - decimal to base16 Uppercase
 * @argz: List of the arguments passed to the function
 * Return: Number of characters printed
 */

int op_heX(va_list argz)
{
	unsigned int input;
	int i, len_heX, heX_num;
	char *heX_str, *rev_heX_str;

	input = va_arg(argz, unsigned int);
	if (input == 0)
		return (_putchar(48));
	if (input < 1)
		return (-1);
	len_heX = len_base(input, 16);
	heX_str = malloc(sizeof(char) * (len_heX + 1));
	if (heX_str == NULL)
		return (-1);
	for (i = 0; input > 0; i++)
	{
		heX_num = input % 16;
		if (heX_num > 9)
		{
			heX_num = hex_index(heX_num, 'X');
			heX_str[i] = heX_num;
		}
		else
			heX_str[i] = heX_num + 48;
		input = input / 16;
	}
	heX_str[i] = '\0';
	rev_heX_str = str_rev(heX_str);
	if (rev_heX_str == NULL)
		return (-1);
	_putchar_base(rev_heX_str);
	free(heX_str);
	free(rev_heX_str);
	return (len_heX);
}

