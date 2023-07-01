#include "lists.h"
#include <string.h>

/**
 * add_node - Function that adds a new node at the
 * beginning of a list_t list
 * @head: address to a node list_t
 * @str: String to add to the lists content
 *
 * Return: pointer to a list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = 0;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	while (str[len])
		len++;
	new->len = len;

	new->str = strdup(str);
	if (!(*head))
		new->next = NULL;
	else
		new->next = *head;
	*head = new;

	return (*head);
}
