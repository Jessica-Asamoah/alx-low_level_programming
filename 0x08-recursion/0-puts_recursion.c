#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: input character
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursions(s + 1);
	}
	else
		_putchar('\n');
}
