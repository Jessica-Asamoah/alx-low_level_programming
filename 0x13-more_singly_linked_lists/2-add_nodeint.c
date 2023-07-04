#include "lists.h"

static listint_t *new_node(const int n);

/**
 * add_nodeint - Function that adds a new node at the
 * beginning of a listint_t list
 * @head: pointer
 * @n: value to set the new list to
 *
 * Return: pointer to a pointer of listint_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!(*head))
	{
		*head = new_node(n);
		return (*head);
	}

	new = new_node(n);
	new->next = *head;
	*head = new;
	return (*head);
}

/**
 * new_node - creates a new listint_t node
 * @n: number to be placed inside the node
 *
 * Return: pointer to the new node
 */

static listint_t *new_node(const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	return (new);
}
