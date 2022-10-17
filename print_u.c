#include "main.h"
/**
* print_u - function prints unsigned number
* @u: unsigned number
* Return: count c(size of the output)
*/
int print_u(va_list u)
{
	unsigned int len, pt, j, d, n, num;
	int c = 0;

	n = va_arg(u, unsigned int);
	if (n != 0)
	{
		num = n;
		len = 0;
		while (num != 0)
		{
			num = num / 10;
			len++;
		}
		pt = 1;
		/* pt - power ten */
		for (j = 1; j <= len - 1; j++)
			pt = pt * 10;
		for (j = 1; j <= len; j++)
		{
			d = n / pt;
			/* d - digit */
			_putchar(d + '0');
			c++;
			n = n - (d * pt);
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
