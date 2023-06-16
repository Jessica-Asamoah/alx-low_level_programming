#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: Unsigned Input Integer
 *
 * Return: A pointer to allocated memory or NULL(failure)
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
