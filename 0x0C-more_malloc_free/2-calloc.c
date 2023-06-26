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
	void *res = NULL;
	unsigned long prod = size * nmemb;
	unsigned int i;
	char *p = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (prod / size != nmemb)
		return (NULL);

	res = malloc(nmemb * size);
	if (res != NULL)
	{
		p = res;
		for (i = 0; i < prod; i++)
			p[i] = 0;
	}
	return (res);
}
