#include "lists.h"

/**
 * list_len- get number of elements in list.
 * @h: input list
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
