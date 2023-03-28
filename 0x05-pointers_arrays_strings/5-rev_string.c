#include "main.h"

/**
* rev_string - reverses a string
* @s: input string
* Description: reversing a string
*/

void rev_string(char *s)
{
	int i, len;
	char a, z;

	len = _strlen(s) - 1;
	i = 0;

	while (i < len)
	{
		a = s[i];
		z = s[len];
		s[i++] = z;
		s[len--] = a;
	}
}
