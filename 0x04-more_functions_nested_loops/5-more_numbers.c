#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * more_numbers - Entry point
 * Desription: prints numbers from 0 to 14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int n;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
