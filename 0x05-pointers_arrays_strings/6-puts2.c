#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str - input string
 * Return: nothing
 */

void puts2(char *str)
{
	while (*str)
	{
		_putchar(*(str + 2));
	}
	_putchar('\n');
}
