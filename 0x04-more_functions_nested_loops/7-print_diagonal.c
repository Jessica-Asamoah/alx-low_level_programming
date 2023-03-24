#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_diagonal - entry point
 * Description: draws a diagonal line in the terminal
 * return: returns n
 */

void print_diagonal(int n)
{
	int len;
	int space;

	if (n > 0)
	{
		for (len = 0; len > n; len++)
		{
			for (space = 0; space < len; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
			
			if (len == n-1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
