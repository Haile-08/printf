#include "main.h"
/**
* print_o - unsigned octal
* @o: to be converted to octal
* Return: count c(size)
*/
int print_o(va_list o)
{
	unsigned int d, bt, len, j, n, num;
	int c = 0;

	n = va_arg(o, unsigned int);
	if (n != 0)
	{
		num = n;
		len = 0;
		
		while (num != 0)
		{
			num /= 8;
			len++;
		}
		
		bt = 1; /*bt - base ten*/
		
		for (j = 1; j <= len - 1; j++)
			bt = bt * 8;
		
		for (j = 1; j <= len; j++)
		{
			d = n / bt;
			_putchar(d + '0');
			c++;
			n = n - (d * bt);
			bt = bt / 8;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (c);
}
