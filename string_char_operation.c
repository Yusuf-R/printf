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

/**
 * op_print_str_rev - Calls a function to reverse and print a string
 * @argz: Argument passed to the function
 * Return: The amount of characters printed
 */

int op_print_str_rev(va_list argz)
{
	int len;
	char *str;
	char *ptr;

	str = va_arg(argz, char *);
	if (str == NULL)
		return (-1);
	ptr = str_rev(str);
	if (ptr == NULL)
		return (-1);
	for (len = 0; ptr[len] != '\0'; len++)
		_putchar(ptr[len]);
	free(ptr);
	return (len);
}

/**
 * op_rot13 - Converts string to rot13
 * @argz: string to convert
 * Return: converted string
 */

int op_rot13(va_list argz)
{
	int i;
	int x;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(argz, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 52; x++)
		{
			if (str[i] == s[x])
			{
				_putchar(u[x]);
				break;
			}
		}
		if (x == 53)
			_putchar(str[i]);
	}
	return (i);
}
