#include "lists.h"
/**
 * print_dlistint - doubly linked list
 * @h: pointer to head of list
 *
 * Return: the number of nodes
 * description: function to print list items
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;

if (!h)
return (0);
while (h)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
