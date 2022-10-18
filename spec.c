#include "main.h"
/**
 * spec - matches fmt specifier with prototype(fn)
 * @i: element
 * @format: string from printf
 * @list: list of args
 * Return: output length to stdout
 */
int spec(int *i, const char *format, va_list ap)
{
	int len = 0, k = *i, l = 0, m = 0;

	mark_t spc[] = {
		{"b", p_b},
		{"c", p_c},
		{"d", p_d},
		{"i", p_d},
		{"o", p_o},
		{"%", p_p},
		{"r", p_r},
		{"R", p_Rt},
		{"s", p_s},
		{"u", p_u},
		{"X", p_Xu},
		{"x", p_x},
		{"S", p_Su},
		{NULL, NULL},
	};
	int size = sizeof(spc) / sizeof(mark_t) - 1;

	while (l < size)
	{
		if (*(spc[l].sc) == format[k + 1])
		{
			len += spc[l].f(ap);
			*i += 1;
		}
		else
		{
			m++;
		}
		l++;
	}
	if (m == size)
	{
		len += _putchar(format[k]);
	}
	return (len);
}
