#include "lists.h"
/**
 * dlistint_len - get the number of elements in a linked dlistint_t list
 * @h: pointer to head of list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

if (!h)
return (0);
while (h)
{
h = h->next;
count++;
}
return (count);
}
