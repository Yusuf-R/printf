#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - This funciton recieves a string of
 * all the necessary parameters to
 * print a formated string
 * @format: the pointer to all the desired characters
 * Return: A total count of the characters printed
 */

int _printf(const char *format, ...)
{
	int str_count;
	va_list argz;

	format_input sp[] = {
	{"c", op_char},
	{"s", op_string},
	{"d", op_integer},
	{"i", op_integer},
	{"%", op_percent},
	{"u", op_unsigned},
	{NULL, NULL}
	};
	if (format == NULL)
		return (-1);
	str_count = 0;
	va_start(argz, format);
	str_count = count_func(format, argz, sp);
	va_end(argz);
	return (str_count);
}
