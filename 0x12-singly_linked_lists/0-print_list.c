#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - Function that prints the contents of a list
 * @h: pointer to list
 *
 * Return: Number of elements in list
 */

size_t print_list(const list_t *h)
{
	size_t n_nodes;

	if (!h)
		return (0);
	n_nodes = 0;
	do {
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		n_nodes++;
	} while (h);

	return (n_nodes);
}
