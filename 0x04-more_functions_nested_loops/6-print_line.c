#include "main.h"

/**
 * print_line - Entry point
 * Desription: draws a straight line in the terminal
 * Return: void
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
