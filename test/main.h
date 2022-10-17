#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

int _printf(const char *format, ...);
int (*get_fun(const char *format))(va_list);
int _putchar(char c);
int print_char(va_list c);
int print_string(va_list s);
int print_perc(void);
int print_d(va_list d);
int print_hex(unsigned int n, unsigned int c);
int print_i(va_list i);
int print_o(va_list o);
int print_u(va_list u);

typedef struct convert_format
{
	char *sc;
	int (*f)(va_list);
} convert_f;


#endif /* _MAIN_H_ */
