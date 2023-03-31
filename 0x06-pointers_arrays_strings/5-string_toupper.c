#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: input string
 *
 * Return: nothing
 */

char *string_toupper(char *s)
{
	char *new = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (new);
}
