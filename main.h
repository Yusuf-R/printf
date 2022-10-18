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




#endif


