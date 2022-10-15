#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - prints formatted output
 * @format: format - c, s, %
 * Return: count of chars(size)
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0;
	va_list args;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);

	va_start (args, format);

	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			len++;
			i++;
		}
		if (format[i] == '\0')
			return (len);

		f = get_fun(&format[i + 1]);
		
		if (f != NULL)
		{
			len = len + f(args);
			i = i + 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		len++;

		if (format[i + 1] == '%')
			i = i + 2;
		else
			i++;
	}
	va_end(args);
	return (len);
}
/**
 * get_fun - gets dunction format for _printf
 * @format: format (char, string, %)
 * Return: void
 */
int (*get_fun(const char *format))(va_list)
{
	unsigned int i;

	convert_f get_f[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	while (get_f[i].sc)
	{
		if (get_f[i].sc[0] == (*format))
			return (get_f[i].f);
		i++;
	}
	return (NULL);
}
