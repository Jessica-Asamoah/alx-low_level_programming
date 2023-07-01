#include "lists.h"

size_t step_through(const list_t *);
/**
 * list_len - Finds length of list
 * @h: pointer to a list_t
 *
 * Return: length of the list
 */

size_t list_len(const list_t *h)
{
	if (!h)
		return (0);

	if (!h->next)
		return (1);
	return (1 + step_through(h));
}

/**
 * step_through - Steps through the list
 * @h: pointer to list_t
 *
 * Return: Count for every step
 */

size_t step_through(const list_t *h)
{
	if (!h->next)
		return (0);
	return (1 + step_through(h->next));
}
