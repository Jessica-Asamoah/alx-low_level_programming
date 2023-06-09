#include "main.h"

/**
 * _strlen - Function that returns length of a string
 * @s: Input string
 *
 * Return: void
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
