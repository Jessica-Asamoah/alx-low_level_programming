#include "main.h"

/**
* print_rev - Prints a string,in reverse, followed by a new line
* @s: input string
* Description: Printing the characters of a string in reverse
*/

void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; ++i)
		;

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
