#include <string.h>
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
	if (dest == 0 && src == 0)
		return 0;

	int i = strlen(dest);
	int a = 0;
	int b = i;

	while (a < n && src[a] != '\0')
	{ 
		dest[i++] = src[a++];
	}
	dest[i] = '\0';

	return (dest);
}
