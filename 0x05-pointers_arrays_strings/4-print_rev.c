#include "main.h"

/**
* print_rev - Prints a string,in reverse, followed by a new line
* @s: input string
* Description: Printing the characters of a string in reverse
*/

void print_rev(char *s)
{
	while (*s)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
