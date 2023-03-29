#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: input string
 * Return: nothing
 */

void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; ++i)
		;
	i -= 1;

	for (j = 0; j <= i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
