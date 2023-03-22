#include <stdio.h>
#include "main.h"

/**
 * print_sign - entry point
 * @n: an input parameter
 * Description: priint print_sign
 * Return: 1 if n is > 0, 0 if n is = 0 and -1 if n < 0
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}
	return (value);
}
