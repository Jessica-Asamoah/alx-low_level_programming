#include "main.h"

/**
* _puts - Prints a string, followed by a new line
* @str: input string
* Descripttion: Printing the characters of a string
*/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
