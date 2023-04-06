#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: input character
 * Return: void
 */

void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
