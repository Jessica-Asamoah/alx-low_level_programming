#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Entry point
 * @head: pointer to the head
 * @str: string
 *
 * Return: pointer to new element/NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;
	list_t *node = *head;
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->len = len;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (node->next != NULL)
			node = node->next;
		node->next = new;
	}
	return (new);
}
