#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>




typedef struct formated_input
{
	char *input;
	int (*func_ptr)(va_list);
} format_input;


int _putchar(char c);
int _printf(const char *format, ...);

int op_char(va_list argz);
int op_string(va_list argz);
int op_binary(va_list argz);
int op_percent(__attribute__((unused))va_list argz);
int op_integer(va_list argz);
int op_unsigned(va_list argz);
int op_octal(va_list argz);
int op_hex(va_list argz);
int op_heX(va_list argz);
int op_print_str_rev(va_list argz);
int op_rot13(va_list argz);
int op_strUcase(va_list argz);


int d_i_print(va_list argz);
int count_func(const char *format, va_list argz, format_input sp[]);
int u_print(unsigned int u_digit);
unsigned int len_base(unsigned int, int);
int hex_index(int, char);




int str_len(char *s);
char *_memcpy(char *dest, char *src, unsigned int s_len);
char *str_rev(char *s);
void _putchar_base(char *str);



#endif


