#include "main.h"

/**
 * count_func - This the function that will receives
 * the all the parmaters from the main function to
 * print a formated string.
 *
 * @format: the pointer to the string containing
 * all the desired characters.
 *
 * @argz: the variadic variable the will contain
 * argumentents passed to the program.
 *
 * @sp: this is instance of our structure
 * created with format specifiers and its respective functions
 *
 * Return: A total count of the characters printed.
 */

int count_func(const char *format, va_list argz, format_input sp[])
{
	int i, j, char_count, ret_val;

	char_count = ret_val = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; sp[j].input != NULL; j++)
			{
				if (format[i + 1] == sp[j].input[0])
				{
					ret_val = sp[j].func_ptr(argz);
					if (ret_val == -1)
						return (-1);
					char_count = char_count + ret_val;
					break;
				}
			}
			if (sp[j].input == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					char_count += 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		
		else
		{
			_putchar(format[i]);
			char_count++;
		}
	}
	return (char_count);
}
