#include "main.h"

/**_memset - Function that fills memory with constant bytes
 * @s: location to be filled
 * @b: char to fill
 * @n: number of bytes
 *
 * Return: returns pointer to location
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
