#include "lists.h"

/**
 * listint_len - get number of elements elements of a listint_s list.
 * @h: input list
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
