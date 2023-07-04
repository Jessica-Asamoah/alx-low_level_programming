#include "lists.h"

/**
 * listint_len - Function that returns the number of elements
 * in a linked listint_t list
 * @h: pointer to the head
 *
 * Return: length of list
 */

size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
