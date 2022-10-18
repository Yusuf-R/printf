#include "main.h"

/**
 * count_funct - This the function that will receives
 * the all the parmaters from the main function to
 * print a formated string.
 *
 * @format: the pointer to the string containing
 * all the desired characters.
 *
 * @argz: the variadic variable the will contain
 * argumentents passed to the program.
 *
 * @specifiers: this is instance of our structure
 * created with format specifiers and its respective functions
 *
 * Return: A total count of the characters printed.
 */

int count_funct(*format, va_list argz, formated_input specifiers)
{
	int i, j, k, char_count, ret_val;

	i = j = k = num = ret_val = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			char_count++;
		}
		if (format[i] == '%')
		{
			for (j = 0; specifiers[j].input != NULL; j++)
			{
				if (format[i + 1] == specifiers[j].input[k])
				{
					ret_val = ret_value + specifiers[j].func_ptr(argz);
					if (ret_val == NULL)
						return (-1);
					char_count = char_count + ret_val;
					break;
				}
			}
			if (sepcifiers[j].input == NULL && format[i + 1] != ' ')
			{
				if (format(i + 1) != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					char_count += 2;
					i++;
				}
				else
					return (-1);
			}
		}
		return (char_count);
	}
}
