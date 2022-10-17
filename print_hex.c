#include "main.h"
/**
* print_hex - prints unsigned int in hexadecimal(x/X)
* @n: unsigned int
* @c: case of printing (0 for lowercase(x), 1 for uppercase(X))
* Return: ct
*/
int print_hex(unsigned int n, unsigned int c)
{
	unsigned int len, bt, j, d, num;
	int count = 0;
	char difference;

	if (n != 0)
	{
		num = n;
		len = 0;
		if (c)
			difference = 'A' - ':';
		else
			difference = 'a' - ':';
		while (num != 0)
		{
			num = num / 16;
			len++;
		}

		bt = 1;

		for (j = 1; j <= len - 1; j++)
			bt = bt * 16;
		
		for (j = 1; j <= len; j++)
		{
			d = n / bt;
			if (d < 10)
				_putchar(d + '0');
			else
				_putchar(d + '0' + difference);
			count++;
			n = n - (d * bt);
			bt = bt / 16;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
/**
* print_x - prints unsign int in lowercase hex
* @x: unsigned int
* Return: lowercase hex
*/
int print_x(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}

/**
* print_X - prints unsign int in uppercase hex
* @X: unsigned int
* Return: uppercase hex
*/
int print_X(va_list X)
{
	return (print_hex(va_arg(X, unsigned int), 1));
}
