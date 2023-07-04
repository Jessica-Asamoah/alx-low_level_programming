#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a list,
 * and returns the head node's data
 * @head: pointer of a pointer to listint_t
 *
 * Return: value of the delete node
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *new_head;

	if (!(*head) || !head)
		return (0);

	new_head = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = new_head;

	return (value);
}
