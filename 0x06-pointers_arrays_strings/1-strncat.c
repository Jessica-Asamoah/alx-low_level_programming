#include "main.h"

/**
 * _strncat - concatenaates two strings, except that it uses at n bytes from src
 * @dest: input string
 * @src: input string
 * @n: input integer
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	if ((dest == NULL) && (src == NULL))
		return NULL;

	while (*dest != '\0')
	{
		dest++;
	}

	while (n--)
	{
		if (!(*dest++ = *src++))
		{
			return dest;
		}
	}
	*dest = '\0';

	return (dest);
}
