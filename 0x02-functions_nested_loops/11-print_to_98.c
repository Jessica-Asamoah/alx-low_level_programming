#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 * @n: input integer to start from
 * Description: Prints all natural numbers from n to 98
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n > 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else
	{
		while (n >= 98)
		{
			_putchar(n + 0);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
