#include "lists.h"
/**
 * insert_dnodeint_at_index - adds a new node at the end of a dlistint_t list.
 * @h: pointer to head of list
 * @idx: new node index
 * @n: new node data
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *newNode, *lastNode;

if (*h == NULL && idx != 0)
return (NULL);
newNode = malloc(sizeof(dlistint_t));
if (!newNode)
return (NULL);
newNode->n = n;
newNode->next = NULL;
newNode->prev = NULL;
lastNode = *h;
if (idx == 0)
{
if (*h)
(*h)->prev = newNode;
newNode->next = *h;
*h = newNode;
return (newNode);
}
while (lastNode->next && i < idx)
{
lastNode = lastNode->next;
i++;
}
if (i != idx)
{
free(newNode);
return (NULL);
}
if (lastNode->prev)
lastNode->prev->next = newNode;
newNode->next = lastNode;
newNode->prev = lastNode->prev;
lastNode->prev = newNode;
return (newNode);
}
