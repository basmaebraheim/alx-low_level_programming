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

newNode = malloc(sizeof(dlistint_t));
if (!newNode)
return (NULL);
newNode->n = n;
newNode->next = NULL;
newNode->prev = NULL;

lastNode = *h;
while (lastNode && i < idx)
{
lastNode = lastNode->next;
i++;
}

if (!lastNode)
{
free(newNode);
return (NULL);
}

lastNode->prev->next = newNode;
newNode->next = lastNode;
newNode->prev = lastNode->prev;
lastNode->prev = newNode;

return (newNode);
}
