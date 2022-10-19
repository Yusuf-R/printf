#include "main.h"

/**
 * op_char - This functions prints out character
 * @argz: arguments passed successively
 * Return: each count of characters printed.
 */

int op_char(va_list argz)
{
	_putchar(va_arg(argz, int));
	return (1);
}

/**
 * op_string - Prints a string
 * @argz: list of arguments
 * Return: each count of characters printed.
 */

int op_string(va_list argz)
{
	int i;
	char *str;

	str = va_arg(argz, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * op_percent - Prints the percent symbol
 * @argz: list of arguments
 * Return: the count of each percentage print.
 */

int op_percent(__attribute__((unused))va_list argz)
{
	_putchar('%');
	return (1);
}

