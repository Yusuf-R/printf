#ifndef MAIN_H
#define MAIN_H


#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>


typedef struct formated_input
{
	char *input;
	int (*func_ptr)(va_list);
} format_input;

int op_char(va_list argz);
int op_string(va_list argz);
int op_percent(__attribute__((unused))va_list argz);
int _putchar(char c);

#endif


