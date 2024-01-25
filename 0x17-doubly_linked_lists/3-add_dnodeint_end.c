#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to head of list
 * @n: new node data
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newNode, *lastNode;

newNode = malloc(sizeof(dlistint_t));
if (!newNode)
return (NULL);
newNode->n = n;
newNode->next = NULL;
newNode->prev = *head;

if (!*head)
{
*head = newNode;
return (newNode);
}

lastNode = *head;
while (lastNode->next)
lastNode = lastNode->next;

lastNode->next = newNode;
newNode->prev = lastNode;

return (newNode);
}
