#include <stdio.h>
#include "main.h"

/**
 * print_sign - entry point
 * @n: an input parameter
 * Description: prints the sign of a number
 * Return: 1 if n is > 0, 0 if n is = 0 and -1 if n < 0
 */
int print_sign(int n)
{
	int i;
	
	if (i < 0)
	{
		i = -1;
		_putchar('-');
	}
	else if (n == 0)
	{
		i = 0;
		_putchar('0');
	}
	else
	{
		i = 1;
		_putchar('+');
	}
	return (i)
}
