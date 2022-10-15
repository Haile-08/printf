#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int (*get_fun(const char *format))(va_list);
int _putchar(char c);
int print_char(va_list c);
int print_string(va_list s);

typedef struct convert_format
{
	char *sc;
	int (*f)(va_list);
} convert_f;


#endif /* _MAIN_H_ */
