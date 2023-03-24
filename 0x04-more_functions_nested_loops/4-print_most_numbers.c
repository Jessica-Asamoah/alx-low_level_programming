#include <stdio.h>
#include <stdlib.h>

/**
 * print_most_numbers - Entry point
 * Desription: prints numbers from 0 to 9 except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			continue;
		_putchar(i)
	}
	_putchar('\n')
}
