#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_s list.
 * @h: input list
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
