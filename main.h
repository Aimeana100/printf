#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>

/**
 * struct identifierStruct - define the alias of struct
 * @indentifier: is the char that receives the format
 * @printer: is the name of the fuction
 */

typedef struct identifierStruct
{
	char *indentifier;
  	int (*printer)(va_list);
} identifierStruct;

int _printf(const char *format, ...);
int _putchar(char character);
int sing_char(va_list c);
int (*conversion_specifiers(const char *c, int l))(va_list);
int str_char(va_list s);

#endif
