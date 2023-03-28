#include "main.h"

/**
* rev_string - reverses a string
* @s: input string
* Description: reversing a string
*/

void rev_string(char *s)
{
	while (*s)
	{
		_putchar(*s--);
	}
}
