#include "lists.h"

static listint_t *new_node(const int n);
/**
 * add_nodeint_end - Function that adds a new node at
 * the end of a listint_t list
 * @head: pointer of a pointer to the head
 * @n: Number value to set the new node
 *
 * Return: Pointer to the head of list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *new, *temp;

        if (!(*head))
        {
                *head = new_node(n);
                return (*head);
        }

        temp = *head;
        while (temp)
        {
                if (!temp->next)
                {
                        new = new_node(n);
                        temp->next = new;
                        break;
                }
                temp = temp->next;
        }
        return (*head);
}
/**
 * new_node - creates a new listint_t node.
 * @n: number to place inside the node.
 *
 * Return: pointer to the new node.
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
