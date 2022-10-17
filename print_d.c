#include "main.h"
/**
* print_d - prints a decimal
* @d: integer
* Return: count(c)/size the output text
*/
int print_d(va_list d)
{
	int c = 0, len, pt, j, dig, n, num;

	n = va_arg(d, int);
	
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			c++;
		}
		num = n;
		len = 0;

		while (num != 0)
		{
			num = num / 10;
			len++;
		}
		
		pt = 1; /* pt - power ten */
		
		for (j = 1; j <= len - 1; j++)
			pt = pt * 10;
		
		for (j = 1; j <= len; j++)
		{
			dig = n / pt;
			if (n < 0)
				_putchar((dig * -1) + 48);
			else
				_putchar(dig + '0');
			c++;
			n = n - (dig * pt);
			pt = pt / 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (c);
}
