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
	write(1, &my_c, 1);
	return (1);
}
/**
 * print_perc - %
 * Return: 1 on success
 */
int print_perc(void)
{
	_putchar('%');
	return (1);
}
