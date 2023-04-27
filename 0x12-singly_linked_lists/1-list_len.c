#include "lists.h"

/**
 * list_len - Function to get length of a linked list
 * @h: head
 *
 * Return: length of the list
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		node = node->next;
		len++;
	}
	return (len);
}
