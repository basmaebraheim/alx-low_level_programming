#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to head of list
 * @n: new node data
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newNode = NULL;

newNode = malloc(sizeof(dlistint_t));
if (!newNode)
return (NULL);
newNode->n = n;

if (!*head)
return (newNode);

while ((*head)->prev)
{
*head = (*head)->prev;
}
(*head)->prev = newNode;
newNode->next = *head;
*head = newNode;
return newNode;
}
