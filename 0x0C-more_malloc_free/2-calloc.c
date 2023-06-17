#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array using malloc
 * @nmemb: Number of memory spaces
 * @size: size of nmemb
 *
 * Return: A pointer to allocated space or NUll(failure)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *space;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = malloc(nmemb * size);
	if (space == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*(space + 1) = 0;

	return (space);
}
