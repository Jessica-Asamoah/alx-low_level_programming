#include <string.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: input string
 * @s2: input string
 *
 * Return: not sure
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
