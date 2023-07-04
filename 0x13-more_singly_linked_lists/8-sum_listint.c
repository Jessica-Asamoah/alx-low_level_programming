#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all the
 * data(n) of a linkint_t linked list
 * @head: pointer to the head of list
 *
 * Return: Sum else 0 if empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
