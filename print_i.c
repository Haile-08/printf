#include "main.h"
/**
* print_i - prints an integer
* @i: int
* Return: count(number of digit)
*/
int print_i(va_list i)
{
	int len, pt, j, d, n, count = 0, num;

	n = va_arg(i, int);
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			count++;
		}
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 10;
			len++;
		}
		pt = 1;
		for (j = 1; j <= len - 1; j++)
			pt = pt * 10;
		for (j = 1; j <= len; j++)
		{
			d = n / pt;
			if (n < 0)
				_putchar((d * -1) + 48);
			else
				_putchar(d + '0');
			count++;
			n = n - (d * pt);
			pt = pt / 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
