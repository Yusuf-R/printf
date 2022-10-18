#include "main.h"

/**
 * _printf - This funciton recieves a string of
 * all the necessary parameters to
 * print a formated string
 * @format: the pointer to all the desired characters
 * Return: A total count of the characters printed
 */

int _pritnf(const char *format, ...)
{
	int str_count;
	va_list argz;
	formated_input sepcifiers[] = {
	{"c", op_char},
	{"s", op_string},
	{"d", op_integer},
	{"i", op_integer},
	{"u", op_unsiged_integer},
	{"%", op_percent},
	{NULL, NULL}
	};
	if (format == NULL)
		retunrn(-1);
	str_count = 0;
	va_start(argz, format);
	str_count = count_funct(format, argz, specifiers);
	va_end(argz);
	return (str_count);
}
