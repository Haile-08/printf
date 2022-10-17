#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_char - prints char
 * @c:ncharacter
 * Return: 1 success
 */
int print_char(va_list c)
{
	unsigned char my_c;

	my_c = va_arg(c, int);
	_putchar(my_c);
	return (1);
}
/**
 * print_perc - %
 * Return: 1 on success
 */
int print_porcentage(void)
{
	_putchar('%');
	return (1);
}
