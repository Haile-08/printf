#ifndef _PRINTF_H_
#define _PRINTF_H_

#define BUFFER_SIZE 1024

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>


/**
 * struct mark - struct for format
 * @sc: 1st member
 * @f: 2nd member
 */
typedef struct mark
{
	char *sc;
	int (*f)(va_list p);
} mark_t;


int _printf(const char *format, ...);
int _putchar(char c);
int spec(int *i, const char *format, va_list ap);


/**
 * struct nc - non custom specifier(flag)
 * @sum: '+'
 * @empty: ' '
 * @hash: '#'
 */
typedef struct nc
{
	int sum;
	int empty;
	int hash;
} nc_t;

int print_char(va_list p);
int print_string(va_list p);
int print_pct(va_list __attribute__((unused)) p);
int print_decimal(va_list p);
int print_int(va_list p);
int print_binary(va_list p);

int print_uint(va_list p);
int print_oct(va_list p);
int print_x(va_list p);
int print_Xu(va_list p);
int print_Su(va_list p);
int print_pt(va_list p);
int print_r(va_list p);
int print_Rt(va_list __attribute__((unused)) p);

int aux_S_hex(int n);

#endif /* _MAIN_H_ */
