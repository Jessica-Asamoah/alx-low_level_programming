#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint
 * linked list
 * @head: pointer to a head of list
 * @index: node to fetch from a list starting at 0
 *
 * Return: pointer to a node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;

	if (!head)
		return (NULL);

	node = head;
	while (i < index)
	{
		if (!node)
			return (NULL);
		node = node->next;
		i++;
	}
	return (node);
}
