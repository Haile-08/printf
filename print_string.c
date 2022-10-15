#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_string - writes c to standard output
 * @s: string
 * Return: 1
 */
int print_string(va_list s)
{
	char *string;
	int i = 0;

	string = va_arg(s, char*);
	if (string == NULL)
		string = "NULL";
	while (string[i])
	{
		_putchar(string[i]);
		i++;
	}
	return(i);
}
